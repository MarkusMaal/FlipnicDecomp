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

// Function: FUN_001b9da0
// Address: 0x1b9da0 - 0x1ba508
void FUN_001b9da0_0x1b9da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b9da0_0x1b9da0");
#endif

    switch (ctx->pc) {
        case 0x1b9da0u: goto label_1b9da0;
        case 0x1b9da4u: goto label_1b9da4;
        case 0x1b9da8u: goto label_1b9da8;
        case 0x1b9dacu: goto label_1b9dac;
        case 0x1b9db0u: goto label_1b9db0;
        case 0x1b9db4u: goto label_1b9db4;
        case 0x1b9db8u: goto label_1b9db8;
        case 0x1b9dbcu: goto label_1b9dbc;
        case 0x1b9dc0u: goto label_1b9dc0;
        case 0x1b9dc4u: goto label_1b9dc4;
        case 0x1b9dc8u: goto label_1b9dc8;
        case 0x1b9dccu: goto label_1b9dcc;
        case 0x1b9dd0u: goto label_1b9dd0;
        case 0x1b9dd4u: goto label_1b9dd4;
        case 0x1b9dd8u: goto label_1b9dd8;
        case 0x1b9ddcu: goto label_1b9ddc;
        case 0x1b9de0u: goto label_1b9de0;
        case 0x1b9de4u: goto label_1b9de4;
        case 0x1b9de8u: goto label_1b9de8;
        case 0x1b9decu: goto label_1b9dec;
        case 0x1b9df0u: goto label_1b9df0;
        case 0x1b9df4u: goto label_1b9df4;
        case 0x1b9df8u: goto label_1b9df8;
        case 0x1b9dfcu: goto label_1b9dfc;
        case 0x1b9e00u: goto label_1b9e00;
        case 0x1b9e04u: goto label_1b9e04;
        case 0x1b9e08u: goto label_1b9e08;
        case 0x1b9e0cu: goto label_1b9e0c;
        case 0x1b9e10u: goto label_1b9e10;
        case 0x1b9e14u: goto label_1b9e14;
        case 0x1b9e18u: goto label_1b9e18;
        case 0x1b9e1cu: goto label_1b9e1c;
        case 0x1b9e20u: goto label_1b9e20;
        case 0x1b9e24u: goto label_1b9e24;
        case 0x1b9e28u: goto label_1b9e28;
        case 0x1b9e2cu: goto label_1b9e2c;
        case 0x1b9e30u: goto label_1b9e30;
        case 0x1b9e34u: goto label_1b9e34;
        case 0x1b9e38u: goto label_1b9e38;
        case 0x1b9e3cu: goto label_1b9e3c;
        case 0x1b9e40u: goto label_1b9e40;
        case 0x1b9e44u: goto label_1b9e44;
        case 0x1b9e48u: goto label_1b9e48;
        case 0x1b9e4cu: goto label_1b9e4c;
        case 0x1b9e50u: goto label_1b9e50;
        case 0x1b9e54u: goto label_1b9e54;
        case 0x1b9e58u: goto label_1b9e58;
        case 0x1b9e5cu: goto label_1b9e5c;
        case 0x1b9e60u: goto label_1b9e60;
        case 0x1b9e64u: goto label_1b9e64;
        case 0x1b9e68u: goto label_1b9e68;
        case 0x1b9e6cu: goto label_1b9e6c;
        case 0x1b9e70u: goto label_1b9e70;
        case 0x1b9e74u: goto label_1b9e74;
        case 0x1b9e78u: goto label_1b9e78;
        case 0x1b9e7cu: goto label_1b9e7c;
        case 0x1b9e80u: goto label_1b9e80;
        case 0x1b9e84u: goto label_1b9e84;
        case 0x1b9e88u: goto label_1b9e88;
        case 0x1b9e8cu: goto label_1b9e8c;
        case 0x1b9e90u: goto label_1b9e90;
        case 0x1b9e94u: goto label_1b9e94;
        case 0x1b9e98u: goto label_1b9e98;
        case 0x1b9e9cu: goto label_1b9e9c;
        case 0x1b9ea0u: goto label_1b9ea0;
        case 0x1b9ea4u: goto label_1b9ea4;
        case 0x1b9ea8u: goto label_1b9ea8;
        case 0x1b9eacu: goto label_1b9eac;
        case 0x1b9eb0u: goto label_1b9eb0;
        case 0x1b9eb4u: goto label_1b9eb4;
        case 0x1b9eb8u: goto label_1b9eb8;
        case 0x1b9ebcu: goto label_1b9ebc;
        case 0x1b9ec0u: goto label_1b9ec0;
        case 0x1b9ec4u: goto label_1b9ec4;
        case 0x1b9ec8u: goto label_1b9ec8;
        case 0x1b9eccu: goto label_1b9ecc;
        case 0x1b9ed0u: goto label_1b9ed0;
        case 0x1b9ed4u: goto label_1b9ed4;
        case 0x1b9ed8u: goto label_1b9ed8;
        case 0x1b9edcu: goto label_1b9edc;
        case 0x1b9ee0u: goto label_1b9ee0;
        case 0x1b9ee4u: goto label_1b9ee4;
        case 0x1b9ee8u: goto label_1b9ee8;
        case 0x1b9eecu: goto label_1b9eec;
        case 0x1b9ef0u: goto label_1b9ef0;
        case 0x1b9ef4u: goto label_1b9ef4;
        case 0x1b9ef8u: goto label_1b9ef8;
        case 0x1b9efcu: goto label_1b9efc;
        case 0x1b9f00u: goto label_1b9f00;
        case 0x1b9f04u: goto label_1b9f04;
        case 0x1b9f08u: goto label_1b9f08;
        case 0x1b9f0cu: goto label_1b9f0c;
        case 0x1b9f10u: goto label_1b9f10;
        case 0x1b9f14u: goto label_1b9f14;
        case 0x1b9f18u: goto label_1b9f18;
        case 0x1b9f1cu: goto label_1b9f1c;
        case 0x1b9f20u: goto label_1b9f20;
        case 0x1b9f24u: goto label_1b9f24;
        case 0x1b9f28u: goto label_1b9f28;
        case 0x1b9f2cu: goto label_1b9f2c;
        case 0x1b9f30u: goto label_1b9f30;
        case 0x1b9f34u: goto label_1b9f34;
        case 0x1b9f38u: goto label_1b9f38;
        case 0x1b9f3cu: goto label_1b9f3c;
        case 0x1b9f40u: goto label_1b9f40;
        case 0x1b9f44u: goto label_1b9f44;
        case 0x1b9f48u: goto label_1b9f48;
        case 0x1b9f4cu: goto label_1b9f4c;
        case 0x1b9f50u: goto label_1b9f50;
        case 0x1b9f54u: goto label_1b9f54;
        case 0x1b9f58u: goto label_1b9f58;
        case 0x1b9f5cu: goto label_1b9f5c;
        case 0x1b9f60u: goto label_1b9f60;
        case 0x1b9f64u: goto label_1b9f64;
        case 0x1b9f68u: goto label_1b9f68;
        case 0x1b9f6cu: goto label_1b9f6c;
        case 0x1b9f70u: goto label_1b9f70;
        case 0x1b9f74u: goto label_1b9f74;
        case 0x1b9f78u: goto label_1b9f78;
        case 0x1b9f7cu: goto label_1b9f7c;
        case 0x1b9f80u: goto label_1b9f80;
        case 0x1b9f84u: goto label_1b9f84;
        case 0x1b9f88u: goto label_1b9f88;
        case 0x1b9f8cu: goto label_1b9f8c;
        case 0x1b9f90u: goto label_1b9f90;
        case 0x1b9f94u: goto label_1b9f94;
        case 0x1b9f98u: goto label_1b9f98;
        case 0x1b9f9cu: goto label_1b9f9c;
        case 0x1b9fa0u: goto label_1b9fa0;
        case 0x1b9fa4u: goto label_1b9fa4;
        case 0x1b9fa8u: goto label_1b9fa8;
        case 0x1b9facu: goto label_1b9fac;
        case 0x1b9fb0u: goto label_1b9fb0;
        case 0x1b9fb4u: goto label_1b9fb4;
        case 0x1b9fb8u: goto label_1b9fb8;
        case 0x1b9fbcu: goto label_1b9fbc;
        case 0x1b9fc0u: goto label_1b9fc0;
        case 0x1b9fc4u: goto label_1b9fc4;
        case 0x1b9fc8u: goto label_1b9fc8;
        case 0x1b9fccu: goto label_1b9fcc;
        case 0x1b9fd0u: goto label_1b9fd0;
        case 0x1b9fd4u: goto label_1b9fd4;
        case 0x1b9fd8u: goto label_1b9fd8;
        case 0x1b9fdcu: goto label_1b9fdc;
        case 0x1b9fe0u: goto label_1b9fe0;
        case 0x1b9fe4u: goto label_1b9fe4;
        case 0x1b9fe8u: goto label_1b9fe8;
        case 0x1b9fecu: goto label_1b9fec;
        case 0x1b9ff0u: goto label_1b9ff0;
        case 0x1b9ff4u: goto label_1b9ff4;
        case 0x1b9ff8u: goto label_1b9ff8;
        case 0x1b9ffcu: goto label_1b9ffc;
        case 0x1ba000u: goto label_1ba000;
        case 0x1ba004u: goto label_1ba004;
        case 0x1ba008u: goto label_1ba008;
        case 0x1ba00cu: goto label_1ba00c;
        case 0x1ba010u: goto label_1ba010;
        case 0x1ba014u: goto label_1ba014;
        case 0x1ba018u: goto label_1ba018;
        case 0x1ba01cu: goto label_1ba01c;
        case 0x1ba020u: goto label_1ba020;
        case 0x1ba024u: goto label_1ba024;
        case 0x1ba028u: goto label_1ba028;
        case 0x1ba02cu: goto label_1ba02c;
        case 0x1ba030u: goto label_1ba030;
        case 0x1ba034u: goto label_1ba034;
        case 0x1ba038u: goto label_1ba038;
        case 0x1ba03cu: goto label_1ba03c;
        case 0x1ba040u: goto label_1ba040;
        case 0x1ba044u: goto label_1ba044;
        case 0x1ba048u: goto label_1ba048;
        case 0x1ba04cu: goto label_1ba04c;
        case 0x1ba050u: goto label_1ba050;
        case 0x1ba054u: goto label_1ba054;
        case 0x1ba058u: goto label_1ba058;
        case 0x1ba05cu: goto label_1ba05c;
        case 0x1ba060u: goto label_1ba060;
        case 0x1ba064u: goto label_1ba064;
        case 0x1ba068u: goto label_1ba068;
        case 0x1ba06cu: goto label_1ba06c;
        case 0x1ba070u: goto label_1ba070;
        case 0x1ba074u: goto label_1ba074;
        case 0x1ba078u: goto label_1ba078;
        case 0x1ba07cu: goto label_1ba07c;
        case 0x1ba080u: goto label_1ba080;
        case 0x1ba084u: goto label_1ba084;
        case 0x1ba088u: goto label_1ba088;
        case 0x1ba08cu: goto label_1ba08c;
        case 0x1ba090u: goto label_1ba090;
        case 0x1ba094u: goto label_1ba094;
        case 0x1ba098u: goto label_1ba098;
        case 0x1ba09cu: goto label_1ba09c;
        case 0x1ba0a0u: goto label_1ba0a0;
        case 0x1ba0a4u: goto label_1ba0a4;
        case 0x1ba0a8u: goto label_1ba0a8;
        case 0x1ba0acu: goto label_1ba0ac;
        case 0x1ba0b0u: goto label_1ba0b0;
        case 0x1ba0b4u: goto label_1ba0b4;
        case 0x1ba0b8u: goto label_1ba0b8;
        case 0x1ba0bcu: goto label_1ba0bc;
        case 0x1ba0c0u: goto label_1ba0c0;
        case 0x1ba0c4u: goto label_1ba0c4;
        case 0x1ba0c8u: goto label_1ba0c8;
        case 0x1ba0ccu: goto label_1ba0cc;
        case 0x1ba0d0u: goto label_1ba0d0;
        case 0x1ba0d4u: goto label_1ba0d4;
        case 0x1ba0d8u: goto label_1ba0d8;
        case 0x1ba0dcu: goto label_1ba0dc;
        case 0x1ba0e0u: goto label_1ba0e0;
        case 0x1ba0e4u: goto label_1ba0e4;
        case 0x1ba0e8u: goto label_1ba0e8;
        case 0x1ba0ecu: goto label_1ba0ec;
        case 0x1ba0f0u: goto label_1ba0f0;
        case 0x1ba0f4u: goto label_1ba0f4;
        case 0x1ba0f8u: goto label_1ba0f8;
        case 0x1ba0fcu: goto label_1ba0fc;
        case 0x1ba100u: goto label_1ba100;
        case 0x1ba104u: goto label_1ba104;
        case 0x1ba108u: goto label_1ba108;
        case 0x1ba10cu: goto label_1ba10c;
        case 0x1ba110u: goto label_1ba110;
        case 0x1ba114u: goto label_1ba114;
        case 0x1ba118u: goto label_1ba118;
        case 0x1ba11cu: goto label_1ba11c;
        case 0x1ba120u: goto label_1ba120;
        case 0x1ba124u: goto label_1ba124;
        case 0x1ba128u: goto label_1ba128;
        case 0x1ba12cu: goto label_1ba12c;
        case 0x1ba130u: goto label_1ba130;
        case 0x1ba134u: goto label_1ba134;
        case 0x1ba138u: goto label_1ba138;
        case 0x1ba13cu: goto label_1ba13c;
        case 0x1ba140u: goto label_1ba140;
        case 0x1ba144u: goto label_1ba144;
        case 0x1ba148u: goto label_1ba148;
        case 0x1ba14cu: goto label_1ba14c;
        case 0x1ba150u: goto label_1ba150;
        case 0x1ba154u: goto label_1ba154;
        case 0x1ba158u: goto label_1ba158;
        case 0x1ba15cu: goto label_1ba15c;
        case 0x1ba160u: goto label_1ba160;
        case 0x1ba164u: goto label_1ba164;
        case 0x1ba168u: goto label_1ba168;
        case 0x1ba16cu: goto label_1ba16c;
        case 0x1ba170u: goto label_1ba170;
        case 0x1ba174u: goto label_1ba174;
        case 0x1ba178u: goto label_1ba178;
        case 0x1ba17cu: goto label_1ba17c;
        case 0x1ba180u: goto label_1ba180;
        case 0x1ba184u: goto label_1ba184;
        case 0x1ba188u: goto label_1ba188;
        case 0x1ba18cu: goto label_1ba18c;
        case 0x1ba190u: goto label_1ba190;
        case 0x1ba194u: goto label_1ba194;
        case 0x1ba198u: goto label_1ba198;
        case 0x1ba19cu: goto label_1ba19c;
        case 0x1ba1a0u: goto label_1ba1a0;
        case 0x1ba1a4u: goto label_1ba1a4;
        case 0x1ba1a8u: goto label_1ba1a8;
        case 0x1ba1acu: goto label_1ba1ac;
        case 0x1ba1b0u: goto label_1ba1b0;
        case 0x1ba1b4u: goto label_1ba1b4;
        case 0x1ba1b8u: goto label_1ba1b8;
        case 0x1ba1bcu: goto label_1ba1bc;
        case 0x1ba1c0u: goto label_1ba1c0;
        case 0x1ba1c4u: goto label_1ba1c4;
        case 0x1ba1c8u: goto label_1ba1c8;
        case 0x1ba1ccu: goto label_1ba1cc;
        case 0x1ba1d0u: goto label_1ba1d0;
        case 0x1ba1d4u: goto label_1ba1d4;
        case 0x1ba1d8u: goto label_1ba1d8;
        case 0x1ba1dcu: goto label_1ba1dc;
        case 0x1ba1e0u: goto label_1ba1e0;
        case 0x1ba1e4u: goto label_1ba1e4;
        case 0x1ba1e8u: goto label_1ba1e8;
        case 0x1ba1ecu: goto label_1ba1ec;
        case 0x1ba1f0u: goto label_1ba1f0;
        case 0x1ba1f4u: goto label_1ba1f4;
        case 0x1ba1f8u: goto label_1ba1f8;
        case 0x1ba1fcu: goto label_1ba1fc;
        case 0x1ba200u: goto label_1ba200;
        case 0x1ba204u: goto label_1ba204;
        case 0x1ba208u: goto label_1ba208;
        case 0x1ba20cu: goto label_1ba20c;
        case 0x1ba210u: goto label_1ba210;
        case 0x1ba214u: goto label_1ba214;
        case 0x1ba218u: goto label_1ba218;
        case 0x1ba21cu: goto label_1ba21c;
        case 0x1ba220u: goto label_1ba220;
        case 0x1ba224u: goto label_1ba224;
        case 0x1ba228u: goto label_1ba228;
        case 0x1ba22cu: goto label_1ba22c;
        case 0x1ba230u: goto label_1ba230;
        case 0x1ba234u: goto label_1ba234;
        case 0x1ba238u: goto label_1ba238;
        case 0x1ba23cu: goto label_1ba23c;
        case 0x1ba240u: goto label_1ba240;
        case 0x1ba244u: goto label_1ba244;
        case 0x1ba248u: goto label_1ba248;
        case 0x1ba24cu: goto label_1ba24c;
        case 0x1ba250u: goto label_1ba250;
        case 0x1ba254u: goto label_1ba254;
        case 0x1ba258u: goto label_1ba258;
        case 0x1ba25cu: goto label_1ba25c;
        case 0x1ba260u: goto label_1ba260;
        case 0x1ba264u: goto label_1ba264;
        case 0x1ba268u: goto label_1ba268;
        case 0x1ba26cu: goto label_1ba26c;
        case 0x1ba270u: goto label_1ba270;
        case 0x1ba274u: goto label_1ba274;
        case 0x1ba278u: goto label_1ba278;
        case 0x1ba27cu: goto label_1ba27c;
        case 0x1ba280u: goto label_1ba280;
        case 0x1ba284u: goto label_1ba284;
        case 0x1ba288u: goto label_1ba288;
        case 0x1ba28cu: goto label_1ba28c;
        case 0x1ba290u: goto label_1ba290;
        case 0x1ba294u: goto label_1ba294;
        case 0x1ba298u: goto label_1ba298;
        case 0x1ba29cu: goto label_1ba29c;
        case 0x1ba2a0u: goto label_1ba2a0;
        case 0x1ba2a4u: goto label_1ba2a4;
        case 0x1ba2a8u: goto label_1ba2a8;
        case 0x1ba2acu: goto label_1ba2ac;
        case 0x1ba2b0u: goto label_1ba2b0;
        case 0x1ba2b4u: goto label_1ba2b4;
        case 0x1ba2b8u: goto label_1ba2b8;
        case 0x1ba2bcu: goto label_1ba2bc;
        case 0x1ba2c0u: goto label_1ba2c0;
        case 0x1ba2c4u: goto label_1ba2c4;
        case 0x1ba2c8u: goto label_1ba2c8;
        case 0x1ba2ccu: goto label_1ba2cc;
        case 0x1ba2d0u: goto label_1ba2d0;
        case 0x1ba2d4u: goto label_1ba2d4;
        case 0x1ba2d8u: goto label_1ba2d8;
        case 0x1ba2dcu: goto label_1ba2dc;
        case 0x1ba2e0u: goto label_1ba2e0;
        case 0x1ba2e4u: goto label_1ba2e4;
        case 0x1ba2e8u: goto label_1ba2e8;
        case 0x1ba2ecu: goto label_1ba2ec;
        case 0x1ba2f0u: goto label_1ba2f0;
        case 0x1ba2f4u: goto label_1ba2f4;
        case 0x1ba2f8u: goto label_1ba2f8;
        case 0x1ba2fcu: goto label_1ba2fc;
        case 0x1ba300u: goto label_1ba300;
        case 0x1ba304u: goto label_1ba304;
        case 0x1ba308u: goto label_1ba308;
        case 0x1ba30cu: goto label_1ba30c;
        case 0x1ba310u: goto label_1ba310;
        case 0x1ba314u: goto label_1ba314;
        case 0x1ba318u: goto label_1ba318;
        case 0x1ba31cu: goto label_1ba31c;
        case 0x1ba320u: goto label_1ba320;
        case 0x1ba324u: goto label_1ba324;
        case 0x1ba328u: goto label_1ba328;
        case 0x1ba32cu: goto label_1ba32c;
        case 0x1ba330u: goto label_1ba330;
        case 0x1ba334u: goto label_1ba334;
        case 0x1ba338u: goto label_1ba338;
        case 0x1ba33cu: goto label_1ba33c;
        case 0x1ba340u: goto label_1ba340;
        case 0x1ba344u: goto label_1ba344;
        case 0x1ba348u: goto label_1ba348;
        case 0x1ba34cu: goto label_1ba34c;
        case 0x1ba350u: goto label_1ba350;
        case 0x1ba354u: goto label_1ba354;
        case 0x1ba358u: goto label_1ba358;
        case 0x1ba35cu: goto label_1ba35c;
        case 0x1ba360u: goto label_1ba360;
        case 0x1ba364u: goto label_1ba364;
        case 0x1ba368u: goto label_1ba368;
        case 0x1ba36cu: goto label_1ba36c;
        case 0x1ba370u: goto label_1ba370;
        case 0x1ba374u: goto label_1ba374;
        case 0x1ba378u: goto label_1ba378;
        case 0x1ba37cu: goto label_1ba37c;
        case 0x1ba380u: goto label_1ba380;
        case 0x1ba384u: goto label_1ba384;
        case 0x1ba388u: goto label_1ba388;
        case 0x1ba38cu: goto label_1ba38c;
        case 0x1ba390u: goto label_1ba390;
        case 0x1ba394u: goto label_1ba394;
        case 0x1ba398u: goto label_1ba398;
        case 0x1ba39cu: goto label_1ba39c;
        case 0x1ba3a0u: goto label_1ba3a0;
        case 0x1ba3a4u: goto label_1ba3a4;
        case 0x1ba3a8u: goto label_1ba3a8;
        case 0x1ba3acu: goto label_1ba3ac;
        case 0x1ba3b0u: goto label_1ba3b0;
        case 0x1ba3b4u: goto label_1ba3b4;
        case 0x1ba3b8u: goto label_1ba3b8;
        case 0x1ba3bcu: goto label_1ba3bc;
        case 0x1ba3c0u: goto label_1ba3c0;
        case 0x1ba3c4u: goto label_1ba3c4;
        case 0x1ba3c8u: goto label_1ba3c8;
        case 0x1ba3ccu: goto label_1ba3cc;
        case 0x1ba3d0u: goto label_1ba3d0;
        case 0x1ba3d4u: goto label_1ba3d4;
        case 0x1ba3d8u: goto label_1ba3d8;
        case 0x1ba3dcu: goto label_1ba3dc;
        case 0x1ba3e0u: goto label_1ba3e0;
        case 0x1ba3e4u: goto label_1ba3e4;
        case 0x1ba3e8u: goto label_1ba3e8;
        case 0x1ba3ecu: goto label_1ba3ec;
        case 0x1ba3f0u: goto label_1ba3f0;
        case 0x1ba3f4u: goto label_1ba3f4;
        case 0x1ba3f8u: goto label_1ba3f8;
        case 0x1ba3fcu: goto label_1ba3fc;
        case 0x1ba400u: goto label_1ba400;
        case 0x1ba404u: goto label_1ba404;
        case 0x1ba408u: goto label_1ba408;
        case 0x1ba40cu: goto label_1ba40c;
        case 0x1ba410u: goto label_1ba410;
        case 0x1ba414u: goto label_1ba414;
        case 0x1ba418u: goto label_1ba418;
        case 0x1ba41cu: goto label_1ba41c;
        case 0x1ba420u: goto label_1ba420;
        case 0x1ba424u: goto label_1ba424;
        case 0x1ba428u: goto label_1ba428;
        case 0x1ba42cu: goto label_1ba42c;
        case 0x1ba430u: goto label_1ba430;
        case 0x1ba434u: goto label_1ba434;
        case 0x1ba438u: goto label_1ba438;
        case 0x1ba43cu: goto label_1ba43c;
        case 0x1ba440u: goto label_1ba440;
        case 0x1ba444u: goto label_1ba444;
        case 0x1ba448u: goto label_1ba448;
        case 0x1ba44cu: goto label_1ba44c;
        case 0x1ba450u: goto label_1ba450;
        case 0x1ba454u: goto label_1ba454;
        case 0x1ba458u: goto label_1ba458;
        case 0x1ba45cu: goto label_1ba45c;
        case 0x1ba460u: goto label_1ba460;
        case 0x1ba464u: goto label_1ba464;
        case 0x1ba468u: goto label_1ba468;
        case 0x1ba46cu: goto label_1ba46c;
        case 0x1ba470u: goto label_1ba470;
        case 0x1ba474u: goto label_1ba474;
        case 0x1ba478u: goto label_1ba478;
        case 0x1ba47cu: goto label_1ba47c;
        case 0x1ba480u: goto label_1ba480;
        case 0x1ba484u: goto label_1ba484;
        case 0x1ba488u: goto label_1ba488;
        case 0x1ba48cu: goto label_1ba48c;
        case 0x1ba490u: goto label_1ba490;
        case 0x1ba494u: goto label_1ba494;
        case 0x1ba498u: goto label_1ba498;
        case 0x1ba49cu: goto label_1ba49c;
        case 0x1ba4a0u: goto label_1ba4a0;
        case 0x1ba4a4u: goto label_1ba4a4;
        case 0x1ba4a8u: goto label_1ba4a8;
        case 0x1ba4acu: goto label_1ba4ac;
        case 0x1ba4b0u: goto label_1ba4b0;
        case 0x1ba4b4u: goto label_1ba4b4;
        case 0x1ba4b8u: goto label_1ba4b8;
        case 0x1ba4bcu: goto label_1ba4bc;
        case 0x1ba4c0u: goto label_1ba4c0;
        case 0x1ba4c4u: goto label_1ba4c4;
        case 0x1ba4c8u: goto label_1ba4c8;
        case 0x1ba4ccu: goto label_1ba4cc;
        case 0x1ba4d0u: goto label_1ba4d0;
        case 0x1ba4d4u: goto label_1ba4d4;
        case 0x1ba4d8u: goto label_1ba4d8;
        case 0x1ba4dcu: goto label_1ba4dc;
        case 0x1ba4e0u: goto label_1ba4e0;
        case 0x1ba4e4u: goto label_1ba4e4;
        case 0x1ba4e8u: goto label_1ba4e8;
        case 0x1ba4ecu: goto label_1ba4ec;
        case 0x1ba4f0u: goto label_1ba4f0;
        case 0x1ba4f4u: goto label_1ba4f4;
        case 0x1ba4f8u: goto label_1ba4f8;
        case 0x1ba4fcu: goto label_1ba4fc;
        case 0x1ba500u: goto label_1ba500;
        case 0x1ba504u: goto label_1ba504;
        default: break;
    }

    ctx->pc = 0x1b9da0u;

label_1b9da0:
    // 0x1b9da0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x1b9da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_1b9da4:
    // 0x1b9da4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b9da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1b9da8:
    // 0x1b9da8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b9da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1b9dac:
    // 0x1b9dac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b9dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1b9db0:
    // 0x1b9db0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b9db0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b9db4:
    // 0x1b9db4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b9db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1b9db8:
    // 0x1b9db8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b9db8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b9dbc:
    // 0x1b9dbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b9dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1b9dc0:
    // 0x1b9dc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b9dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1b9dc4:
    // 0x1b9dc4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1b9dc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b9dc8:
    // 0x1b9dc8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b9dc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b9dcc:
    // 0x1b9dcc: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x1b9dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1b9dd0:
    // 0x1b9dd0: 0xc0485c8  jal         func_121720
label_1b9dd4:
    if (ctx->pc == 0x1B9DD4u) {
        ctx->pc = 0x1B9DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DD0u;
        // 0x1b9dd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9DD8u;
        goto label_1b9dd8;
    }
    ctx->pc = 0x1B9DD0u;
    SET_GPR_U32(ctx, 31, 0x1B9DD8u);
    ctx->pc = 0x1B9DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9DD0u;
    // 0x1b9dd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121720u, 0x1B9DD0u, 0x1B9DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DD8u;
label_1b9dd8:
    // 0x1b9dd8: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x1b9dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1b9ddc:
    // 0x1b9ddc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b9ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b9de0:
    // 0x1b9de0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b9de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b9de4:
    // 0x1b9de4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1b9de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1b9de8:
    // 0x1b9de8: 0x320f809  jalr        $t9
label_1b9dec:
    if (ctx->pc == 0x1B9DECu) {
        ctx->pc = 0x1B9DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DE8u;
        // 0x1b9dec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9DF0u;
        goto label_1b9df0;
    }
    ctx->pc = 0x1B9DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B9DF0u);
        ctx->pc = 0x1B9DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DE8u;
        // 0x1b9dec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9DE8u, 0x1B9DF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9DF0u;
label_1b9df0:
    // 0x1b9df0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9df4:
    // 0x1b9df4: 0x8022f470  lb          $v0, -0xB90($at)
    ctx->pc = 0x1b9df4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964336)));
label_1b9df8:
    // 0x1b9df8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1b9dfc:
    if (ctx->pc == 0x1B9DFCu) {
        ctx->pc = 0x1B9E00u;
        goto label_1b9e00;
    }
    ctx->pc = 0x1B9DF8u;
    {
        const bool branch_taken_0x1b9df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9df8) {
            ctx->pc = 0x1B9E60u;
            goto label_1b9e60;
        }
    }
    ctx->pc = 0x1B9E00u;
label_1b9e00:
    // 0x1b9e00: 0x3c02a02e  lui         $v0, 0xA02E
    ctx->pc = 0x1b9e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41006 << 16));
label_1b9e04:
    // 0x1b9e04: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1b9e04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1b9e08:
    // 0x1b9e08: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x1b9e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1b9e0c:
    // 0x1b9e0c: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x1b9e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_1b9e10:
    // 0x1b9e10: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1b9e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_1b9e14:
    // 0x1b9e14: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x1b9e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_1b9e18:
    // 0x1b9e18: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b9e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1b9e1c:
    // 0x1b9e1c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1b9e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1b9e20:
    // 0x1b9e20: 0x3c025252  lui         $v0, 0x5252
    ctx->pc = 0x1b9e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21074 << 16));
label_1b9e24:
    // 0x1b9e24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9e28:
    // 0x1b9e28: 0xfc24f480  sd          $a0, -0xB80($at)
    ctx->pc = 0x1b9e28u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294964352), GPR_U64(ctx, 4));
label_1b9e2c:
    // 0x1b9e2c: 0x3442521e  ori         $v0, $v0, 0x521E
    ctx->pc = 0x1b9e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21022);
label_1b9e30:
    // 0x1b9e30: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b9e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1b9e34:
    // 0x1b9e34: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x1b9e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
label_1b9e38:
    // 0x1b9e38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b9e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b9e3c:
    // 0x1b9e3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9e40:
    // 0x1b9e40: 0x2484f480  addiu       $a0, $a0, -0xB80
    ctx->pc = 0x1b9e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964352));
label_1b9e44:
    // 0x1b9e44: 0xfc22f488  sd          $v0, -0xB78($at)
    ctx->pc = 0x1b9e44u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294964360), GPR_U64(ctx, 2));
label_1b9e48:
    // 0x1b9e48: 0x24a54bb0  addiu       $a1, $a1, 0x4BB0
    ctx->pc = 0x1b9e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19376));
label_1b9e4c:
    // 0x1b9e4c: 0xc07a540  jal         func_1E9500
label_1b9e50:
    if (ctx->pc == 0x1B9E50u) {
        ctx->pc = 0x1B9E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E4Cu;
        // 0x1b9e50: 0x24c6f460  addiu       $a2, $a2, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E54u;
        goto label_1b9e54;
    }
    ctx->pc = 0x1B9E4Cu;
    SET_GPR_U32(ctx, 31, 0x1B9E54u);
    ctx->pc = 0x1B9E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9E4Cu;
    // 0x1b9e50: 0x24c6f460  addiu       $a2, $a2, -0xBA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1B9E4Cu, 0x1B9E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9E54u;
label_1b9e54:
    // 0x1b9e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9e58:
    // 0x1b9e58: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9e5c:
    // 0x1b9e5c: 0xa022f470  sb          $v0, -0xB90($at)
    ctx->pc = 0x1b9e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964336), (uint8_t)GPR_U32(ctx, 2));
label_1b9e60:
    // 0x1b9e60: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9e64:
    // 0x1b9e64: 0x8022f490  lb          $v0, -0xB70($at)
    ctx->pc = 0x1b9e64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964368)));
label_1b9e68:
    // 0x1b9e68: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b9e6c:
    if (ctx->pc == 0x1B9E6Cu) {
        ctx->pc = 0x1B9E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E68u;
        // 0x1b9e6c: 0x24030042  addiu       $v1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E70u;
        goto label_1b9e70;
    }
    ctx->pc = 0x1B9E68u;
    {
        const bool branch_taken_0x1b9e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E68u;
        // 0x1b9e6c: 0x24030042  addiu       $v1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e68) {
            ctx->pc = 0x1B9E84u;
            goto label_1b9e84;
        }
    }
    ctx->pc = 0x1B9E70u;
label_1b9e70:
    // 0x1b9e70: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9e74:
    // 0x1b9e74: 0xfc23f4a8  sd          $v1, -0xB58($at)
    ctx->pc = 0x1b9e74u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294964392), GPR_U64(ctx, 3));
label_1b9e78:
    // 0x1b9e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9e7c:
    // 0x1b9e7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9e80:
    // 0x1b9e80: 0xa022f490  sb          $v0, -0xB70($at)
    ctx->pc = 0x1b9e80u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964368), (uint8_t)GPR_U32(ctx, 2));
label_1b9e84:
    // 0x1b9e84: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x1b9e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1b9e88:
    // 0x1b9e88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b9e8c:
    // 0x1b9e8c: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x1b9e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1b9e90:
    // 0x1b9e90: 0x1082006f  beq         $a0, $v0, . + 4 + (0x6F << 2)
label_1b9e94:
    if (ctx->pc == 0x1B9E94u) {
        ctx->pc = 0x1B9E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E90u;
        // 0x1b9e94: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E98u;
        goto label_1b9e98;
    }
    ctx->pc = 0x1B9E90u;
    {
        const bool branch_taken_0x1b9e90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B9E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E90u;
        // 0x1b9e94: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e90) {
            ctx->pc = 0x1BA050u;
            goto label_1ba050;
        }
    }
    ctx->pc = 0x1B9E98u;
label_1b9e98:
    // 0x1b9e98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b9e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b9e9c:
    // 0x1b9e9c: 0x1083004b  beq         $a0, $v1, . + 4 + (0x4B << 2)
label_1b9ea0:
    if (ctx->pc == 0x1B9EA0u) {
        ctx->pc = 0x1B9EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E9Cu;
        // 0x1b9ea0: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9EA4u;
        goto label_1b9ea4;
    }
    ctx->pc = 0x1B9E9Cu;
    {
        const bool branch_taken_0x1b9e9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B9EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E9Cu;
        // 0x1b9ea0: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e9c) {
            ctx->pc = 0x1B9FCCu;
            goto label_1b9fcc;
        }
    }
    ctx->pc = 0x1B9EA4u;
label_1b9ea4:
    // 0x1b9ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9ea8:
    // 0x1b9ea8: 0x10820026  beq         $a0, $v0, . + 4 + (0x26 << 2)
label_1b9eac:
    if (ctx->pc == 0x1B9EACu) {
        ctx->pc = 0x1B9EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EA8u;
        // 0x1b9eac: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9EB0u;
        goto label_1b9eb0;
    }
    ctx->pc = 0x1B9EA8u;
    {
        const bool branch_taken_0x1b9ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B9EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EA8u;
        // 0x1b9eac: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ea8) {
            ctx->pc = 0x1B9F44u;
            goto label_1b9f44;
        }
    }
    ctx->pc = 0x1B9EB0u;
label_1b9eb0:
    // 0x1b9eb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1b9eb4:
    if (ctx->pc == 0x1B9EB4u) {
        ctx->pc = 0x1B9EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EB0u;
        // 0x1b9eb4: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9EB8u;
        goto label_1b9eb8;
    }
    ctx->pc = 0x1B9EB0u;
    {
        const bool branch_taken_0x1b9eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EB0u;
        // 0x1b9eb4: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9eb0) {
            ctx->pc = 0x1B9EC0u;
            goto label_1b9ec0;
        }
    }
    ctx->pc = 0x1B9EB8u;
label_1b9eb8:
    // 0x1b9eb8: 0x10000085  b           . + 4 + (0x85 << 2)
label_1b9ebc:
    if (ctx->pc == 0x1B9EBCu) {
        ctx->pc = 0x1B9EC0u;
        goto label_1b9ec0;
    }
    ctx->pc = 0x1B9EB8u;
    {
        const bool branch_taken_0x1b9eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9eb8) {
            ctx->pc = 0x1BA0D0u;
            goto label_1ba0d0;
        }
    }
    ctx->pc = 0x1B9EC0u;
label_1b9ec0:
    // 0x1b9ec0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1b9ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_1b9ec4:
    // 0x1b9ec4: 0x902af4a0  lbu         $t2, -0xB60($at)
    ctx->pc = 0x1b9ec4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
label_1b9ec8:
    // 0x1b9ec8: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x1b9ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1b9ecc:
    // 0x1b9ecc: 0x30090003  andi        $t1, $zero, 0x3
    ctx->pc = 0x1b9eccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_1b9ed0:
    // 0x1b9ed0: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1b9ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_1b9ed4:
    // 0x1b9ed4: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x1b9ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b9ed8:
    // 0x1b9ed8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1b9ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1b9edc:
    // 0x1b9edc: 0x2404ffcf  addiu       $a0, $zero, -0x31
    ctx->pc = 0x1b9edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_1b9ee0:
    // 0x1b9ee0: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x1b9ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1b9ee4:
    // 0x1b9ee4: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x1b9ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_1b9ee8:
    // 0x1b9ee8: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x1b9ee8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
label_1b9eec:
    // 0x1b9eec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9ef0:
    // 0x1b9ef0: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1b9ef0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_1b9ef4:
    // 0x1b9ef4: 0xa028f4a0  sb          $t0, -0xB60($at)
    ctx->pc = 0x1b9ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 8));
label_1b9ef8:
    // 0x1b9ef8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9efc:
    // 0x1b9efc: 0x9028f4a0  lbu         $t0, -0xB60($at)
    ctx->pc = 0x1b9efcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
label_1b9f00:
    // 0x1b9f00: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1b9f00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
label_1b9f04:
    // 0x1b9f04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9f08:
    // 0x1b9f08: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1b9f08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1b9f0c:
    // 0x1b9f0c: 0xa026f4a0  sb          $a2, -0xB60($at)
    ctx->pc = 0x1b9f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 6));
label_1b9f10:
    // 0x1b9f10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9f14:
    // 0x1b9f14: 0x9026f4a0  lbu         $a2, -0xB60($at)
    ctx->pc = 0x1b9f14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
label_1b9f18:
    // 0x1b9f18: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1b9f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1b9f1c:
    // 0x1b9f1c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9f20:
    // 0x1b9f20: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1b9f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1b9f24:
    // 0x1b9f24: 0xa024f4a0  sb          $a0, -0xB60($at)
    ctx->pc = 0x1b9f24u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 4));
label_1b9f28:
    // 0x1b9f28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9f2c:
    // 0x1b9f2c: 0x9024f4a0  lbu         $a0, -0xB60($at)
    ctx->pc = 0x1b9f2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
label_1b9f30:
    // 0x1b9f30: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1b9f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1b9f34:
    // 0x1b9f34: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9f38:
    // 0x1b9f38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b9f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b9f3c:
    // 0x1b9f3c: 0x10000064  b           . + 4 + (0x64 << 2)
label_1b9f40:
    if (ctx->pc == 0x1B9F40u) {
        ctx->pc = 0x1B9F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F3Cu;
        // 0x1b9f40: 0xa022f4a0  sb          $v0, -0xB60($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9F44u;
        goto label_1b9f44;
    }
    ctx->pc = 0x1B9F3Cu;
    {
        const bool branch_taken_0x1b9f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F3Cu;
        // 0x1b9f40: 0xa022f4a0  sb          $v0, -0xB60($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f3c) {
            ctx->pc = 0x1BA0D0u;
            goto label_1ba0d0;
        }
    }
    ctx->pc = 0x1B9F44u;
label_1b9f44:
    // 0x1b9f44: 0x30090003  andi        $t1, $zero, 0x3
    ctx->pc = 0x1b9f44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_1b9f48:
    // 0x1b9f48: 0x902af4a0  lbu         $t2, -0xB60($at)
    ctx->pc = 0x1b9f48u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
label_1b9f4c:
    // 0x1b9f4c: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x1b9f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1b9f50:
    // 0x1b9f50: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1b9f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1b9f54:
    // 0x1b9f54: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1b9f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_1b9f58:
    // 0x1b9f58: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x1b9f58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b9f5c:
    // 0x1b9f5c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1b9f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_1b9f60:
    // 0x1b9f60: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1b9f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1b9f64:
    // 0x1b9f64: 0x2404ffcf  addiu       $a0, $zero, -0x31
    ctx->pc = 0x1b9f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_1b9f68:
    // 0x1b9f68: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x1b9f68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1b9f6c:
    // 0x1b9f6c: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x1b9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_1b9f70:
    // 0x1b9f70: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x1b9f70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
label_1b9f74:
    // 0x1b9f74: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9f78:
    // 0x1b9f78: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1b9f78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_1b9f7c:
    // 0x1b9f7c: 0xa028f4a0  sb          $t0, -0xB60($at)
    ctx->pc = 0x1b9f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 8));
label_1b9f80:
    // 0x1b9f80: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9f84:
    // 0x1b9f84: 0x9028f4a0  lbu         $t0, -0xB60($at)
    ctx->pc = 0x1b9f84u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
label_1b9f88:
    // 0x1b9f88: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1b9f88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
label_1b9f8c:
    // 0x1b9f8c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9f90:
    // 0x1b9f90: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1b9f90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1b9f94:
    // 0x1b9f94: 0xa026f4a0  sb          $a2, -0xB60($at)
    ctx->pc = 0x1b9f94u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 6));
label_1b9f98:
    // 0x1b9f98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9f9c:
    // 0x1b9f9c: 0x9026f4a0  lbu         $a2, -0xB60($at)
    ctx->pc = 0x1b9f9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
label_1b9fa0:
    // 0x1b9fa0: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1b9fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1b9fa4:
    // 0x1b9fa4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9fa8:
    // 0x1b9fa8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1b9fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1b9fac:
    // 0x1b9fac: 0xa024f4a0  sb          $a0, -0xB60($at)
    ctx->pc = 0x1b9facu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 4));
label_1b9fb0:
    // 0x1b9fb0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9fb4:
    // 0x1b9fb4: 0x9024f4a0  lbu         $a0, -0xB60($at)
    ctx->pc = 0x1b9fb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
label_1b9fb8:
    // 0x1b9fb8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1b9fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1b9fbc:
    // 0x1b9fbc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9fc0:
    // 0x1b9fc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b9fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b9fc4:
    // 0x1b9fc4: 0x10000042  b           . + 4 + (0x42 << 2)
label_1b9fc8:
    if (ctx->pc == 0x1B9FC8u) {
        ctx->pc = 0x1B9FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FC4u;
        // 0x1b9fc8: 0xa022f4a0  sb          $v0, -0xB60($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9FCCu;
        goto label_1b9fcc;
    }
    ctx->pc = 0x1B9FC4u;
    {
        const bool branch_taken_0x1b9fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FC4u;
        // 0x1b9fc8: 0xa022f4a0  sb          $v0, -0xB60($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fc4) {
            ctx->pc = 0x1BA0D0u;
            goto label_1ba0d0;
        }
    }
    ctx->pc = 0x1B9FCCu;
label_1b9fcc:
    // 0x1b9fcc: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x1b9fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_1b9fd0:
    // 0x1b9fd0: 0x902af4a0  lbu         $t2, -0xB60($at)
    ctx->pc = 0x1b9fd0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
label_1b9fd4:
    // 0x1b9fd4: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x1b9fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1b9fd8:
    // 0x1b9fd8: 0x30690003  andi        $t1, $v1, 0x3
    ctx->pc = 0x1b9fd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1b9fdc:
    // 0x1b9fdc: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1b9fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_1b9fe0:
    // 0x1b9fe0: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x1b9fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b9fe4:
    // 0x1b9fe4: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1b9fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1b9fe8:
    // 0x1b9fe8: 0x2404ffcf  addiu       $a0, $zero, -0x31
    ctx->pc = 0x1b9fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_1b9fec:
    // 0x1b9fec: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x1b9fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_1b9ff0:
    // 0x1b9ff0: 0x64030040  daddiu      $v1, $zero, 0x40
    ctx->pc = 0x1b9ff0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
label_1b9ff4:
    // 0x1b9ff4: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x1b9ff4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
label_1b9ff8:
    // 0x1b9ff8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b9ffc:
    // 0x1b9ffc: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1b9ffcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_1ba000:
    // 0x1ba000: 0xa028f4a0  sb          $t0, -0xB60($at)
    ctx->pc = 0x1ba000u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 8));
label_1ba004:
    // 0x1ba004: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba008:
    // 0x1ba008: 0x9028f4a0  lbu         $t0, -0xB60($at)
    ctx->pc = 0x1ba008u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
label_1ba00c:
    // 0x1ba00c: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1ba00cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
label_1ba010:
    // 0x1ba010: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba014:
    // 0x1ba014: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1ba014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1ba018:
    // 0x1ba018: 0xa026f4a0  sb          $a2, -0xB60($at)
    ctx->pc = 0x1ba018u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 6));
label_1ba01c:
    // 0x1ba01c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba020:
    // 0x1ba020: 0x9026f4a0  lbu         $a2, -0xB60($at)
    ctx->pc = 0x1ba020u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
label_1ba024:
    // 0x1ba024: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1ba024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1ba028:
    // 0x1ba028: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba02c:
    // 0x1ba02c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ba02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1ba030:
    // 0x1ba030: 0xa024f4a0  sb          $a0, -0xB60($at)
    ctx->pc = 0x1ba030u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 4));
label_1ba034:
    // 0x1ba034: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba038:
    // 0x1ba038: 0x9024f4a0  lbu         $a0, -0xB60($at)
    ctx->pc = 0x1ba038u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
label_1ba03c:
    // 0x1ba03c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1ba03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1ba040:
    // 0x1ba040: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba044:
    // 0x1ba044: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ba048:
    // 0x1ba048: 0x10000021  b           . + 4 + (0x21 << 2)
label_1ba04c:
    if (ctx->pc == 0x1BA04Cu) {
        ctx->pc = 0x1BA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA048u;
        // 0x1ba04c: 0xa022f4a0  sb          $v0, -0xB60($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA050u;
        goto label_1ba050;
    }
    ctx->pc = 0x1BA048u;
    {
        const bool branch_taken_0x1ba048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA048u;
        // 0x1ba04c: 0xa022f4a0  sb          $v0, -0xB60($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba048) {
            ctx->pc = 0x1BA0D0u;
            goto label_1ba0d0;
        }
    }
    ctx->pc = 0x1BA050u;
label_1ba050:
    // 0x1ba050: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x1ba050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_1ba054:
    // 0x1ba054: 0x902af4a0  lbu         $t2, -0xB60($at)
    ctx->pc = 0x1ba054u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
label_1ba058:
    // 0x1ba058: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x1ba058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1ba05c:
    // 0x1ba05c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1ba05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1ba060:
    // 0x1ba060: 0x64090002  daddiu      $t1, $zero, 0x2
    ctx->pc = 0x1ba060u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_1ba064:
    // 0x1ba064: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1ba064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_1ba068:
    // 0x1ba068: 0x64070008  daddiu      $a3, $zero, 0x8
    ctx->pc = 0x1ba068u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
label_1ba06c:
    // 0x1ba06c: 0x2404ffcf  addiu       $a0, $zero, -0x31
    ctx->pc = 0x1ba06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_1ba070:
    // 0x1ba070: 0x64050020  daddiu      $a1, $zero, 0x20
    ctx->pc = 0x1ba070u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
label_1ba074:
    // 0x1ba074: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x1ba074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_1ba078:
    // 0x1ba078: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x1ba078u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
label_1ba07c:
    // 0x1ba07c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba080:
    // 0x1ba080: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1ba080u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_1ba084:
    // 0x1ba084: 0xa028f4a0  sb          $t0, -0xB60($at)
    ctx->pc = 0x1ba084u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 8));
label_1ba088:
    // 0x1ba088: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba08c:
    // 0x1ba08c: 0x9028f4a0  lbu         $t0, -0xB60($at)
    ctx->pc = 0x1ba08cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
label_1ba090:
    // 0x1ba090: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1ba090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
label_1ba094:
    // 0x1ba094: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba098:
    // 0x1ba098: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1ba098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1ba09c:
    // 0x1ba09c: 0xa026f4a0  sb          $a2, -0xB60($at)
    ctx->pc = 0x1ba09cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 6));
label_1ba0a0:
    // 0x1ba0a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba0a4:
    // 0x1ba0a4: 0x9026f4a0  lbu         $a2, -0xB60($at)
    ctx->pc = 0x1ba0a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
label_1ba0a8:
    // 0x1ba0a8: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1ba0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1ba0ac:
    // 0x1ba0ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba0b0:
    // 0x1ba0b0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ba0b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1ba0b4:
    // 0x1ba0b4: 0xa024f4a0  sb          $a0, -0xB60($at)
    ctx->pc = 0x1ba0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 4));
label_1ba0b8:
    // 0x1ba0b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba0bc:
    // 0x1ba0bc: 0x9024f4a0  lbu         $a0, -0xB60($at)
    ctx->pc = 0x1ba0bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
label_1ba0c0:
    // 0x1ba0c0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1ba0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1ba0c4:
    // 0x1ba0c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba0c8:
    // 0x1ba0c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ba0cc:
    // 0x1ba0cc: 0xa022f4a0  sb          $v0, -0xB60($at)
    ctx->pc = 0x1ba0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 2));
label_1ba0d0:
    // 0x1ba0d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba0d4:
    // 0x1ba0d4: 0x8022f4b8  lb          $v0, -0xB48($at)
    ctx->pc = 0x1ba0d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964408)));
label_1ba0d8:
    // 0x1ba0d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1ba0dc:
    if (ctx->pc == 0x1BA0DCu) {
        ctx->pc = 0x1BA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0D8u;
        // 0x1ba0dc: 0x3c0342fe  lui         $v1, 0x42FE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA0E0u;
        goto label_1ba0e0;
    }
    ctx->pc = 0x1BA0D8u;
    {
        const bool branch_taken_0x1ba0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0D8u;
        // 0x1ba0dc: 0x3c0342fe  lui         $v1, 0x42FE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0d8) {
            ctx->pc = 0x1BA0F4u;
            goto label_1ba0f4;
        }
    }
    ctx->pc = 0x1BA0E0u;
label_1ba0e0:
    // 0x1ba0e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba0e4:
    // 0x1ba0e4: 0xac23f4b0  sw          $v1, -0xB50($at)
    ctx->pc = 0x1ba0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964400), GPR_U32(ctx, 3));
label_1ba0e8:
    // 0x1ba0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba0ec:
    // 0x1ba0ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba0f0:
    // 0x1ba0f0: 0xa022f4b8  sb          $v0, -0xB48($at)
    ctx->pc = 0x1ba0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964408), (uint8_t)GPR_U32(ctx, 2));
label_1ba0f4:
    // 0x1ba0f4: 0xc6830040  lwc1        $f3, 0x40($s4)
    ctx->pc = 0x1ba0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ba0f8:
    // 0x1ba0f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba0fc:
    // 0x1ba0fc: 0xc6820090  lwc1        $f2, 0x90($s4)
    ctx->pc = 0x1ba0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ba100:
    // 0x1ba100: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1ba100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_1ba104:
    // 0x1ba104: 0xc68100b0  lwc1        $f1, 0xB0($s4)
    ctx->pc = 0x1ba104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba108:
    // 0x1ba108: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1ba108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1ba10c:
    // 0x1ba10c: 0xc424f4b0  lwc1        $f4, -0xB50($at)
    ctx->pc = 0x1ba10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ba110:
    // 0x1ba110: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1ba110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ba114:
    // 0x1ba114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba118:
    // 0x1ba118: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1ba118u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1ba11c:
    // 0x1ba11c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ba11cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1ba120:
    // 0x1ba120: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1ba120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_1ba124:
    // 0x1ba124: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1ba124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ba128:
    // 0x1ba128: 0xc6830044  lwc1        $f3, 0x44($s4)
    ctx->pc = 0x1ba128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ba12c:
    // 0x1ba12c: 0xc6820094  lwc1        $f2, 0x94($s4)
    ctx->pc = 0x1ba12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ba130:
    // 0x1ba130: 0xc68100b4  lwc1        $f1, 0xB4($s4)
    ctx->pc = 0x1ba130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba134:
    // 0x1ba134: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1ba134u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1ba138:
    // 0x1ba138: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ba138u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1ba13c:
    // 0x1ba13c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1ba13cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_1ba140:
    // 0x1ba140: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1ba140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1ba144:
    // 0x1ba144: 0xc6830048  lwc1        $f3, 0x48($s4)
    ctx->pc = 0x1ba144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ba148:
    // 0x1ba148: 0xc6820098  lwc1        $f2, 0x98($s4)
    ctx->pc = 0x1ba148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ba14c:
    // 0x1ba14c: 0xc68100b8  lwc1        $f1, 0xB8($s4)
    ctx->pc = 0x1ba14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba150:
    // 0x1ba150: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1ba150u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1ba154:
    // 0x1ba154: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ba154u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1ba158:
    // 0x1ba158: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1ba158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_1ba15c:
    // 0x1ba15c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1ba15cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1ba160:
    // 0x1ba160: 0xc683004c  lwc1        $f3, 0x4C($s4)
    ctx->pc = 0x1ba160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ba164:
    // 0x1ba164: 0xc682009c  lwc1        $f2, 0x9C($s4)
    ctx->pc = 0x1ba164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ba168:
    // 0x1ba168: 0xc68100bc  lwc1        $f1, 0xBC($s4)
    ctx->pc = 0x1ba168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba16c:
    // 0x1ba16c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1ba16cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1ba170:
    // 0x1ba170: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ba170u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1ba174:
    // 0x1ba174: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ba174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ba178:
    // 0x1ba178: 0xc07d3a0  jal         func_1F4E80
label_1ba17c:
    if (ctx->pc == 0x1BA17Cu) {
        ctx->pc = 0x1BA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA178u;
        // 0x1ba17c: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA180u;
        goto label_1ba180;
    }
    ctx->pc = 0x1BA178u;
    SET_GPR_U32(ctx, 31, 0x1BA180u);
    ctx->pc = 0x1BA17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA178u;
    // 0x1ba17c: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E80u, 0x1BA178u, 0x1BA180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA180u;
label_1ba180:
    // 0x1ba180: 0xc6800130  lwc1        $f0, 0x130($s4)
    ctx->pc = 0x1ba180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba184:
    // 0x1ba184: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
label_1ba188:
    // 0x1ba188: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ba188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ba18c:
    // 0x1ba18c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba190:
    // 0x1ba190: 0x0  nop
    ctx->pc = 0x1ba190u;
    // NOP
label_1ba194:
    // 0x1ba194: 0xe4202f70  swc1        $f0, 0x2F70($at)
    ctx->pc = 0x1ba194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 12144), bits); }
label_1ba198:
    // 0x1ba198: 0xc6800134  lwc1        $f0, 0x134($s4)
    ctx->pc = 0x1ba198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba19c:
    // 0x1ba19c: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
label_1ba1a0:
    // 0x1ba1a0: 0xe4202f84  swc1        $f0, 0x2F84($at)
    ctx->pc = 0x1ba1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 12164), bits); }
label_1ba1a4:
    // 0x1ba1a4: 0xc6800130  lwc1        $f0, 0x130($s4)
    ctx->pc = 0x1ba1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba1a8:
    // 0x1ba1a8: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
label_1ba1ac:
    // 0x1ba1ac: 0xe4202f90  swc1        $f0, 0x2F90($at)
    ctx->pc = 0x1ba1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 12176), bits); }
label_1ba1b0:
    // 0x1ba1b0: 0xc6800134  lwc1        $f0, 0x134($s4)
    ctx->pc = 0x1ba1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba1b4:
    // 0x1ba1b4: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
label_1ba1b8:
    // 0x1ba1b8: 0xe4202f94  swc1        $f0, 0x2F94($at)
    ctx->pc = 0x1ba1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 12180), bits); }
label_1ba1bc:
    // 0x1ba1bc: 0xc6800130  lwc1        $f0, 0x130($s4)
    ctx->pc = 0x1ba1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba1c0:
    // 0x1ba1c0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ba1c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba1c4:
    // 0x1ba1c4: 0x0  nop
    ctx->pc = 0x1ba1c4u;
    // NOP
label_1ba1c8:
    // 0x1ba1c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1ba1cc:
    if (ctx->pc == 0x1BA1CCu) {
        ctx->pc = 0x1BA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1C8u;
        // 0x1ba1cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA1D0u;
        goto label_1ba1d0;
    }
    ctx->pc = 0x1BA1C8u;
    {
        const bool branch_taken_0x1ba1c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1C8u;
        // 0x1ba1cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba1c8) {
            ctx->pc = 0x1BA1E4u;
            goto label_1ba1e4;
        }
    }
    ctx->pc = 0x1BA1D0u;
label_1ba1d0:
    // 0x1ba1d0: 0xc6800134  lwc1        $f0, 0x134($s4)
    ctx->pc = 0x1ba1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba1d4:
    // 0x1ba1d4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ba1d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba1d8:
    // 0x1ba1d8: 0x0  nop
    ctx->pc = 0x1ba1d8u;
    // NOP
label_1ba1dc:
    // 0x1ba1dc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1ba1e0:
    if (ctx->pc == 0x1BA1E0u) {
        ctx->pc = 0x1BA1E4u;
        goto label_1ba1e4;
    }
    ctx->pc = 0x1BA1DCu;
    {
        const bool branch_taken_0x1ba1dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba1dc) {
            ctx->pc = 0x1BA1ECu;
            goto label_1ba1ec;
        }
    }
    ctx->pc = 0x1BA1E4u;
label_1ba1e4:
    // 0x1ba1e4: 0xc060e4c  jal         func_183930
label_1ba1e8:
    if (ctx->pc == 0x1BA1E8u) {
        ctx->pc = 0x1BA1ECu;
        goto label_1ba1ec;
    }
    ctx->pc = 0x1BA1E4u;
    SET_GPR_U32(ctx, 31, 0x1BA1ECu);
    ctx->pc = 0x183930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183930u, 0x1BA1E4u, 0x1BA1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1ECu;
label_1ba1ec:
    // 0x1ba1ec: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1ba1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1ba1f0:
    // 0x1ba1f0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1ba1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_1ba1f4:
    // 0x1ba1f4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ba1f8:
    if (ctx->pc == 0x1BA1F8u) {
        ctx->pc = 0x1BA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1F4u;
        // 0x1ba1f8: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA1FCu;
        goto label_1ba1fc;
    }
    ctx->pc = 0x1BA1F4u;
    {
        const bool branch_taken_0x1ba1f4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1F4u;
        // 0x1ba1f8: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba1f4) {
            ctx->pc = 0x1BA204u;
            goto label_1ba204;
        }
    }
    ctx->pc = 0x1BA1FCu;
label_1ba1fc:
    // 0x1ba1fc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1ba1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ba200:
    // 0x1ba200: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1ba200u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1ba204:
    // 0x1ba204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba208:
    // 0x1ba208: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x1ba208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_1ba20c:
    // 0x1ba20c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1ba20cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1ba210:
    // 0x1ba210: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ba214:
    if (ctx->pc == 0x1BA214u) {
        ctx->pc = 0x1BA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA210u;
        // 0x1ba214: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA218u;
        goto label_1ba218;
    }
    ctx->pc = 0x1BA210u;
    {
        const bool branch_taken_0x1ba210 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA210u;
        // 0x1ba214: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba210) {
            ctx->pc = 0x1BA220u;
            goto label_1ba220;
        }
    }
    ctx->pc = 0x1BA218u;
label_1ba218:
    // 0x1ba218: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1ba218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ba21c:
    // 0x1ba21c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1ba21cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1ba220:
    // 0x1ba220: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ba220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ba224:
    // 0x1ba224: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1ba224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ba228:
    // 0x1ba228: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x1ba228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba22c:
    // 0x1ba22c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1ba22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_1ba230:
    // 0x1ba230: 0x24422fa0  addiu       $v0, $v0, 0x2FA0
    ctx->pc = 0x1ba230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12192));
label_1ba234:
    // 0x1ba234: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x1ba234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba238:
    // 0x1ba238: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x1ba238u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1ba23c:
    // 0x1ba23c: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x1ba23cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_1ba240:
    // 0x1ba240: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ba240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1ba244:
    // 0x1ba244: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x1ba244u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1ba248:
    // 0x1ba248: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1ba248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1ba24c:
    // 0x1ba24c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba24cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ba250:
    // 0x1ba250: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1ba250u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_1ba254:
    // 0x1ba254: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ba258:
    // 0x1ba258: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1ba258u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
label_1ba25c:
    // 0x1ba25c: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x1ba25cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
label_1ba260:
    // 0x1ba260: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x1ba260u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
label_1ba264:
    // 0x1ba264: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x1ba264u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
label_1ba268:
    // 0x1ba268: 0x46030d00  add.s       $f20, $f1, $f3
    ctx->pc = 0x1ba268u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1ba26c:
    // 0x1ba26c: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1ba26cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
label_1ba270:
    // 0x1ba270: 0x46020540  add.s       $f21, $f0, $f2
    ctx->pc = 0x1ba270u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1ba274:
    // 0x1ba274: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1ba274u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_1ba278:
    // 0x1ba278: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x1ba278u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1ba27c:
    // 0x1ba27c: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x1ba27cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1ba280:
    // 0x1ba280: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x1ba280u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1ba284:
    // 0x1ba284: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x1ba284u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1ba288:
    // 0x1ba288: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x1ba288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1ba28c:
    // 0x1ba28c: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x1ba28cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1ba290:
    // 0x1ba290: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1ba290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1ba294:
    // 0x1ba294: 0xc07d3ac  jal         func_1F4EB0
label_1ba298:
    if (ctx->pc == 0x1BA298u) {
        ctx->pc = 0x1BA298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA294u;
        // 0x1ba298: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA29Cu;
        goto label_1ba29c;
    }
    ctx->pc = 0x1BA294u;
    SET_GPR_U32(ctx, 31, 0x1BA29Cu);
    ctx->pc = 0x1BA298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA294u;
    // 0x1ba298: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x1BA294u, 0x1BA29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA29Cu;
label_1ba29c:
    // 0x1ba29c: 0xc68c00a4  lwc1        $f12, 0xA4($s4)
    ctx->pc = 0x1ba29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ba2a0:
    // 0x1ba2a0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1ba2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1ba2a4:
    // 0x1ba2a4: 0xc07d3d4  jal         func_1F4F50
label_1ba2a8:
    if (ctx->pc == 0x1BA2A8u) {
        ctx->pc = 0x1BA2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2A4u;
        // 0x1ba2a8: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA2ACu;
        goto label_1ba2ac;
    }
    ctx->pc = 0x1BA2A4u;
    SET_GPR_U32(ctx, 31, 0x1BA2ACu);
    ctx->pc = 0x1BA2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA2A4u;
    // 0x1ba2a8: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x1BA2A4u, 0x1BA2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA2ACu;
label_1ba2ac:
    // 0x1ba2ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ba2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba2b0:
    // 0x1ba2b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ba2b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba2b4:
    // 0x1ba2b4: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x1ba2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_1ba2b8:
    // 0x1ba2b8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1ba2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1ba2bc:
    // 0x1ba2bc: 0x245200d0  addiu       $s2, $v0, 0xD0
    ctx->pc = 0x1ba2bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_1ba2c0:
    // 0x1ba2c0: 0x24460090  addiu       $a2, $v0, 0x90
    ctx->pc = 0x1ba2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_1ba2c4:
    // 0x1ba2c4: 0xc07d2e2  jal         func_1F4B88
label_1ba2c8:
    if (ctx->pc == 0x1BA2C8u) {
        ctx->pc = 0x1BA2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2C4u;
        // 0x1ba2c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA2CCu;
        goto label_1ba2cc;
    }
    ctx->pc = 0x1BA2C4u;
    SET_GPR_U32(ctx, 31, 0x1BA2CCu);
    ctx->pc = 0x1BA2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA2C4u;
    // 0x1ba2c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x1BA2C4u, 0x1BA2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA2CCu;
label_1ba2cc:
    // 0x1ba2cc: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1ba2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba2d0:
    // 0x1ba2d0: 0x3c023f92  lui         $v0, 0x3F92
    ctx->pc = 0x1ba2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16274 << 16));
label_1ba2d4:
    // 0x1ba2d4: 0x34424925  ori         $v0, $v0, 0x4925
    ctx->pc = 0x1ba2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18725);
label_1ba2d8:
    // 0x1ba2d8: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1ba2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
label_1ba2dc:
    // 0x1ba2dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba2e0:
    // 0x1ba2e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ba2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ba2e4:
    // 0x1ba2e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ba2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ba2e8:
    // 0x1ba2e8: 0x24c62ff0  addiu       $a2, $a2, 0x2FF0
    ctx->pc = 0x1ba2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12272));
label_1ba2ec:
    // 0x1ba2ec: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1ba2ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1ba2f0:
    // 0x1ba2f0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1ba2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1ba2f4:
    // 0x1ba2f4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1ba2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba2f8:
    // 0x1ba2f8: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1ba2f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1ba2fc:
    // 0x1ba2fc: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1ba2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1ba300:
    // 0x1ba300: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1ba300u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_1ba304:
    // 0x1ba304: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ba304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ba308:
    // 0x1ba308: 0xc07d370  jal         func_1F4DC0
label_1ba30c:
    if (ctx->pc == 0x1BA30Cu) {
        ctx->pc = 0x1BA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA308u;
        // 0x1ba30c: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA310u;
        goto label_1ba310;
    }
    ctx->pc = 0x1BA308u;
    SET_GPR_U32(ctx, 31, 0x1BA310u);
    ctx->pc = 0x1BA30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA308u;
    // 0x1ba30c: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x1BA308u, 0x1BA310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA310u;
label_1ba310:
    // 0x1ba310: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1ba310u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
label_1ba314:
    // 0x1ba314: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ba314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ba318:
    // 0x1ba318: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ba318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ba31c:
    // 0x1ba31c: 0xc07d36a  jal         func_1F4DA8
label_1ba320:
    if (ctx->pc == 0x1BA320u) {
        ctx->pc = 0x1BA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA31Cu;
        // 0x1ba320: 0x24c62fe0  addiu       $a2, $a2, 0x2FE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA324u;
        goto label_1ba324;
    }
    ctx->pc = 0x1BA31Cu;
    SET_GPR_U32(ctx, 31, 0x1BA324u);
    ctx->pc = 0x1BA320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA31Cu;
    // 0x1ba320: 0x24c62fe0  addiu       $a2, $a2, 0x2FE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1BA31Cu, 0x1BA324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA324u;
label_1ba324:
    // 0x1ba324: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ba324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ba328:
    // 0x1ba328: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x1ba328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_1ba32c:
    // 0x1ba32c: 0x24520110  addiu       $s2, $v0, 0x110
    ctx->pc = 0x1ba32cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_1ba330:
    // 0x1ba330: 0xc07d39c  jal         func_1F4E70
label_1ba334:
    if (ctx->pc == 0x1BA334u) {
        ctx->pc = 0x1BA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA330u;
        // 0x1ba334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA338u;
        goto label_1ba338;
    }
    ctx->pc = 0x1BA330u;
    SET_GPR_U32(ctx, 31, 0x1BA338u);
    ctx->pc = 0x1BA334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA330u;
    // 0x1ba334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E70u, 0x1BA330u, 0x1BA338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA338u;
label_1ba338:
    // 0x1ba338: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ba338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ba33c:
    // 0x1ba33c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1ba33cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_1ba340:
    // 0x1ba340: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x1ba340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_1ba344:
    // 0x1ba344: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
label_1ba348:
    if (ctx->pc == 0x1BA348u) {
        ctx->pc = 0x1BA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA344u;
        // 0x1ba348: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA34Cu;
        goto label_1ba34c;
    }
    ctx->pc = 0x1BA344u;
    {
        const bool branch_taken_0x1ba344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA344u;
        // 0x1ba348: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba344) {
            ctx->pc = 0x1BA2B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba2b4;
        }
    }
    ctx->pc = 0x1BA34Cu;
label_1ba34c:
    // 0x1ba34c: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x1ba34cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba350:
    // 0x1ba350: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ba350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ba354:
    // 0x1ba354: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1ba354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
label_1ba358:
    // 0x1ba358: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ba358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1ba35c:
    // 0x1ba35c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1ba35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ba360:
    // 0x1ba360: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1ba360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_1ba364:
    // 0x1ba364: 0x3484000b  ori         $a0, $a0, 0xB
    ctx->pc = 0x1ba364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11);
label_1ba368:
    // 0x1ba368: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba36c:
    // 0x1ba36c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ba36cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba370:
    // 0x1ba370: 0xa1070003  sb          $a3, 0x3($t0)
    ctx->pc = 0x1ba370u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 7));
label_1ba374:
    // 0x1ba374: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x1ba374u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
label_1ba378:
    // 0x1ba378: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x1ba378u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
label_1ba37c:
    // 0x1ba37c: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x1ba37cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
label_1ba380:
    // 0x1ba380: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x1ba380u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
label_1ba384:
    // 0x1ba384: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x1ba384u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
label_1ba388:
    // 0x1ba388: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba38c:
    // 0x1ba38c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1ba390:
    // 0x1ba390: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba390u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1ba394:
    // 0x1ba394: 0x7824f480  lq          $a0, -0xB80($at)
    ctx->pc = 0x1ba394u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 4294964352)));
label_1ba398:
    // 0x1ba398: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba39c:
    // 0x1ba39c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ba3a0:
    // 0x1ba3a0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1ba3a4:
    // 0x1ba3a4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba3a8:
    // 0x1ba3a8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1ba3ac:
    // 0x1ba3ac: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1ba3b0:
    // 0x1ba3b0: 0x7824f4a0  lq          $a0, -0xB60($at)
    ctx->pc = 0x1ba3b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 4294964384)));
label_1ba3b4:
    // 0x1ba3b4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba3b8:
    // 0x1ba3b8: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
label_1ba3bc:
    // 0x1ba3bc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1ba3c0:
    // 0x1ba3c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba3c4:
    // 0x1ba3c4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1ba3c8:
    // 0x1ba3c8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1ba3cc:
    // 0x1ba3cc: 0x7ba40080  lq          $a0, 0x80($sp)
    ctx->pc = 0x1ba3ccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ba3d0:
    // 0x1ba3d0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba3d4:
    // 0x1ba3d4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1ba3d8:
    // 0x1ba3d8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba3dc:
    // 0x1ba3dc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1ba3e0:
    // 0x1ba3e0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1ba3e4:
    // 0x1ba3e4: 0x78242f60  lq          $a0, 0x2F60($at)
    ctx->pc = 0x1ba3e4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 12128)));
label_1ba3e8:
    // 0x1ba3e8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba3ec:
    // 0x1ba3ec: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
label_1ba3f0:
    // 0x1ba3f0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1ba3f4:
    // 0x1ba3f4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba3f8:
    // 0x1ba3f8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1ba3fc:
    // 0x1ba3fc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1ba400:
    // 0x1ba400: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x1ba400u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1ba404:
    // 0x1ba404: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba408:
    // 0x1ba408: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba408u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1ba40c:
    // 0x1ba40c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba410:
    // 0x1ba410: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1ba414:
    // 0x1ba414: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba414u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1ba418:
    // 0x1ba418: 0x78242f70  lq          $a0, 0x2F70($at)
    ctx->pc = 0x1ba418u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 12144)));
label_1ba41c:
    // 0x1ba41c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba420:
    // 0x1ba420: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
label_1ba424:
    // 0x1ba424: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba424u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1ba428:
    // 0x1ba428: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba42c:
    // 0x1ba42c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1ba430:
    // 0x1ba430: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba430u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1ba434:
    // 0x1ba434: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x1ba434u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1ba438:
    // 0x1ba438: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba43c:
    // 0x1ba43c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba43cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1ba440:
    // 0x1ba440: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba444:
    // 0x1ba444: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1ba448:
    // 0x1ba448: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba448u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1ba44c:
    // 0x1ba44c: 0x78242f80  lq          $a0, 0x2F80($at)
    ctx->pc = 0x1ba44cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 12160)));
label_1ba450:
    // 0x1ba450: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba454:
    // 0x1ba454: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
label_1ba458:
    // 0x1ba458: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba458u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1ba45c:
    // 0x1ba45c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba460:
    // 0x1ba460: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1ba464:
    // 0x1ba464: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba464u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1ba468:
    // 0x1ba468: 0x7ba40130  lq          $a0, 0x130($sp)
    ctx->pc = 0x1ba468u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1ba46c:
    // 0x1ba46c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba470:
    // 0x1ba470: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba470u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1ba474:
    // 0x1ba474: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba478:
    // 0x1ba478: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1ba47c:
    // 0x1ba47c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba47cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1ba480:
    // 0x1ba480: 0x78242f90  lq          $a0, 0x2F90($at)
    ctx->pc = 0x1ba480u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 12176)));
label_1ba484:
    // 0x1ba484: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba488:
    // 0x1ba488: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba488u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1ba48c:
    // 0x1ba48c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba490:
    // 0x1ba490: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1ba494:
    // 0x1ba494: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba494u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1ba498:
    // 0x1ba498: 0x7ba40140  lq          $a0, 0x140($sp)
    ctx->pc = 0x1ba498u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1ba49c:
    // 0x1ba49c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba4a0:
    // 0x1ba4a0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ba4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1ba4a4:
    // 0x1ba4a4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ba4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba4a8:
    // 0x1ba4a8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1ba4ac:
    // 0x1ba4ac: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ba4acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1ba4b0:
    // 0x1ba4b0: 0xc6800130  lwc1        $f0, 0x130($s4)
    ctx->pc = 0x1ba4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba4b4:
    // 0x1ba4b4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ba4b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba4b8:
    // 0x1ba4b8: 0x0  nop
    ctx->pc = 0x1ba4b8u;
    // NOP
label_1ba4bc:
    // 0x1ba4bc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1ba4c0:
    if (ctx->pc == 0x1BA4C0u) {
        ctx->pc = 0x1BA4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4BCu;
        // 0x1ba4c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA4C4u;
        goto label_1ba4c4;
    }
    ctx->pc = 0x1BA4BCu;
    {
        const bool branch_taken_0x1ba4bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4BCu;
        // 0x1ba4c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4bc) {
            ctx->pc = 0x1BA4D8u;
            goto label_1ba4d8;
        }
    }
    ctx->pc = 0x1BA4C4u;
label_1ba4c4:
    // 0x1ba4c4: 0xc6800134  lwc1        $f0, 0x134($s4)
    ctx->pc = 0x1ba4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba4c8:
    // 0x1ba4c8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ba4c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba4cc:
    // 0x1ba4cc: 0x0  nop
    ctx->pc = 0x1ba4ccu;
    // NOP
label_1ba4d0:
    // 0x1ba4d0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1ba4d4:
    if (ctx->pc == 0x1BA4D4u) {
        ctx->pc = 0x1BA4D8u;
        goto label_1ba4d8;
    }
    ctx->pc = 0x1BA4D0u;
    {
        const bool branch_taken_0x1ba4d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba4d0) {
            ctx->pc = 0x1BA4E0u;
            goto label_1ba4e0;
        }
    }
    ctx->pc = 0x1BA4D8u;
label_1ba4d8:
    // 0x1ba4d8: 0xc060dd0  jal         func_183740
label_1ba4dc:
    if (ctx->pc == 0x1BA4DCu) {
        ctx->pc = 0x1BA4E0u;
        goto label_1ba4e0;
    }
    ctx->pc = 0x1BA4D8u;
    SET_GPR_U32(ctx, 31, 0x1BA4E0u);
    ctx->pc = 0x183740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183740u, 0x1BA4D8u, 0x1BA4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA4E0u;
label_1ba4e0:
    // 0x1ba4e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ba4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ba4e4:
    // 0x1ba4e4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1ba4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1ba4e8:
    // 0x1ba4e8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1ba4e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ba4ec:
    // 0x1ba4ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ba4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ba4f0:
    // 0x1ba4f0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ba4f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ba4f4:
    // 0x1ba4f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ba4f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ba4f8:
    // 0x1ba4f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ba4f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ba4fc:
    // 0x1ba4fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ba4fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ba500:
    // 0x1ba500: 0x3e00008  jr          $ra
label_1ba504:
    if (ctx->pc == 0x1BA504u) {
        ctx->pc = 0x1BA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA500u;
        // 0x1ba504: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA508u;
        goto label_fallthrough_0x1ba500;
    }
    ctx->pc = 0x1BA500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA500u;
        // 0x1ba504: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ba500:
    ctx->pc = 0x1BA508u;
}
