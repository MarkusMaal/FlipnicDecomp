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

// Function: FUN_001aad60
// Address: 0x1aad60 - 0x1ab7b0
void FUN_001aad60_0x1aad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aad60_0x1aad60");
#endif

    switch (ctx->pc) {
        case 0x1aad60u: goto label_1aad60;
        case 0x1aad64u: goto label_1aad64;
        case 0x1aad68u: goto label_1aad68;
        case 0x1aad6cu: goto label_1aad6c;
        case 0x1aad70u: goto label_1aad70;
        case 0x1aad74u: goto label_1aad74;
        case 0x1aad78u: goto label_1aad78;
        case 0x1aad7cu: goto label_1aad7c;
        case 0x1aad80u: goto label_1aad80;
        case 0x1aad84u: goto label_1aad84;
        case 0x1aad88u: goto label_1aad88;
        case 0x1aad8cu: goto label_1aad8c;
        case 0x1aad90u: goto label_1aad90;
        case 0x1aad94u: goto label_1aad94;
        case 0x1aad98u: goto label_1aad98;
        case 0x1aad9cu: goto label_1aad9c;
        case 0x1aada0u: goto label_1aada0;
        case 0x1aada4u: goto label_1aada4;
        case 0x1aada8u: goto label_1aada8;
        case 0x1aadacu: goto label_1aadac;
        case 0x1aadb0u: goto label_1aadb0;
        case 0x1aadb4u: goto label_1aadb4;
        case 0x1aadb8u: goto label_1aadb8;
        case 0x1aadbcu: goto label_1aadbc;
        case 0x1aadc0u: goto label_1aadc0;
        case 0x1aadc4u: goto label_1aadc4;
        case 0x1aadc8u: goto label_1aadc8;
        case 0x1aadccu: goto label_1aadcc;
        case 0x1aadd0u: goto label_1aadd0;
        case 0x1aadd4u: goto label_1aadd4;
        case 0x1aadd8u: goto label_1aadd8;
        case 0x1aaddcu: goto label_1aaddc;
        case 0x1aade0u: goto label_1aade0;
        case 0x1aade4u: goto label_1aade4;
        case 0x1aade8u: goto label_1aade8;
        case 0x1aadecu: goto label_1aadec;
        case 0x1aadf0u: goto label_1aadf0;
        case 0x1aadf4u: goto label_1aadf4;
        case 0x1aadf8u: goto label_1aadf8;
        case 0x1aadfcu: goto label_1aadfc;
        case 0x1aae00u: goto label_1aae00;
        case 0x1aae04u: goto label_1aae04;
        case 0x1aae08u: goto label_1aae08;
        case 0x1aae0cu: goto label_1aae0c;
        case 0x1aae10u: goto label_1aae10;
        case 0x1aae14u: goto label_1aae14;
        case 0x1aae18u: goto label_1aae18;
        case 0x1aae1cu: goto label_1aae1c;
        case 0x1aae20u: goto label_1aae20;
        case 0x1aae24u: goto label_1aae24;
        case 0x1aae28u: goto label_1aae28;
        case 0x1aae2cu: goto label_1aae2c;
        case 0x1aae30u: goto label_1aae30;
        case 0x1aae34u: goto label_1aae34;
        case 0x1aae38u: goto label_1aae38;
        case 0x1aae3cu: goto label_1aae3c;
        case 0x1aae40u: goto label_1aae40;
        case 0x1aae44u: goto label_1aae44;
        case 0x1aae48u: goto label_1aae48;
        case 0x1aae4cu: goto label_1aae4c;
        case 0x1aae50u: goto label_1aae50;
        case 0x1aae54u: goto label_1aae54;
        case 0x1aae58u: goto label_1aae58;
        case 0x1aae5cu: goto label_1aae5c;
        case 0x1aae60u: goto label_1aae60;
        case 0x1aae64u: goto label_1aae64;
        case 0x1aae68u: goto label_1aae68;
        case 0x1aae6cu: goto label_1aae6c;
        case 0x1aae70u: goto label_1aae70;
        case 0x1aae74u: goto label_1aae74;
        case 0x1aae78u: goto label_1aae78;
        case 0x1aae7cu: goto label_1aae7c;
        case 0x1aae80u: goto label_1aae80;
        case 0x1aae84u: goto label_1aae84;
        case 0x1aae88u: goto label_1aae88;
        case 0x1aae8cu: goto label_1aae8c;
        case 0x1aae90u: goto label_1aae90;
        case 0x1aae94u: goto label_1aae94;
        case 0x1aae98u: goto label_1aae98;
        case 0x1aae9cu: goto label_1aae9c;
        case 0x1aaea0u: goto label_1aaea0;
        case 0x1aaea4u: goto label_1aaea4;
        case 0x1aaea8u: goto label_1aaea8;
        case 0x1aaeacu: goto label_1aaeac;
        case 0x1aaeb0u: goto label_1aaeb0;
        case 0x1aaeb4u: goto label_1aaeb4;
        case 0x1aaeb8u: goto label_1aaeb8;
        case 0x1aaebcu: goto label_1aaebc;
        case 0x1aaec0u: goto label_1aaec0;
        case 0x1aaec4u: goto label_1aaec4;
        case 0x1aaec8u: goto label_1aaec8;
        case 0x1aaeccu: goto label_1aaecc;
        case 0x1aaed0u: goto label_1aaed0;
        case 0x1aaed4u: goto label_1aaed4;
        case 0x1aaed8u: goto label_1aaed8;
        case 0x1aaedcu: goto label_1aaedc;
        case 0x1aaee0u: goto label_1aaee0;
        case 0x1aaee4u: goto label_1aaee4;
        case 0x1aaee8u: goto label_1aaee8;
        case 0x1aaeecu: goto label_1aaeec;
        case 0x1aaef0u: goto label_1aaef0;
        case 0x1aaef4u: goto label_1aaef4;
        case 0x1aaef8u: goto label_1aaef8;
        case 0x1aaefcu: goto label_1aaefc;
        case 0x1aaf00u: goto label_1aaf00;
        case 0x1aaf04u: goto label_1aaf04;
        case 0x1aaf08u: goto label_1aaf08;
        case 0x1aaf0cu: goto label_1aaf0c;
        case 0x1aaf10u: goto label_1aaf10;
        case 0x1aaf14u: goto label_1aaf14;
        case 0x1aaf18u: goto label_1aaf18;
        case 0x1aaf1cu: goto label_1aaf1c;
        case 0x1aaf20u: goto label_1aaf20;
        case 0x1aaf24u: goto label_1aaf24;
        case 0x1aaf28u: goto label_1aaf28;
        case 0x1aaf2cu: goto label_1aaf2c;
        case 0x1aaf30u: goto label_1aaf30;
        case 0x1aaf34u: goto label_1aaf34;
        case 0x1aaf38u: goto label_1aaf38;
        case 0x1aaf3cu: goto label_1aaf3c;
        case 0x1aaf40u: goto label_1aaf40;
        case 0x1aaf44u: goto label_1aaf44;
        case 0x1aaf48u: goto label_1aaf48;
        case 0x1aaf4cu: goto label_1aaf4c;
        case 0x1aaf50u: goto label_1aaf50;
        case 0x1aaf54u: goto label_1aaf54;
        case 0x1aaf58u: goto label_1aaf58;
        case 0x1aaf5cu: goto label_1aaf5c;
        case 0x1aaf60u: goto label_1aaf60;
        case 0x1aaf64u: goto label_1aaf64;
        case 0x1aaf68u: goto label_1aaf68;
        case 0x1aaf6cu: goto label_1aaf6c;
        case 0x1aaf70u: goto label_1aaf70;
        case 0x1aaf74u: goto label_1aaf74;
        case 0x1aaf78u: goto label_1aaf78;
        case 0x1aaf7cu: goto label_1aaf7c;
        case 0x1aaf80u: goto label_1aaf80;
        case 0x1aaf84u: goto label_1aaf84;
        case 0x1aaf88u: goto label_1aaf88;
        case 0x1aaf8cu: goto label_1aaf8c;
        case 0x1aaf90u: goto label_1aaf90;
        case 0x1aaf94u: goto label_1aaf94;
        case 0x1aaf98u: goto label_1aaf98;
        case 0x1aaf9cu: goto label_1aaf9c;
        case 0x1aafa0u: goto label_1aafa0;
        case 0x1aafa4u: goto label_1aafa4;
        case 0x1aafa8u: goto label_1aafa8;
        case 0x1aafacu: goto label_1aafac;
        case 0x1aafb0u: goto label_1aafb0;
        case 0x1aafb4u: goto label_1aafb4;
        case 0x1aafb8u: goto label_1aafb8;
        case 0x1aafbcu: goto label_1aafbc;
        case 0x1aafc0u: goto label_1aafc0;
        case 0x1aafc4u: goto label_1aafc4;
        case 0x1aafc8u: goto label_1aafc8;
        case 0x1aafccu: goto label_1aafcc;
        case 0x1aafd0u: goto label_1aafd0;
        case 0x1aafd4u: goto label_1aafd4;
        case 0x1aafd8u: goto label_1aafd8;
        case 0x1aafdcu: goto label_1aafdc;
        case 0x1aafe0u: goto label_1aafe0;
        case 0x1aafe4u: goto label_1aafe4;
        case 0x1aafe8u: goto label_1aafe8;
        case 0x1aafecu: goto label_1aafec;
        case 0x1aaff0u: goto label_1aaff0;
        case 0x1aaff4u: goto label_1aaff4;
        case 0x1aaff8u: goto label_1aaff8;
        case 0x1aaffcu: goto label_1aaffc;
        case 0x1ab000u: goto label_1ab000;
        case 0x1ab004u: goto label_1ab004;
        case 0x1ab008u: goto label_1ab008;
        case 0x1ab00cu: goto label_1ab00c;
        case 0x1ab010u: goto label_1ab010;
        case 0x1ab014u: goto label_1ab014;
        case 0x1ab018u: goto label_1ab018;
        case 0x1ab01cu: goto label_1ab01c;
        case 0x1ab020u: goto label_1ab020;
        case 0x1ab024u: goto label_1ab024;
        case 0x1ab028u: goto label_1ab028;
        case 0x1ab02cu: goto label_1ab02c;
        case 0x1ab030u: goto label_1ab030;
        case 0x1ab034u: goto label_1ab034;
        case 0x1ab038u: goto label_1ab038;
        case 0x1ab03cu: goto label_1ab03c;
        case 0x1ab040u: goto label_1ab040;
        case 0x1ab044u: goto label_1ab044;
        case 0x1ab048u: goto label_1ab048;
        case 0x1ab04cu: goto label_1ab04c;
        case 0x1ab050u: goto label_1ab050;
        case 0x1ab054u: goto label_1ab054;
        case 0x1ab058u: goto label_1ab058;
        case 0x1ab05cu: goto label_1ab05c;
        case 0x1ab060u: goto label_1ab060;
        case 0x1ab064u: goto label_1ab064;
        case 0x1ab068u: goto label_1ab068;
        case 0x1ab06cu: goto label_1ab06c;
        case 0x1ab070u: goto label_1ab070;
        case 0x1ab074u: goto label_1ab074;
        case 0x1ab078u: goto label_1ab078;
        case 0x1ab07cu: goto label_1ab07c;
        case 0x1ab080u: goto label_1ab080;
        case 0x1ab084u: goto label_1ab084;
        case 0x1ab088u: goto label_1ab088;
        case 0x1ab08cu: goto label_1ab08c;
        case 0x1ab090u: goto label_1ab090;
        case 0x1ab094u: goto label_1ab094;
        case 0x1ab098u: goto label_1ab098;
        case 0x1ab09cu: goto label_1ab09c;
        case 0x1ab0a0u: goto label_1ab0a0;
        case 0x1ab0a4u: goto label_1ab0a4;
        case 0x1ab0a8u: goto label_1ab0a8;
        case 0x1ab0acu: goto label_1ab0ac;
        case 0x1ab0b0u: goto label_1ab0b0;
        case 0x1ab0b4u: goto label_1ab0b4;
        case 0x1ab0b8u: goto label_1ab0b8;
        case 0x1ab0bcu: goto label_1ab0bc;
        case 0x1ab0c0u: goto label_1ab0c0;
        case 0x1ab0c4u: goto label_1ab0c4;
        case 0x1ab0c8u: goto label_1ab0c8;
        case 0x1ab0ccu: goto label_1ab0cc;
        case 0x1ab0d0u: goto label_1ab0d0;
        case 0x1ab0d4u: goto label_1ab0d4;
        case 0x1ab0d8u: goto label_1ab0d8;
        case 0x1ab0dcu: goto label_1ab0dc;
        case 0x1ab0e0u: goto label_1ab0e0;
        case 0x1ab0e4u: goto label_1ab0e4;
        case 0x1ab0e8u: goto label_1ab0e8;
        case 0x1ab0ecu: goto label_1ab0ec;
        case 0x1ab0f0u: goto label_1ab0f0;
        case 0x1ab0f4u: goto label_1ab0f4;
        case 0x1ab0f8u: goto label_1ab0f8;
        case 0x1ab0fcu: goto label_1ab0fc;
        case 0x1ab100u: goto label_1ab100;
        case 0x1ab104u: goto label_1ab104;
        case 0x1ab108u: goto label_1ab108;
        case 0x1ab10cu: goto label_1ab10c;
        case 0x1ab110u: goto label_1ab110;
        case 0x1ab114u: goto label_1ab114;
        case 0x1ab118u: goto label_1ab118;
        case 0x1ab11cu: goto label_1ab11c;
        case 0x1ab120u: goto label_1ab120;
        case 0x1ab124u: goto label_1ab124;
        case 0x1ab128u: goto label_1ab128;
        case 0x1ab12cu: goto label_1ab12c;
        case 0x1ab130u: goto label_1ab130;
        case 0x1ab134u: goto label_1ab134;
        case 0x1ab138u: goto label_1ab138;
        case 0x1ab13cu: goto label_1ab13c;
        case 0x1ab140u: goto label_1ab140;
        case 0x1ab144u: goto label_1ab144;
        case 0x1ab148u: goto label_1ab148;
        case 0x1ab14cu: goto label_1ab14c;
        case 0x1ab150u: goto label_1ab150;
        case 0x1ab154u: goto label_1ab154;
        case 0x1ab158u: goto label_1ab158;
        case 0x1ab15cu: goto label_1ab15c;
        case 0x1ab160u: goto label_1ab160;
        case 0x1ab164u: goto label_1ab164;
        case 0x1ab168u: goto label_1ab168;
        case 0x1ab16cu: goto label_1ab16c;
        case 0x1ab170u: goto label_1ab170;
        case 0x1ab174u: goto label_1ab174;
        case 0x1ab178u: goto label_1ab178;
        case 0x1ab17cu: goto label_1ab17c;
        case 0x1ab180u: goto label_1ab180;
        case 0x1ab184u: goto label_1ab184;
        case 0x1ab188u: goto label_1ab188;
        case 0x1ab18cu: goto label_1ab18c;
        case 0x1ab190u: goto label_1ab190;
        case 0x1ab194u: goto label_1ab194;
        case 0x1ab198u: goto label_1ab198;
        case 0x1ab19cu: goto label_1ab19c;
        case 0x1ab1a0u: goto label_1ab1a0;
        case 0x1ab1a4u: goto label_1ab1a4;
        case 0x1ab1a8u: goto label_1ab1a8;
        case 0x1ab1acu: goto label_1ab1ac;
        case 0x1ab1b0u: goto label_1ab1b0;
        case 0x1ab1b4u: goto label_1ab1b4;
        case 0x1ab1b8u: goto label_1ab1b8;
        case 0x1ab1bcu: goto label_1ab1bc;
        case 0x1ab1c0u: goto label_1ab1c0;
        case 0x1ab1c4u: goto label_1ab1c4;
        case 0x1ab1c8u: goto label_1ab1c8;
        case 0x1ab1ccu: goto label_1ab1cc;
        case 0x1ab1d0u: goto label_1ab1d0;
        case 0x1ab1d4u: goto label_1ab1d4;
        case 0x1ab1d8u: goto label_1ab1d8;
        case 0x1ab1dcu: goto label_1ab1dc;
        case 0x1ab1e0u: goto label_1ab1e0;
        case 0x1ab1e4u: goto label_1ab1e4;
        case 0x1ab1e8u: goto label_1ab1e8;
        case 0x1ab1ecu: goto label_1ab1ec;
        case 0x1ab1f0u: goto label_1ab1f0;
        case 0x1ab1f4u: goto label_1ab1f4;
        case 0x1ab1f8u: goto label_1ab1f8;
        case 0x1ab1fcu: goto label_1ab1fc;
        case 0x1ab200u: goto label_1ab200;
        case 0x1ab204u: goto label_1ab204;
        case 0x1ab208u: goto label_1ab208;
        case 0x1ab20cu: goto label_1ab20c;
        case 0x1ab210u: goto label_1ab210;
        case 0x1ab214u: goto label_1ab214;
        case 0x1ab218u: goto label_1ab218;
        case 0x1ab21cu: goto label_1ab21c;
        case 0x1ab220u: goto label_1ab220;
        case 0x1ab224u: goto label_1ab224;
        case 0x1ab228u: goto label_1ab228;
        case 0x1ab22cu: goto label_1ab22c;
        case 0x1ab230u: goto label_1ab230;
        case 0x1ab234u: goto label_1ab234;
        case 0x1ab238u: goto label_1ab238;
        case 0x1ab23cu: goto label_1ab23c;
        case 0x1ab240u: goto label_1ab240;
        case 0x1ab244u: goto label_1ab244;
        case 0x1ab248u: goto label_1ab248;
        case 0x1ab24cu: goto label_1ab24c;
        case 0x1ab250u: goto label_1ab250;
        case 0x1ab254u: goto label_1ab254;
        case 0x1ab258u: goto label_1ab258;
        case 0x1ab25cu: goto label_1ab25c;
        case 0x1ab260u: goto label_1ab260;
        case 0x1ab264u: goto label_1ab264;
        case 0x1ab268u: goto label_1ab268;
        case 0x1ab26cu: goto label_1ab26c;
        case 0x1ab270u: goto label_1ab270;
        case 0x1ab274u: goto label_1ab274;
        case 0x1ab278u: goto label_1ab278;
        case 0x1ab27cu: goto label_1ab27c;
        case 0x1ab280u: goto label_1ab280;
        case 0x1ab284u: goto label_1ab284;
        case 0x1ab288u: goto label_1ab288;
        case 0x1ab28cu: goto label_1ab28c;
        case 0x1ab290u: goto label_1ab290;
        case 0x1ab294u: goto label_1ab294;
        case 0x1ab298u: goto label_1ab298;
        case 0x1ab29cu: goto label_1ab29c;
        case 0x1ab2a0u: goto label_1ab2a0;
        case 0x1ab2a4u: goto label_1ab2a4;
        case 0x1ab2a8u: goto label_1ab2a8;
        case 0x1ab2acu: goto label_1ab2ac;
        case 0x1ab2b0u: goto label_1ab2b0;
        case 0x1ab2b4u: goto label_1ab2b4;
        case 0x1ab2b8u: goto label_1ab2b8;
        case 0x1ab2bcu: goto label_1ab2bc;
        case 0x1ab2c0u: goto label_1ab2c0;
        case 0x1ab2c4u: goto label_1ab2c4;
        case 0x1ab2c8u: goto label_1ab2c8;
        case 0x1ab2ccu: goto label_1ab2cc;
        case 0x1ab2d0u: goto label_1ab2d0;
        case 0x1ab2d4u: goto label_1ab2d4;
        case 0x1ab2d8u: goto label_1ab2d8;
        case 0x1ab2dcu: goto label_1ab2dc;
        case 0x1ab2e0u: goto label_1ab2e0;
        case 0x1ab2e4u: goto label_1ab2e4;
        case 0x1ab2e8u: goto label_1ab2e8;
        case 0x1ab2ecu: goto label_1ab2ec;
        case 0x1ab2f0u: goto label_1ab2f0;
        case 0x1ab2f4u: goto label_1ab2f4;
        case 0x1ab2f8u: goto label_1ab2f8;
        case 0x1ab2fcu: goto label_1ab2fc;
        case 0x1ab300u: goto label_1ab300;
        case 0x1ab304u: goto label_1ab304;
        case 0x1ab308u: goto label_1ab308;
        case 0x1ab30cu: goto label_1ab30c;
        case 0x1ab310u: goto label_1ab310;
        case 0x1ab314u: goto label_1ab314;
        case 0x1ab318u: goto label_1ab318;
        case 0x1ab31cu: goto label_1ab31c;
        case 0x1ab320u: goto label_1ab320;
        case 0x1ab324u: goto label_1ab324;
        case 0x1ab328u: goto label_1ab328;
        case 0x1ab32cu: goto label_1ab32c;
        case 0x1ab330u: goto label_1ab330;
        case 0x1ab334u: goto label_1ab334;
        case 0x1ab338u: goto label_1ab338;
        case 0x1ab33cu: goto label_1ab33c;
        case 0x1ab340u: goto label_1ab340;
        case 0x1ab344u: goto label_1ab344;
        case 0x1ab348u: goto label_1ab348;
        case 0x1ab34cu: goto label_1ab34c;
        case 0x1ab350u: goto label_1ab350;
        case 0x1ab354u: goto label_1ab354;
        case 0x1ab358u: goto label_1ab358;
        case 0x1ab35cu: goto label_1ab35c;
        case 0x1ab360u: goto label_1ab360;
        case 0x1ab364u: goto label_1ab364;
        case 0x1ab368u: goto label_1ab368;
        case 0x1ab36cu: goto label_1ab36c;
        case 0x1ab370u: goto label_1ab370;
        case 0x1ab374u: goto label_1ab374;
        case 0x1ab378u: goto label_1ab378;
        case 0x1ab37cu: goto label_1ab37c;
        case 0x1ab380u: goto label_1ab380;
        case 0x1ab384u: goto label_1ab384;
        case 0x1ab388u: goto label_1ab388;
        case 0x1ab38cu: goto label_1ab38c;
        case 0x1ab390u: goto label_1ab390;
        case 0x1ab394u: goto label_1ab394;
        case 0x1ab398u: goto label_1ab398;
        case 0x1ab39cu: goto label_1ab39c;
        case 0x1ab3a0u: goto label_1ab3a0;
        case 0x1ab3a4u: goto label_1ab3a4;
        case 0x1ab3a8u: goto label_1ab3a8;
        case 0x1ab3acu: goto label_1ab3ac;
        case 0x1ab3b0u: goto label_1ab3b0;
        case 0x1ab3b4u: goto label_1ab3b4;
        case 0x1ab3b8u: goto label_1ab3b8;
        case 0x1ab3bcu: goto label_1ab3bc;
        case 0x1ab3c0u: goto label_1ab3c0;
        case 0x1ab3c4u: goto label_1ab3c4;
        case 0x1ab3c8u: goto label_1ab3c8;
        case 0x1ab3ccu: goto label_1ab3cc;
        case 0x1ab3d0u: goto label_1ab3d0;
        case 0x1ab3d4u: goto label_1ab3d4;
        case 0x1ab3d8u: goto label_1ab3d8;
        case 0x1ab3dcu: goto label_1ab3dc;
        case 0x1ab3e0u: goto label_1ab3e0;
        case 0x1ab3e4u: goto label_1ab3e4;
        case 0x1ab3e8u: goto label_1ab3e8;
        case 0x1ab3ecu: goto label_1ab3ec;
        case 0x1ab3f0u: goto label_1ab3f0;
        case 0x1ab3f4u: goto label_1ab3f4;
        case 0x1ab3f8u: goto label_1ab3f8;
        case 0x1ab3fcu: goto label_1ab3fc;
        case 0x1ab400u: goto label_1ab400;
        case 0x1ab404u: goto label_1ab404;
        case 0x1ab408u: goto label_1ab408;
        case 0x1ab40cu: goto label_1ab40c;
        case 0x1ab410u: goto label_1ab410;
        case 0x1ab414u: goto label_1ab414;
        case 0x1ab418u: goto label_1ab418;
        case 0x1ab41cu: goto label_1ab41c;
        case 0x1ab420u: goto label_1ab420;
        case 0x1ab424u: goto label_1ab424;
        case 0x1ab428u: goto label_1ab428;
        case 0x1ab42cu: goto label_1ab42c;
        case 0x1ab430u: goto label_1ab430;
        case 0x1ab434u: goto label_1ab434;
        case 0x1ab438u: goto label_1ab438;
        case 0x1ab43cu: goto label_1ab43c;
        case 0x1ab440u: goto label_1ab440;
        case 0x1ab444u: goto label_1ab444;
        case 0x1ab448u: goto label_1ab448;
        case 0x1ab44cu: goto label_1ab44c;
        case 0x1ab450u: goto label_1ab450;
        case 0x1ab454u: goto label_1ab454;
        case 0x1ab458u: goto label_1ab458;
        case 0x1ab45cu: goto label_1ab45c;
        case 0x1ab460u: goto label_1ab460;
        case 0x1ab464u: goto label_1ab464;
        case 0x1ab468u: goto label_1ab468;
        case 0x1ab46cu: goto label_1ab46c;
        case 0x1ab470u: goto label_1ab470;
        case 0x1ab474u: goto label_1ab474;
        case 0x1ab478u: goto label_1ab478;
        case 0x1ab47cu: goto label_1ab47c;
        case 0x1ab480u: goto label_1ab480;
        case 0x1ab484u: goto label_1ab484;
        case 0x1ab488u: goto label_1ab488;
        case 0x1ab48cu: goto label_1ab48c;
        case 0x1ab490u: goto label_1ab490;
        case 0x1ab494u: goto label_1ab494;
        case 0x1ab498u: goto label_1ab498;
        case 0x1ab49cu: goto label_1ab49c;
        case 0x1ab4a0u: goto label_1ab4a0;
        case 0x1ab4a4u: goto label_1ab4a4;
        case 0x1ab4a8u: goto label_1ab4a8;
        case 0x1ab4acu: goto label_1ab4ac;
        case 0x1ab4b0u: goto label_1ab4b0;
        case 0x1ab4b4u: goto label_1ab4b4;
        case 0x1ab4b8u: goto label_1ab4b8;
        case 0x1ab4bcu: goto label_1ab4bc;
        case 0x1ab4c0u: goto label_1ab4c0;
        case 0x1ab4c4u: goto label_1ab4c4;
        case 0x1ab4c8u: goto label_1ab4c8;
        case 0x1ab4ccu: goto label_1ab4cc;
        case 0x1ab4d0u: goto label_1ab4d0;
        case 0x1ab4d4u: goto label_1ab4d4;
        case 0x1ab4d8u: goto label_1ab4d8;
        case 0x1ab4dcu: goto label_1ab4dc;
        case 0x1ab4e0u: goto label_1ab4e0;
        case 0x1ab4e4u: goto label_1ab4e4;
        case 0x1ab4e8u: goto label_1ab4e8;
        case 0x1ab4ecu: goto label_1ab4ec;
        case 0x1ab4f0u: goto label_1ab4f0;
        case 0x1ab4f4u: goto label_1ab4f4;
        case 0x1ab4f8u: goto label_1ab4f8;
        case 0x1ab4fcu: goto label_1ab4fc;
        case 0x1ab500u: goto label_1ab500;
        case 0x1ab504u: goto label_1ab504;
        case 0x1ab508u: goto label_1ab508;
        case 0x1ab50cu: goto label_1ab50c;
        case 0x1ab510u: goto label_1ab510;
        case 0x1ab514u: goto label_1ab514;
        case 0x1ab518u: goto label_1ab518;
        case 0x1ab51cu: goto label_1ab51c;
        case 0x1ab520u: goto label_1ab520;
        case 0x1ab524u: goto label_1ab524;
        case 0x1ab528u: goto label_1ab528;
        case 0x1ab52cu: goto label_1ab52c;
        case 0x1ab530u: goto label_1ab530;
        case 0x1ab534u: goto label_1ab534;
        case 0x1ab538u: goto label_1ab538;
        case 0x1ab53cu: goto label_1ab53c;
        case 0x1ab540u: goto label_1ab540;
        case 0x1ab544u: goto label_1ab544;
        case 0x1ab548u: goto label_1ab548;
        case 0x1ab54cu: goto label_1ab54c;
        case 0x1ab550u: goto label_1ab550;
        case 0x1ab554u: goto label_1ab554;
        case 0x1ab558u: goto label_1ab558;
        case 0x1ab55cu: goto label_1ab55c;
        case 0x1ab560u: goto label_1ab560;
        case 0x1ab564u: goto label_1ab564;
        case 0x1ab568u: goto label_1ab568;
        case 0x1ab56cu: goto label_1ab56c;
        case 0x1ab570u: goto label_1ab570;
        case 0x1ab574u: goto label_1ab574;
        case 0x1ab578u: goto label_1ab578;
        case 0x1ab57cu: goto label_1ab57c;
        case 0x1ab580u: goto label_1ab580;
        case 0x1ab584u: goto label_1ab584;
        case 0x1ab588u: goto label_1ab588;
        case 0x1ab58cu: goto label_1ab58c;
        case 0x1ab590u: goto label_1ab590;
        case 0x1ab594u: goto label_1ab594;
        case 0x1ab598u: goto label_1ab598;
        case 0x1ab59cu: goto label_1ab59c;
        case 0x1ab5a0u: goto label_1ab5a0;
        case 0x1ab5a4u: goto label_1ab5a4;
        case 0x1ab5a8u: goto label_1ab5a8;
        case 0x1ab5acu: goto label_1ab5ac;
        case 0x1ab5b0u: goto label_1ab5b0;
        case 0x1ab5b4u: goto label_1ab5b4;
        case 0x1ab5b8u: goto label_1ab5b8;
        case 0x1ab5bcu: goto label_1ab5bc;
        case 0x1ab5c0u: goto label_1ab5c0;
        case 0x1ab5c4u: goto label_1ab5c4;
        case 0x1ab5c8u: goto label_1ab5c8;
        case 0x1ab5ccu: goto label_1ab5cc;
        case 0x1ab5d0u: goto label_1ab5d0;
        case 0x1ab5d4u: goto label_1ab5d4;
        case 0x1ab5d8u: goto label_1ab5d8;
        case 0x1ab5dcu: goto label_1ab5dc;
        case 0x1ab5e0u: goto label_1ab5e0;
        case 0x1ab5e4u: goto label_1ab5e4;
        case 0x1ab5e8u: goto label_1ab5e8;
        case 0x1ab5ecu: goto label_1ab5ec;
        case 0x1ab5f0u: goto label_1ab5f0;
        case 0x1ab5f4u: goto label_1ab5f4;
        case 0x1ab5f8u: goto label_1ab5f8;
        case 0x1ab5fcu: goto label_1ab5fc;
        case 0x1ab600u: goto label_1ab600;
        case 0x1ab604u: goto label_1ab604;
        case 0x1ab608u: goto label_1ab608;
        case 0x1ab60cu: goto label_1ab60c;
        case 0x1ab610u: goto label_1ab610;
        case 0x1ab614u: goto label_1ab614;
        case 0x1ab618u: goto label_1ab618;
        case 0x1ab61cu: goto label_1ab61c;
        case 0x1ab620u: goto label_1ab620;
        case 0x1ab624u: goto label_1ab624;
        case 0x1ab628u: goto label_1ab628;
        case 0x1ab62cu: goto label_1ab62c;
        case 0x1ab630u: goto label_1ab630;
        case 0x1ab634u: goto label_1ab634;
        case 0x1ab638u: goto label_1ab638;
        case 0x1ab63cu: goto label_1ab63c;
        case 0x1ab640u: goto label_1ab640;
        case 0x1ab644u: goto label_1ab644;
        case 0x1ab648u: goto label_1ab648;
        case 0x1ab64cu: goto label_1ab64c;
        case 0x1ab650u: goto label_1ab650;
        case 0x1ab654u: goto label_1ab654;
        case 0x1ab658u: goto label_1ab658;
        case 0x1ab65cu: goto label_1ab65c;
        case 0x1ab660u: goto label_1ab660;
        case 0x1ab664u: goto label_1ab664;
        case 0x1ab668u: goto label_1ab668;
        case 0x1ab66cu: goto label_1ab66c;
        case 0x1ab670u: goto label_1ab670;
        case 0x1ab674u: goto label_1ab674;
        case 0x1ab678u: goto label_1ab678;
        case 0x1ab67cu: goto label_1ab67c;
        case 0x1ab680u: goto label_1ab680;
        case 0x1ab684u: goto label_1ab684;
        case 0x1ab688u: goto label_1ab688;
        case 0x1ab68cu: goto label_1ab68c;
        case 0x1ab690u: goto label_1ab690;
        case 0x1ab694u: goto label_1ab694;
        case 0x1ab698u: goto label_1ab698;
        case 0x1ab69cu: goto label_1ab69c;
        case 0x1ab6a0u: goto label_1ab6a0;
        case 0x1ab6a4u: goto label_1ab6a4;
        case 0x1ab6a8u: goto label_1ab6a8;
        case 0x1ab6acu: goto label_1ab6ac;
        case 0x1ab6b0u: goto label_1ab6b0;
        case 0x1ab6b4u: goto label_1ab6b4;
        case 0x1ab6b8u: goto label_1ab6b8;
        case 0x1ab6bcu: goto label_1ab6bc;
        case 0x1ab6c0u: goto label_1ab6c0;
        case 0x1ab6c4u: goto label_1ab6c4;
        case 0x1ab6c8u: goto label_1ab6c8;
        case 0x1ab6ccu: goto label_1ab6cc;
        case 0x1ab6d0u: goto label_1ab6d0;
        case 0x1ab6d4u: goto label_1ab6d4;
        case 0x1ab6d8u: goto label_1ab6d8;
        case 0x1ab6dcu: goto label_1ab6dc;
        case 0x1ab6e0u: goto label_1ab6e0;
        case 0x1ab6e4u: goto label_1ab6e4;
        case 0x1ab6e8u: goto label_1ab6e8;
        case 0x1ab6ecu: goto label_1ab6ec;
        case 0x1ab6f0u: goto label_1ab6f0;
        case 0x1ab6f4u: goto label_1ab6f4;
        case 0x1ab6f8u: goto label_1ab6f8;
        case 0x1ab6fcu: goto label_1ab6fc;
        case 0x1ab700u: goto label_1ab700;
        case 0x1ab704u: goto label_1ab704;
        case 0x1ab708u: goto label_1ab708;
        case 0x1ab70cu: goto label_1ab70c;
        case 0x1ab710u: goto label_1ab710;
        case 0x1ab714u: goto label_1ab714;
        case 0x1ab718u: goto label_1ab718;
        case 0x1ab71cu: goto label_1ab71c;
        case 0x1ab720u: goto label_1ab720;
        case 0x1ab724u: goto label_1ab724;
        case 0x1ab728u: goto label_1ab728;
        case 0x1ab72cu: goto label_1ab72c;
        case 0x1ab730u: goto label_1ab730;
        case 0x1ab734u: goto label_1ab734;
        case 0x1ab738u: goto label_1ab738;
        case 0x1ab73cu: goto label_1ab73c;
        case 0x1ab740u: goto label_1ab740;
        case 0x1ab744u: goto label_1ab744;
        case 0x1ab748u: goto label_1ab748;
        case 0x1ab74cu: goto label_1ab74c;
        case 0x1ab750u: goto label_1ab750;
        case 0x1ab754u: goto label_1ab754;
        case 0x1ab758u: goto label_1ab758;
        case 0x1ab75cu: goto label_1ab75c;
        case 0x1ab760u: goto label_1ab760;
        case 0x1ab764u: goto label_1ab764;
        case 0x1ab768u: goto label_1ab768;
        case 0x1ab76cu: goto label_1ab76c;
        case 0x1ab770u: goto label_1ab770;
        case 0x1ab774u: goto label_1ab774;
        case 0x1ab778u: goto label_1ab778;
        case 0x1ab77cu: goto label_1ab77c;
        case 0x1ab780u: goto label_1ab780;
        case 0x1ab784u: goto label_1ab784;
        case 0x1ab788u: goto label_1ab788;
        case 0x1ab78cu: goto label_1ab78c;
        case 0x1ab790u: goto label_1ab790;
        case 0x1ab794u: goto label_1ab794;
        case 0x1ab798u: goto label_1ab798;
        case 0x1ab79cu: goto label_1ab79c;
        case 0x1ab7a0u: goto label_1ab7a0;
        case 0x1ab7a4u: goto label_1ab7a4;
        case 0x1ab7a8u: goto label_1ab7a8;
        case 0x1ab7acu: goto label_1ab7ac;
        default: break;
    }

    ctx->pc = 0x1aad60u;

label_1aad60:
    // 0x1aad60: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1aad60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1aad64:
    // 0x1aad64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1aad64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1aad68:
    // 0x1aad68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1aad68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1aad6c:
    // 0x1aad6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1aad6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1aad70:
    // 0x1aad70: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1aad70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aad74:
    // 0x1aad74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1aad74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1aad78:
    // 0x1aad78: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1aad78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aad7c:
    // 0x1aad7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1aad7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1aad80:
    // 0x1aad80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aad80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1aad84:
    // 0x1aad84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aad84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1aad88:
    // 0x1aad88: 0xc063dd4  jal         func_18F750
label_1aad8c:
    if (ctx->pc == 0x1AAD8Cu) {
        ctx->pc = 0x1AAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD88u;
        // 0x1aad8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAD90u;
        goto label_1aad90;
    }
    ctx->pc = 0x1AAD88u;
    SET_GPR_U32(ctx, 31, 0x1AAD90u);
    ctx->pc = 0x1AAD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD88u;
    // 0x1aad8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1AAD88u, 0x1AAD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAD90u;
label_1aad90:
    // 0x1aad90: 0x2c41000e  sltiu       $at, $v0, 0xE
    ctx->pc = 0x1aad90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_1aad94:
    // 0x1aad94: 0x1020023b  beqz        $at, . + 4 + (0x23B << 2)
label_1aad98:
    if (ctx->pc == 0x1AAD98u) {
        ctx->pc = 0x1AAD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD94u;
        // 0x1aad98: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAD9Cu;
        goto label_1aad9c;
    }
    ctx->pc = 0x1AAD94u;
    {
        const bool branch_taken_0x1aad94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD94u;
        // 0x1aad98: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aad94) {
            ctx->pc = 0x1AB684u;
            goto label_1ab684;
        }
    }
    ctx->pc = 0x1AAD9Cu;
label_1aad9c:
    // 0x1aad9c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1aad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aada0:
    // 0x1aada0: 0x24840930  addiu       $a0, $a0, 0x930
    ctx->pc = 0x1aada0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2352));
label_1aada4:
    // 0x1aada4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1aada4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1aada8:
    // 0x1aada8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1aada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1aadac:
    // 0x1aadac: 0x600008  jr          $v1
label_1aadb0:
    if (ctx->pc == 0x1AADB0u) {
        ctx->pc = 0x1AADB4u;
        goto label_1aadb4;
    }
    ctx->pc = 0x1AADACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AADB4u: goto label_1aadb4;
            case 0x1AAF98u: goto label_1aaf98;
            case 0x1AB040u: goto label_1ab040;
            case 0x1AB0E0u: goto label_1ab0e0;
            case 0x1AB174u: goto label_1ab174;
            case 0x1AB19Cu: goto label_1ab19c;
            case 0x1AB1C0u: goto label_1ab1c0;
            case 0x1AB1D0u: goto label_1ab1d0;
            case 0x1AB2DCu: goto label_1ab2dc;
            case 0x1AB370u: goto label_1ab370;
            case 0x1AB480u: goto label_1ab480;
            case 0x1AB4E8u: goto label_1ab4e8;
            case 0x1AB630u: goto label_1ab630;
            case 0x1AB684u: goto label_1ab684;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AADACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1AADB4u;
label_1aadb4:
    // 0x1aadb4: 0xc067f08  jal         func_19FC20
label_1aadb8:
    if (ctx->pc == 0x1AADB8u) {
        ctx->pc = 0x1AADBCu;
        goto label_1aadbc;
    }
    ctx->pc = 0x1AADB4u;
    SET_GPR_U32(ctx, 31, 0x1AADBCu);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1AADB4u, 0x1AADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AADBCu;
label_1aadbc:
    // 0x1aadbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aadbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aadc0:
    // 0x1aadc0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1aadc4:
    if (ctx->pc == 0x1AADC4u) {
        ctx->pc = 0x1AADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADC0u;
        // 0x1aadc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADC8u;
        goto label_1aadc8;
    }
    ctx->pc = 0x1AADC0u;
    {
        const bool branch_taken_0x1aadc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADC0u;
        // 0x1aadc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aadc0) {
            ctx->pc = 0x1AADE4u;
            goto label_1aade4;
        }
    }
    ctx->pc = 0x1AADC8u;
label_1aadc8:
    // 0x1aadc8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1aadc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aadcc:
    // 0x1aadcc: 0xc067f68  jal         func_19FDA0
label_1aadd0:
    if (ctx->pc == 0x1AADD0u) {
        ctx->pc = 0x1AADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADCCu;
        // 0x1aadd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADD4u;
        goto label_1aadd4;
    }
    ctx->pc = 0x1AADCCu;
    SET_GPR_U32(ctx, 31, 0x1AADD4u);
    ctx->pc = 0x1AADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AADCCu;
    // 0x1aadd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AADCCu, 0x1AADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AADD4u;
label_1aadd4:
    // 0x1aadd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aadd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aadd8:
    // 0x1aadd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aadd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aaddc:
    // 0x1aaddc: 0xc067f68  jal         func_19FDA0
label_1aade0:
    if (ctx->pc == 0x1AADE0u) {
        ctx->pc = 0x1AADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADDCu;
        // 0x1aade0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADE4u;
        goto label_1aade4;
    }
    ctx->pc = 0x1AADDCu;
    SET_GPR_U32(ctx, 31, 0x1AADE4u);
    ctx->pc = 0x1AADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AADDCu;
    // 0x1aade0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AADDCu, 0x1AADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AADE4u;
label_1aade4:
    // 0x1aade4: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1aade4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1aade8:
    // 0x1aade8: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1aade8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1aadec:
    // 0x1aadec: 0xc06bd80  jal         func_1AF600
label_1aadf0:
    if (ctx->pc == 0x1AADF0u) {
        ctx->pc = 0x1AADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADECu;
        // 0x1aadf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADF4u;
        goto label_1aadf4;
    }
    ctx->pc = 0x1AADECu;
    SET_GPR_U32(ctx, 31, 0x1AADF4u);
    ctx->pc = 0x1AADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AADECu;
    // 0x1aadf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x1AADECu, 0x1AADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AADF4u;
label_1aadf4:
    // 0x1aadf4: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1aadf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1aadf8:
    // 0x1aadf8: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1aadf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
label_1aadfc:
    // 0x1aadfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1aae00:
    if (ctx->pc == 0x1AAE00u) {
        ctx->pc = 0x1AAE04u;
        goto label_1aae04;
    }
    ctx->pc = 0x1AADFCu;
    {
        const bool branch_taken_0x1aadfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aadfc) {
            ctx->pc = 0x1AAE10u;
            goto label_1aae10;
        }
    }
    ctx->pc = 0x1AAE04u;
label_1aae04:
    // 0x1aae04: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1aae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1aae08:
    // 0x1aae08: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1aae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1aae0c:
    // 0x1aae0c: 0xa04002f2  sb          $zero, 0x2F2($v0)
    ctx->pc = 0x1aae0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 754), (uint8_t)GPR_U32(ctx, 0));
label_1aae10:
    // 0x1aae10: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1aae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1aae14:
    // 0x1aae14: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1aae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1aae18:
    // 0x1aae18: 0x8c420300  lw          $v0, 0x300($v0)
    ctx->pc = 0x1aae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 768)));
label_1aae1c:
    // 0x1aae1c: 0xae820800  sw          $v0, 0x800($s4)
    ctx->pc = 0x1aae1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2048), GPR_U32(ctx, 2));
label_1aae20:
    // 0x1aae20: 0x8e840800  lw          $a0, 0x800($s4)
    ctx->pc = 0x1aae20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2048)));
label_1aae24:
    // 0x1aae24: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1aae24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1aae28:
    // 0x1aae28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1aae28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1aae2c:
    // 0x1aae2c: 0x320f809  jalr        $t9
label_1aae30:
    if (ctx->pc == 0x1AAE30u) {
        ctx->pc = 0x1AAE34u;
        goto label_1aae34;
    }
    ctx->pc = 0x1AAE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AAE34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAE2Cu, 0x1AAE34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AAE34u;
label_1aae34:
    // 0x1aae34: 0x8e830800  lw          $v1, 0x800($s4)
    ctx->pc = 0x1aae34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2048)));
label_1aae38:
    // 0x1aae38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aae38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aae3c:
    // 0x1aae3c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1aae3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1aae40:
    // 0x1aae40: 0xc064228  jal         func_1908A0
label_1aae44:
    if (ctx->pc == 0x1AAE44u) {
        ctx->pc = 0x1AAE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE40u;
        // 0x1aae44: 0xa3828398  sb          $v0, -0x7C68($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935448), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE48u;
        goto label_1aae48;
    }
    ctx->pc = 0x1AAE40u;
    SET_GPR_U32(ctx, 31, 0x1AAE48u);
    ctx->pc = 0x1AAE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE40u;
    // 0x1aae44: 0xa3828398  sb          $v0, -0x7C68($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935448), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908A0u, 0x1AAE40u, 0x1AAE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAE48u;
label_1aae48:
    // 0x1aae48: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1aae48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1aae4c:
    // 0x1aae4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aae4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aae50:
    // 0x1aae50: 0xc0642e0  jal         func_190B80
label_1aae54:
    if (ctx->pc == 0x1AAE54u) {
        ctx->pc = 0x1AAE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE50u;
        // 0x1aae54: 0x24a50908  addiu       $a1, $a1, 0x908 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE58u;
        goto label_1aae58;
    }
    ctx->pc = 0x1AAE50u;
    SET_GPR_U32(ctx, 31, 0x1AAE58u);
    ctx->pc = 0x1AAE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE50u;
    // 0x1aae54: 0x24a50908  addiu       $a1, $a1, 0x908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B80u, 0x1AAE50u, 0x1AAE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAE58u;
label_1aae58:
    // 0x1aae58: 0xae8206ec  sw          $v0, 0x6EC($s4)
    ctx->pc = 0x1aae58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1772), GPR_U32(ctx, 2));
label_1aae5c:
    // 0x1aae5c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1aae5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aae60:
    // 0x1aae60: 0xae8006e8  sw          $zero, 0x6E8($s4)
    ctx->pc = 0x1aae60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1768), GPR_U32(ctx, 0));
label_1aae64:
    // 0x1aae64: 0x1080  sll         $v0, $zero, 2
    ctx->pc = 0x1aae64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_1aae68:
    // 0x1aae68: 0x8e830664  lw          $v1, 0x664($s4)
    ctx->pc = 0x1aae68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_1aae6c:
    // 0x1aae6c: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x1aae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_1aae70:
    // 0x1aae70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aae70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1aae74:
    // 0x1aae74: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x1aae74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_1aae78:
    // 0x1aae78: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x1aae78u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aae7c:
    // 0x1aae7c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1aae7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aae80:
    // 0x1aae80: 0x10000030  b           . + 4 + (0x30 << 2)
label_1aae84:
    if (ctx->pc == 0x1AAE84u) {
        ctx->pc = 0x1AAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE80u;
        // 0x1aae84: 0x24700040  addiu       $s0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE88u;
        goto label_1aae88;
    }
    ctx->pc = 0x1AAE80u;
    {
        const bool branch_taken_0x1aae80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE80u;
        // 0x1aae84: 0x24700040  addiu       $s0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae80) {
            ctx->pc = 0x1AAF44u;
            goto label_1aaf44;
        }
    }
    ctx->pc = 0x1AAE88u;
label_1aae88:
    // 0x1aae88: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x1aae88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1aae8c:
    // 0x1aae8c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_1aae90:
    if (ctx->pc == 0x1AAE90u) {
        ctx->pc = 0x1AAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE8Cu;
        // 0x1aae90: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE94u;
        goto label_1aae94;
    }
    ctx->pc = 0x1AAE8Cu;
    {
        const bool branch_taken_0x1aae8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE8Cu;
        // 0x1aae90: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae8c) {
            ctx->pc = 0x1AAF40u;
            goto label_1aaf40;
        }
    }
    ctx->pc = 0x1AAE94u;
label_1aae94:
    // 0x1aae94: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_1aae98:
    if (ctx->pc == 0x1AAE98u) {
        ctx->pc = 0x1AAE9Cu;
        goto label_1aae9c;
    }
    ctx->pc = 0x1AAE94u;
    {
        const bool branch_taken_0x1aae94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aae94) {
            ctx->pc = 0x1AAF30u;
            goto label_1aaf30;
        }
    }
    ctx->pc = 0x1AAE9Cu;
label_1aae9c:
    // 0x1aae9c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1aae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1aaea0:
    // 0x1aaea0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_1aaea4:
    if (ctx->pc == 0x1AAEA4u) {
        ctx->pc = 0x1AAEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEA0u;
        // 0x1aaea4: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAEA8u;
        goto label_1aaea8;
    }
    ctx->pc = 0x1AAEA0u;
    {
        const bool branch_taken_0x1aaea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AAEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEA0u;
        // 0x1aaea4: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaea0) {
            ctx->pc = 0x1AAF10u;
            goto label_1aaf10;
        }
    }
    ctx->pc = 0x1AAEA8u;
label_1aaea8:
    // 0x1aaea8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1aaeac:
    if (ctx->pc == 0x1AAEACu) {
        ctx->pc = 0x1AAEB0u;
        goto label_1aaeb0;
    }
    ctx->pc = 0x1AAEA8u;
    {
        const bool branch_taken_0x1aaea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aaea8) {
            ctx->pc = 0x1AAEF0u;
            goto label_1aaef0;
        }
    }
    ctx->pc = 0x1AAEB0u;
label_1aaeb0:
    // 0x1aaeb0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1aaeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1aaeb4:
    // 0x1aaeb4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1aaeb8:
    if (ctx->pc == 0x1AAEB8u) {
        ctx->pc = 0x1AAEBCu;
        goto label_1aaebc;
    }
    ctx->pc = 0x1AAEB4u;
    {
        const bool branch_taken_0x1aaeb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aaeb4) {
            ctx->pc = 0x1AAEC4u;
            goto label_1aaec4;
        }
    }
    ctx->pc = 0x1AAEBCu;
label_1aaebc:
    // 0x1aaebc: 0x10000020  b           . + 4 + (0x20 << 2)
label_1aaec0:
    if (ctx->pc == 0x1AAEC0u) {
        ctx->pc = 0x1AAEC4u;
        goto label_1aaec4;
    }
    ctx->pc = 0x1AAEBCu;
    {
        const bool branch_taken_0x1aaebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaebc) {
            ctx->pc = 0x1AAF40u;
            goto label_1aaf40;
        }
    }
    ctx->pc = 0x1AAEC4u;
label_1aaec4:
    // 0x1aaec4: 0x0  nop
    ctx->pc = 0x1aaec4u;
    // NOP
label_1aaec8:
    // 0x1aaec8: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1aaec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1aaecc:
    // 0x1aaecc: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1aaeccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aaed0:
    // 0x1aaed0: 0xc057040  jal         func_15C100
label_1aaed4:
    if (ctx->pc == 0x1AAED4u) {
        ctx->pc = 0x1AAED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAED0u;
        // 0x1aaed4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAED8u;
        goto label_1aaed8;
    }
    ctx->pc = 0x1AAED0u;
    SET_GPR_U32(ctx, 31, 0x1AAED8u);
    ctx->pc = 0x1AAED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAED0u;
    // 0x1aaed4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AAED0u, 0x1AAED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAED8u;
label_1aaed8:
    // 0x1aaed8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aaed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aaedc:
    // 0x1aaedc: 0x2912021  addu        $a0, $s4, $s1
    ctx->pc = 0x1aaedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1aaee0:
    // 0x1aaee0: 0x2631002c  addiu       $s1, $s1, 0x2C
    ctx->pc = 0x1aaee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_1aaee4:
    // 0x1aaee4: 0xac830674  sw          $v1, 0x674($a0)
    ctx->pc = 0x1aaee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1652), GPR_U32(ctx, 3));
label_1aaee8:
    // 0x1aaee8: 0x10000015  b           . + 4 + (0x15 << 2)
label_1aaeec:
    if (ctx->pc == 0x1AAEECu) {
        ctx->pc = 0x1AAEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEE8u;
        // 0x1aaeec: 0xac820678  sw          $v0, 0x678($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAEF0u;
        goto label_1aaef0;
    }
    ctx->pc = 0x1AAEE8u;
    {
        const bool branch_taken_0x1aaee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEE8u;
        // 0x1aaeec: 0xac820678  sw          $v0, 0x678($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaee8) {
            ctx->pc = 0x1AAF40u;
            goto label_1aaf40;
        }
    }
    ctx->pc = 0x1AAEF0u;
label_1aaef0:
    // 0x1aaef0: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1aaef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1aaef4:
    // 0x1aaef4: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1aaef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aaef8:
    // 0x1aaef8: 0xc057040  jal         func_15C100
label_1aaefc:
    if (ctx->pc == 0x1AAEFCu) {
        ctx->pc = 0x1AAEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEF8u;
        // 0x1aaefc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAF00u;
        goto label_1aaf00;
    }
    ctx->pc = 0x1AAEF8u;
    SET_GPR_U32(ctx, 31, 0x1AAF00u);
    ctx->pc = 0x1AAEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAEF8u;
    // 0x1aaefc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AAEF8u, 0x1AAF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF00u;
label_1aaf00:
    // 0x1aaf00: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x1aaf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1aaf04:
    // 0x1aaf04: 0xac620680  sw          $v0, 0x680($v1)
    ctx->pc = 0x1aaf04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1664), GPR_U32(ctx, 2));
label_1aaf08:
    // 0x1aaf08: 0x1000000d  b           . + 4 + (0xD << 2)
label_1aaf0c:
    if (ctx->pc == 0x1AAF0Cu) {
        ctx->pc = 0x1AAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF08u;
        // 0x1aaf0c: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAF10u;
        goto label_1aaf10;
    }
    ctx->pc = 0x1AAF08u;
    {
        const bool branch_taken_0x1aaf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF08u;
        // 0x1aaf0c: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf08) {
            ctx->pc = 0x1AAF40u;
            goto label_1aaf40;
        }
    }
    ctx->pc = 0x1AAF10u;
label_1aaf10:
    // 0x1aaf10: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1aaf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1aaf14:
    // 0x1aaf14: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1aaf14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aaf18:
    // 0x1aaf18: 0xc057040  jal         func_15C100
label_1aaf1c:
    if (ctx->pc == 0x1AAF1Cu) {
        ctx->pc = 0x1AAF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF18u;
        // 0x1aaf1c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAF20u;
        goto label_1aaf20;
    }
    ctx->pc = 0x1AAF18u;
    SET_GPR_U32(ctx, 31, 0x1AAF20u);
    ctx->pc = 0x1AAF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF18u;
    // 0x1aaf1c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AAF18u, 0x1AAF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF20u;
label_1aaf20:
    // 0x1aaf20: 0x2931821  addu        $v1, $s4, $s3
    ctx->pc = 0x1aaf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_1aaf24:
    // 0x1aaf24: 0xac62067c  sw          $v0, 0x67C($v1)
    ctx->pc = 0x1aaf24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1660), GPR_U32(ctx, 2));
label_1aaf28:
    // 0x1aaf28: 0x10000005  b           . + 4 + (0x5 << 2)
label_1aaf2c:
    if (ctx->pc == 0x1AAF2Cu) {
        ctx->pc = 0x1AAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF28u;
        // 0x1aaf2c: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAF30u;
        goto label_1aaf30;
    }
    ctx->pc = 0x1AAF28u;
    {
        const bool branch_taken_0x1aaf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF28u;
        // 0x1aaf2c: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf28) {
            ctx->pc = 0x1AAF40u;
            goto label_1aaf40;
        }
    }
    ctx->pc = 0x1AAF30u;
label_1aaf30:
    // 0x1aaf30: 0x8e8206e8  lw          $v0, 0x6E8($s4)
    ctx->pc = 0x1aaf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1768)));
label_1aaf34:
    // 0x1aaf34: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1aaf38:
    if (ctx->pc == 0x1AAF38u) {
        ctx->pc = 0x1AAF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF34u;
        // 0x1aaf38: 0x26020024  addiu       $v0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAF3Cu;
        goto label_1aaf3c;
    }
    ctx->pc = 0x1AAF34u;
    {
        const bool branch_taken_0x1aaf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF34u;
        // 0x1aaf38: 0x26020024  addiu       $v0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf34) {
            ctx->pc = 0x1AAF40u;
            goto label_1aaf40;
        }
    }
    ctx->pc = 0x1AAF3Cu;
label_1aaf3c:
    // 0x1aaf3c: 0xae8206e8  sw          $v0, 0x6E8($s4)
    ctx->pc = 0x1aaf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1768), GPR_U32(ctx, 2));
label_1aaf40:
    // 0x1aaf40: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1aaf40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1aaf44:
    // 0x1aaf44: 0x0  nop
    ctx->pc = 0x1aaf44u;
    // NOP
label_1aaf48:
    // 0x1aaf48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aaf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aaf4c:
    // 0x1aaf4c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1aaf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1aaf50:
    // 0x1aaf50: 0x1062ffcd  beq         $v1, $v0, . + 4 + (-0x33 << 2)
label_1aaf54:
    if (ctx->pc == 0x1AAF54u) {
        ctx->pc = 0x1AAF58u;
        goto label_1aaf58;
    }
    ctx->pc = 0x1AAF50u;
    {
        const bool branch_taken_0x1aaf50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aaf50) {
            ctx->pc = 0x1AAE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aae88;
        }
    }
    ctx->pc = 0x1AAF58u;
label_1aaf58:
    // 0x1aaf58: 0xc046458  jal         func_119160
label_1aaf5c:
    if (ctx->pc == 0x1AAF5Cu) {
        ctx->pc = 0x1AAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF58u;
        // 0x1aaf5c: 0x8f848108  lw          $a0, -0x7EF8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAF60u;
        goto label_1aaf60;
    }
    ctx->pc = 0x1AAF58u;
    SET_GPR_U32(ctx, 31, 0x1AAF60u);
    ctx->pc = 0x1AAF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF58u;
    // 0x1aaf5c: 0x8f848108  lw          $a0, -0x7EF8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1AAF58u, 0x1AAF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF60u;
label_1aaf60:
    // 0x1aaf60: 0x8f8383a8  lw          $v1, -0x7C58($gp)
    ctx->pc = 0x1aaf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1aaf64:
    // 0x1aaf64: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1aaf64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1aaf68:
    // 0x1aaf68: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1aaf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1aaf6c:
    // 0x1aaf6c: 0x26840710  addiu       $a0, $s4, 0x710
    ctx->pc = 0x1aaf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1808));
label_1aaf70:
    // 0x1aaf70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1aaf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aaf74:
    // 0x1aaf74: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1aaf74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1aaf78:
    // 0x1aaf78: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1aaf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1aaf7c:
    // 0x1aaf7c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1aaf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1aaf80:
    // 0x1aaf80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1aaf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aaf84:
    // 0x1aaf84: 0xae8206e4  sw          $v0, 0x6E4($s4)
    ctx->pc = 0x1aaf84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1764), GPR_U32(ctx, 2));
label_1aaf88:
    // 0x1aaf88: 0xc06223c  jal         func_1888F0
label_1aaf8c:
    if (ctx->pc == 0x1AAF8Cu) {
        ctx->pc = 0x1AAF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF88u;
        // 0x1aaf8c: 0xae9407c0  sw          $s4, 0x7C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1984), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAF90u;
        goto label_1aaf90;
    }
    ctx->pc = 0x1AAF88u;
    SET_GPR_U32(ctx, 31, 0x1AAF90u);
    ctx->pc = 0x1AAF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF88u;
    // 0x1aaf8c: 0xae9407c0  sw          $s4, 0x7C0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1984), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888F0u, 0x1AAF88u, 0x1AAF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF90u;
label_1aaf90:
    // 0x1aaf90: 0xc063e14  jal         func_18F850
label_1aaf94:
    if (ctx->pc == 0x1AAF94u) {
        ctx->pc = 0x1AAF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF90u;
        // 0x1aaf94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAF98u;
        goto label_1aaf98;
    }
    ctx->pc = 0x1AAF90u;
    SET_GPR_U32(ctx, 31, 0x1AAF98u);
    ctx->pc = 0x1AAF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF90u;
    // 0x1aaf94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AAF90u, 0x1AAF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF98u;
label_1aaf98:
    // 0x1aaf98: 0xa28006d8  sb          $zero, 0x6D8($s4)
    ctx->pc = 0x1aaf98u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1752), (uint8_t)GPR_U32(ctx, 0));
label_1aaf9c:
    // 0x1aaf9c: 0xa28006d9  sb          $zero, 0x6D9($s4)
    ctx->pc = 0x1aaf9cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1753), (uint8_t)GPR_U32(ctx, 0));
label_1aafa0:
    // 0x1aafa0: 0xa28006da  sb          $zero, 0x6DA($s4)
    ctx->pc = 0x1aafa0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1754), (uint8_t)GPR_U32(ctx, 0));
label_1aafa4:
    // 0x1aafa4: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1aafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1aafa8:
    // 0x1aafa8: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1aafa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
label_1aafac:
    // 0x1aafac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1aafb0:
    if (ctx->pc == 0x1AAFB0u) {
        ctx->pc = 0x1AAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFACu;
        // 0x1aafb0: 0x3c024334  lui         $v0, 0x4334 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAFB4u;
        goto label_1aafb4;
    }
    ctx->pc = 0x1AAFACu;
    {
        const bool branch_taken_0x1aafac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFACu;
        // 0x1aafb0: 0x3c024334  lui         $v0, 0x4334 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafac) {
            ctx->pc = 0x1AAFC4u;
            goto label_1aafc4;
        }
    }
    ctx->pc = 0x1AAFB4u;
label_1aafb4:
    // 0x1aafb4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1aafb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1aafb8:
    // 0x1aafb8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1aafb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1aafbc:
    // 0x1aafbc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1aafc0:
    if (ctx->pc == 0x1AAFC0u) {
        ctx->pc = 0x1AAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFBCu;
        // 0x1aafc0: 0xc7808028  lwc1        $f0, -0x7FD8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAFC4u;
        goto label_1aafc4;
    }
    ctx->pc = 0x1AAFBCu;
    {
        const bool branch_taken_0x1aafbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFBCu;
        // 0x1aafc0: 0xc7808028  lwc1        $f0, -0x7FD8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafbc) {
            ctx->pc = 0x1AAFCCu;
            goto label_1aafcc;
        }
    }
    ctx->pc = 0x1AAFC4u;
label_1aafc4:
    // 0x1aafc4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1aafc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1aafc8:
    // 0x1aafc8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1aafc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aafcc:
    // 0x1aafcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aafccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1aafd0:
    // 0x1aafd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aafd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1aafd4:
    // 0x1aafd4: 0x0  nop
    ctx->pc = 0x1aafd4u;
    // NOP
label_1aafd8:
    // 0x1aafd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aafd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aafdc:
    // 0x1aafdc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aafdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1aafe0:
    // 0x1aafe0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aafe0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1aafe4:
    // 0x1aafe4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aafe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aafe8:
    // 0x1aafe8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1aafe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1aafec:
    // 0x1aafec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aafecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1aaff0:
    // 0x1aaff0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1aaff0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1aaff4:
    // 0x1aaff4: 0x0  nop
    ctx->pc = 0x1aaff4u;
    // NOP
label_1aaff8:
    // 0x1aaff8: 0xae8206dc  sw          $v0, 0x6DC($s4)
    ctx->pc = 0x1aaff8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1756), GPR_U32(ctx, 2));
label_1aaffc:
    // 0x1aaffc: 0xae8006c8  sw          $zero, 0x6C8($s4)
    ctx->pc = 0x1aaffcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1736), GPR_U32(ctx, 0));
label_1ab000:
    // 0x1ab000: 0xae8006cc  sw          $zero, 0x6CC($s4)
    ctx->pc = 0x1ab000u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1740), GPR_U32(ctx, 0));
label_1ab004:
    // 0x1ab004: 0xae8006d0  sw          $zero, 0x6D0($s4)
    ctx->pc = 0x1ab004u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1744), GPR_U32(ctx, 0));
label_1ab008:
    // 0x1ab008: 0xae800670  sw          $zero, 0x670($s4)
    ctx->pc = 0x1ab008u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1648), GPR_U32(ctx, 0));
label_1ab00c:
    // 0x1ab00c: 0xa280068c  sb          $zero, 0x68C($s4)
    ctx->pc = 0x1ab00cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1676), (uint8_t)GPR_U32(ctx, 0));
label_1ab010:
    // 0x1ab010: 0xae800690  sw          $zero, 0x690($s4)
    ctx->pc = 0x1ab010u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 0));
label_1ab014:
    // 0x1ab014: 0xa2800694  sb          $zero, 0x694($s4)
    ctx->pc = 0x1ab014u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1684), (uint8_t)GPR_U32(ctx, 0));
label_1ab018:
    // 0x1ab018: 0xae80069c  sw          $zero, 0x69C($s4)
    ctx->pc = 0x1ab018u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1692), GPR_U32(ctx, 0));
label_1ab01c:
    // 0x1ab01c: 0xa28006b8  sb          $zero, 0x6B8($s4)
    ctx->pc = 0x1ab01cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1720), (uint8_t)GPR_U32(ctx, 0));
label_1ab020:
    // 0x1ab020: 0xae8006bc  sw          $zero, 0x6BC($s4)
    ctx->pc = 0x1ab020u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1724), GPR_U32(ctx, 0));
label_1ab024:
    // 0x1ab024: 0xa28006c0  sb          $zero, 0x6C0($s4)
    ctx->pc = 0x1ab024u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1728), (uint8_t)GPR_U32(ctx, 0));
label_1ab028:
    // 0x1ab028: 0xc058018  jal         func_160060
label_1ab02c:
    if (ctx->pc == 0x1AB02Cu) {
        ctx->pc = 0x1AB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB028u;
        // 0x1ab02c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB030u;
        goto label_1ab030;
    }
    ctx->pc = 0x1AB028u;
    SET_GPR_U32(ctx, 31, 0x1AB030u);
    ctx->pc = 0x1AB02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB028u;
    // 0x1ab02c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1AB028u, 0x1AB030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB030u;
label_1ab030:
    // 0x1ab030: 0xc06adec  jal         func_1AB7B0
label_1ab034:
    if (ctx->pc == 0x1AB034u) {
        ctx->pc = 0x1AB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB030u;
        // 0x1ab034: 0x26840670  addiu       $a0, $s4, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB038u;
        goto label_1ab038;
    }
    ctx->pc = 0x1AB030u;
    SET_GPR_U32(ctx, 31, 0x1AB038u);
    ctx->pc = 0x1AB034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB030u;
    // 0x1ab034: 0x26840670  addiu       $a0, $s4, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB7B0u, 0x1AB030u, 0x1AB038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB038u;
label_1ab038:
    // 0x1ab038: 0xc063e14  jal         func_18F850
label_1ab03c:
    if (ctx->pc == 0x1AB03Cu) {
        ctx->pc = 0x1AB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB038u;
        // 0x1ab03c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB040u;
        goto label_1ab040;
    }
    ctx->pc = 0x1AB038u;
    SET_GPR_U32(ctx, 31, 0x1AB040u);
    ctx->pc = 0x1AB03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB038u;
    // 0x1ab03c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AB038u, 0x1AB040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB040u;
label_1ab040:
    // 0x1ab040: 0x8e8406e4  lw          $a0, 0x6E4($s4)
    ctx->pc = 0x1ab040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1764)));
label_1ab044:
    // 0x1ab044: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ab044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ab048:
    // 0x1ab048: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ab048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ab04c:
    // 0x1ab04c: 0x320f809  jalr        $t9
label_1ab050:
    if (ctx->pc == 0x1AB050u) {
        ctx->pc = 0x1AB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB04Cu;
        // 0x1ab050: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB054u;
        goto label_1ab054;
    }
    ctx->pc = 0x1AB04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AB054u);
        ctx->pc = 0x1AB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB04Cu;
        // 0x1ab050: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB04Cu, 0x1AB054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB054u;
label_1ab054:
    // 0x1ab054: 0xae8007dc  sw          $zero, 0x7DC($s4)
    ctx->pc = 0x1ab054u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2012), GPR_U32(ctx, 0));
label_1ab058:
    // 0x1ab058: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x1ab058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
label_1ab05c:
    // 0x1ab05c: 0xae8207e0  sw          $v0, 0x7E0($s4)
    ctx->pc = 0x1ab05cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2016), GPR_U32(ctx, 2));
label_1ab060:
    // 0x1ab060: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1ab060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1ab064:
    // 0x1ab064: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x1ab064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab068:
    // 0x1ab068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab06c:
    // 0x1ab06c: 0xc4200720  lwc1        $f0, 0x720($at)
    ctx->pc = 0x1ab06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 1824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab070:
    // 0x1ab070: 0x268407cc  addiu       $a0, $s4, 0x7CC
    ctx->pc = 0x1ab070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1996));
label_1ab074:
    // 0x1ab074: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ab074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ab078:
    // 0x1ab078: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ab078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ab07c:
    // 0x1ab07c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ab07cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ab080:
    // 0x1ab080: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ab080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1ab084:
    // 0x1ab084: 0x0  nop
    ctx->pc = 0x1ab084u;
    // NOP
label_1ab088:
    // 0x1ab088: 0xae8307e4  sw          $v1, 0x7E4($s4)
    ctx->pc = 0x1ab088u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2020), GPR_U32(ctx, 3));
label_1ab08c:
    // 0x1ab08c: 0xae8007e8  sw          $zero, 0x7E8($s4)
    ctx->pc = 0x1ab08cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2024), GPR_U32(ctx, 0));
label_1ab090:
    // 0x1ab090: 0xae8207ec  sw          $v0, 0x7EC($s4)
    ctx->pc = 0x1ab090u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2028), GPR_U32(ctx, 2));
label_1ab094:
    // 0x1ab094: 0xc069d00  jal         func_1A7400
label_1ab098:
    if (ctx->pc == 0x1AB098u) {
        ctx->pc = 0x1AB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB094u;
        // 0x1ab098: 0xa28007f4  sb          $zero, 0x7F4($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB09Cu;
        goto label_1ab09c;
    }
    ctx->pc = 0x1AB094u;
    SET_GPR_U32(ctx, 31, 0x1AB09Cu);
    ctx->pc = 0x1AB098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB094u;
    // 0x1ab098: 0xa28007f4  sb          $zero, 0x7F4($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7400u, 0x1AB094u, 0x1AB09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB09Cu;
label_1ab09c:
    // 0x1ab09c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ab0a0:
    if (ctx->pc == 0x1AB0A0u) {
        ctx->pc = 0x1AB0A4u;
        goto label_1ab0a4;
    }
    ctx->pc = 0x1AB09Cu;
    {
        const bool branch_taken_0x1ab09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab09c) {
            ctx->pc = 0x1AB0C4u;
            goto label_1ab0c4;
        }
    }
    ctx->pc = 0x1AB0A4u;
label_1ab0a4:
    // 0x1ab0a4: 0x8f8283a0  lw          $v0, -0x7C60($gp)
    ctx->pc = 0x1ab0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1ab0a8:
    // 0x1ab0a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab0ac:
    // 0x1ab0ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ab0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ab0b0:
    // 0x1ab0b0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ab0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1ab0b4:
    // 0x1ab0b4: 0xc063e08  jal         func_18F820
label_1ab0b8:
    if (ctx->pc == 0x1AB0B8u) {
        ctx->pc = 0x1AB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0B4u;
        // 0x1ab0b8: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB0BCu;
        goto label_1ab0bc;
    }
    ctx->pc = 0x1AB0B4u;
    SET_GPR_U32(ctx, 31, 0x1AB0BCu);
    ctx->pc = 0x1AB0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0B4u;
    // 0x1ab0b8: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AB0B4u, 0x1AB0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0BCu;
label_1ab0bc:
    // 0x1ab0bc: 0x10000172  b           . + 4 + (0x172 << 2)
label_1ab0c0:
    if (ctx->pc == 0x1AB0C0u) {
        ctx->pc = 0x1AB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0BCu;
        // 0x1ab0c0: 0x928306d8  lbu         $v1, 0x6D8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB0C4u;
        goto label_1ab0c4;
    }
    ctx->pc = 0x1AB0BCu;
    {
        const bool branch_taken_0x1ab0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0BCu;
        // 0x1ab0c0: 0x928306d8  lbu         $v1, 0x6D8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab0bc) {
            ctx->pc = 0x1AB688u;
            goto label_1ab688;
        }
    }
    ctx->pc = 0x1AB0C4u;
label_1ab0c4:
    // 0x1ab0c4: 0x8e8406e4  lw          $a0, 0x6E4($s4)
    ctx->pc = 0x1ab0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1764)));
label_1ab0c8:
    // 0x1ab0c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ab0c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ab0cc:
    // 0x1ab0cc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ab0ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ab0d0:
    // 0x1ab0d0: 0x320f809  jalr        $t9
label_1ab0d4:
    if (ctx->pc == 0x1AB0D4u) {
        ctx->pc = 0x1AB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0D0u;
        // 0x1ab0d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB0D8u;
        goto label_1ab0d8;
    }
    ctx->pc = 0x1AB0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AB0D8u);
        ctx->pc = 0x1AB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0D0u;
        // 0x1ab0d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB0D0u, 0x1AB0D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB0D8u;
label_1ab0d8:
    // 0x1ab0d8: 0xc063e14  jal         func_18F850
label_1ab0dc:
    if (ctx->pc == 0x1AB0DCu) {
        ctx->pc = 0x1AB0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0D8u;
        // 0x1ab0dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB0E0u;
        goto label_1ab0e0;
    }
    ctx->pc = 0x1AB0D8u;
    SET_GPR_U32(ctx, 31, 0x1AB0E0u);
    ctx->pc = 0x1AB0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0D8u;
    // 0x1ab0dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AB0D8u, 0x1AB0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0E0u;
label_1ab0e0:
    // 0x1ab0e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab0e4:
    // 0x1ab0e4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ab0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ab0e8:
    // 0x1ab0e8: 0xa28306d9  sb          $v1, 0x6D9($s4)
    ctx->pc = 0x1ab0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1753), (uint8_t)GPR_U32(ctx, 3));
label_1ab0ec:
    // 0x1ab0ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ab0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ab0f0:
    // 0x1ab0f0: 0xae800700  sw          $zero, 0x700($s4)
    ctx->pc = 0x1ab0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1792), GPR_U32(ctx, 0));
label_1ab0f4:
    // 0x1ab0f4: 0x24a50918  addiu       $a1, $a1, 0x918
    ctx->pc = 0x1ab0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2328));
label_1ab0f8:
    // 0x1ab0f8: 0xae8006f8  sw          $zero, 0x6F8($s4)
    ctx->pc = 0x1ab0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1784), GPR_U32(ctx, 0));
label_1ab0fc:
    // 0x1ab0fc: 0xae8006f4  sw          $zero, 0x6F4($s4)
    ctx->pc = 0x1ab0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1780), GPR_U32(ctx, 0));
label_1ab100:
    // 0x1ab100: 0xae8206fc  sw          $v0, 0x6FC($s4)
    ctx->pc = 0x1ab100u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1788), GPR_U32(ctx, 2));
label_1ab104:
    // 0x1ab104: 0xa2800708  sb          $zero, 0x708($s4)
    ctx->pc = 0x1ab104u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1800), (uint8_t)GPR_U32(ctx, 0));
label_1ab108:
    // 0x1ab108: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1ab108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1ab10c:
    // 0x1ab10c: 0x8f86810c  lw          $a2, -0x7EF4($gp)
    ctx->pc = 0x1ab10cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934796)));
label_1ab110:
    // 0x1ab110: 0xc06cf34  jal         func_1B3CD0
label_1ab114:
    if (ctx->pc == 0x1AB114u) {
        ctx->pc = 0x1AB114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB110u;
        // 0x1ab114: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB118u;
        goto label_1ab118;
    }
    ctx->pc = 0x1AB110u;
    SET_GPR_U32(ctx, 31, 0x1AB118u);
    ctx->pc = 0x1AB114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB110u;
    // 0x1ab114: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AB110u, 0x1AB118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB118u;
label_1ab118:
    // 0x1ab118: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab11c:
    // 0x1ab11c: 0xc069ac8  jal         func_1A6B20
label_1ab120:
    if (ctx->pc == 0x1AB120u) {
        ctx->pc = 0x1AB120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB11Cu;
        // 0x1ab120: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB124u;
        goto label_1ab124;
    }
    ctx->pc = 0x1AB11Cu;
    SET_GPR_U32(ctx, 31, 0x1AB124u);
    ctx->pc = 0x1AB120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB11Cu;
    // 0x1ab120: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AB11Cu, 0x1AB124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB124u;
label_1ab124:
    // 0x1ab124: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ab124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ab128:
    // 0x1ab128: 0x268406f0  addiu       $a0, $s4, 0x6F0
    ctx->pc = 0x1ab128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
label_1ab12c:
    // 0x1ab12c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ab12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ab130:
    // 0x1ab130: 0xc069ac0  jal         func_1A6B00
label_1ab134:
    if (ctx->pc == 0x1AB134u) {
        ctx->pc = 0x1AB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB130u;
        // 0x1ab134: 0xa2800709  sb          $zero, 0x709($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1801), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB138u;
        goto label_1ab138;
    }
    ctx->pc = 0x1AB130u;
    SET_GPR_U32(ctx, 31, 0x1AB138u);
    ctx->pc = 0x1AB134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB130u;
    // 0x1ab134: 0xa2800709  sb          $zero, 0x709($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1801), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x1AB130u, 0x1AB138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB138u;
label_1ab138:
    // 0x1ab138: 0xc062114  jal         func_188450
label_1ab13c:
    if (ctx->pc == 0x1AB13Cu) {
        ctx->pc = 0x1AB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB138u;
        // 0x1ab13c: 0x24040049  addiu       $a0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB140u;
        goto label_1ab140;
    }
    ctx->pc = 0x1AB138u;
    SET_GPR_U32(ctx, 31, 0x1AB140u);
    ctx->pc = 0x1AB13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB138u;
    // 0x1ab13c: 0x24040049  addiu       $a0, $zero, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AB138u, 0x1AB140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB140u;
label_1ab140:
    // 0x1ab140: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab144:
    // 0x1ab144: 0xc0620fc  jal         func_1883F0
label_1ab148:
    if (ctx->pc == 0x1AB148u) {
        ctx->pc = 0x1AB148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB144u;
        // 0x1ab148: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB14Cu;
        goto label_1ab14c;
    }
    ctx->pc = 0x1AB144u;
    SET_GPR_U32(ctx, 31, 0x1AB14Cu);
    ctx->pc = 0x1AB148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB144u;
    // 0x1ab148: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AB144u, 0x1AB14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB14Cu;
label_1ab14c:
    // 0x1ab14c: 0x8e8406f0  lw          $a0, 0x6F0($s4)
    ctx->pc = 0x1ab14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1776)));
label_1ab150:
    // 0x1ab150: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ab154:
    if (ctx->pc == 0x1AB154u) {
        ctx->pc = 0x1AB158u;
        goto label_1ab158;
    }
    ctx->pc = 0x1AB150u;
    {
        const bool branch_taken_0x1ab150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab150) {
            ctx->pc = 0x1AB16Cu;
            goto label_1ab16c;
        }
    }
    ctx->pc = 0x1AB158u;
label_1ab158:
    // 0x1ab158: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ab158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ab15c:
    // 0x1ab15c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1ab15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ab160:
    // 0x1ab160: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1ab160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1ab164:
    // 0x1ab164: 0x320f809  jalr        $t9
label_1ab168:
    if (ctx->pc == 0x1AB168u) {
        ctx->pc = 0x1AB168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB164u;
        // 0x1ab168: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB16Cu;
        goto label_1ab16c;
    }
    ctx->pc = 0x1AB164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AB16Cu);
        ctx->pc = 0x1AB168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB164u;
        // 0x1ab168: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB164u, 0x1AB16Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB16Cu;
label_1ab16c:
    // 0x1ab16c: 0xc063e14  jal         func_18F850
label_1ab170:
    if (ctx->pc == 0x1AB170u) {
        ctx->pc = 0x1AB170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB16Cu;
        // 0x1ab170: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB174u;
        goto label_1ab174;
    }
    ctx->pc = 0x1AB16Cu;
    SET_GPR_U32(ctx, 31, 0x1AB174u);
    ctx->pc = 0x1AB170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB16Cu;
    // 0x1ab170: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AB16Cu, 0x1AB174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB174u;
label_1ab174:
    // 0x1ab174: 0xc069afc  jal         func_1A6BF0
label_1ab178:
    if (ctx->pc == 0x1AB178u) {
        ctx->pc = 0x1AB178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB174u;
        // 0x1ab178: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB17Cu;
        goto label_1ab17c;
    }
    ctx->pc = 0x1AB174u;
    SET_GPR_U32(ctx, 31, 0x1AB17Cu);
    ctx->pc = 0x1AB178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB174u;
    // 0x1ab178: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1AB174u, 0x1AB17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB17Cu;
label_1ab17c:
    // 0x1ab17c: 0x10400141  beqz        $v0, . + 4 + (0x141 << 2)
label_1ab180:
    if (ctx->pc == 0x1AB180u) {
        ctx->pc = 0x1AB180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB17Cu;
        // 0x1ab180: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB184u;
        goto label_1ab184;
    }
    ctx->pc = 0x1AB17Cu;
    {
        const bool branch_taken_0x1ab17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB17Cu;
        // 0x1ab180: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab17c) {
            ctx->pc = 0x1AB684u;
            goto label_1ab684;
        }
    }
    ctx->pc = 0x1AB184u;
label_1ab184:
    // 0x1ab184: 0xc069ae8  jal         func_1A6BA0
label_1ab188:
    if (ctx->pc == 0x1AB188u) {
        ctx->pc = 0x1AB18Cu;
        goto label_1ab18c;
    }
    ctx->pc = 0x1AB184u;
    SET_GPR_U32(ctx, 31, 0x1AB18Cu);
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AB184u, 0x1AB18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB18Cu;
label_1ab18c:
    // 0x1ab18c: 0xc063e14  jal         func_18F850
label_1ab190:
    if (ctx->pc == 0x1AB190u) {
        ctx->pc = 0x1AB190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB18Cu;
        // 0x1ab190: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB194u;
        goto label_1ab194;
    }
    ctx->pc = 0x1AB18Cu;
    SET_GPR_U32(ctx, 31, 0x1AB194u);
    ctx->pc = 0x1AB190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB18Cu;
    // 0x1ab190: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AB18Cu, 0x1AB194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB194u;
label_1ab194:
    // 0x1ab194: 0x1000013b  b           . + 4 + (0x13B << 2)
label_1ab198:
    if (ctx->pc == 0x1AB198u) {
        ctx->pc = 0x1AB19Cu;
        goto label_1ab19c;
    }
    ctx->pc = 0x1AB194u;
    {
        const bool branch_taken_0x1ab194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab194) {
            ctx->pc = 0x1AB684u;
            goto label_1ab684;
        }
    }
    ctx->pc = 0x1AB19Cu;
label_1ab19c:
    // 0x1ab19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab1a0:
    // 0x1ab1a0: 0xc062d50  jal         func_18B540
label_1ab1a4:
    if (ctx->pc == 0x1AB1A4u) {
        ctx->pc = 0x1AB1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1A0u;
        // 0x1ab1a4: 0xa28206d8  sb          $v0, 0x6D8($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1752), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB1A8u;
        goto label_1ab1a8;
    }
    ctx->pc = 0x1AB1A0u;
    SET_GPR_U32(ctx, 31, 0x1AB1A8u);
    ctx->pc = 0x1AB1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1A0u;
    // 0x1ab1a4: 0xa28206d8  sb          $v0, 0x6D8($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1752), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AB1A0u, 0x1AB1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1A8u;
label_1ab1a8:
    // 0x1ab1a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ab1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab1ac:
    // 0x1ab1ac: 0x240500c3  addiu       $a1, $zero, 0xC3
    ctx->pc = 0x1ab1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
label_1ab1b0:
    // 0x1ab1b0: 0xc062b5c  jal         func_18AD70
label_1ab1b4:
    if (ctx->pc == 0x1AB1B4u) {
        ctx->pc = 0x1AB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1B0u;
        // 0x1ab1b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB1B8u;
        goto label_1ab1b8;
    }
    ctx->pc = 0x1AB1B0u;
    SET_GPR_U32(ctx, 31, 0x1AB1B8u);
    ctx->pc = 0x1AB1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1B0u;
    // 0x1ab1b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AB1B0u, 0x1AB1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1B8u;
label_1ab1b8:
    // 0x1ab1b8: 0xc063e14  jal         func_18F850
label_1ab1bc:
    if (ctx->pc == 0x1AB1BCu) {
        ctx->pc = 0x1AB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1B8u;
        // 0x1ab1bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB1C0u;
        goto label_1ab1c0;
    }
    ctx->pc = 0x1AB1B8u;
    SET_GPR_U32(ctx, 31, 0x1AB1C0u);
    ctx->pc = 0x1AB1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1B8u;
    // 0x1ab1bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AB1B8u, 0x1AB1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1C0u;
label_1ab1c0:
    // 0x1ab1c0: 0xc063e14  jal         func_18F850
label_1ab1c4:
    if (ctx->pc == 0x1AB1C4u) {
        ctx->pc = 0x1AB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1C0u;
        // 0x1ab1c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB1C8u;
        goto label_1ab1c8;
    }
    ctx->pc = 0x1AB1C0u;
    SET_GPR_U32(ctx, 31, 0x1AB1C8u);
    ctx->pc = 0x1AB1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1C0u;
    // 0x1ab1c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AB1C0u, 0x1AB1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1C8u;
label_1ab1c8:
    // 0x1ab1c8: 0x1000012e  b           . + 4 + (0x12E << 2)
label_1ab1cc:
    if (ctx->pc == 0x1AB1CCu) {
        ctx->pc = 0x1AB1D0u;
        goto label_1ab1d0;
    }
    ctx->pc = 0x1AB1C8u;
    {
        const bool branch_taken_0x1ab1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab1c8) {
            ctx->pc = 0x1AB684u;
            goto label_1ab684;
        }
    }
    ctx->pc = 0x1AB1D0u;
label_1ab1d0:
    // 0x1ab1d0: 0xc06adf8  jal         func_1AB7E0
label_1ab1d4:
    if (ctx->pc == 0x1AB1D4u) {
        ctx->pc = 0x1AB1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1D0u;
        // 0x1ab1d4: 0x26840670  addiu       $a0, $s4, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB1D8u;
        goto label_1ab1d8;
    }
    ctx->pc = 0x1AB1D0u;
    SET_GPR_U32(ctx, 31, 0x1AB1D8u);
    ctx->pc = 0x1AB1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1D0u;
    // 0x1ab1d4: 0x26840670  addiu       $a0, $s4, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB7E0u, 0x1AB1D0u, 0x1AB1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1D8u;
label_1ab1d8:
    // 0x1ab1d8: 0x8e8306dc  lw          $v1, 0x6DC($s4)
    ctx->pc = 0x1ab1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1756)));
label_1ab1dc:
    // 0x1ab1dc: 0x18600129  blez        $v1, . + 4 + (0x129 << 2)
label_1ab1e0:
    if (ctx->pc == 0x1AB1E0u) {
        ctx->pc = 0x1AB1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1DCu;
        // 0x1ab1e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB1E4u;
        goto label_1ab1e4;
    }
    ctx->pc = 0x1AB1DCu;
    {
        const bool branch_taken_0x1ab1dc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AB1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1DCu;
        // 0x1ab1e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab1dc) {
            ctx->pc = 0x1AB684u;
            goto label_1ab684;
        }
    }
    ctx->pc = 0x1AB1E4u;
label_1ab1e4:
    // 0x1ab1e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ab1e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab1e8:
    // 0x1ab1e8: 0x2919021  addu        $s2, $s4, $s1
    ctx->pc = 0x1ab1e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1ab1ec:
    // 0x1ab1ec: 0x26530670  addiu       $s3, $s2, 0x670
    ctx->pc = 0x1ab1ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1648));
label_1ab1f0:
    // 0x1ab1f0: 0xc06ae4c  jal         func_1AB930
label_1ab1f4:
    if (ctx->pc == 0x1AB1F4u) {
        ctx->pc = 0x1AB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1F0u;
        // 0x1ab1f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB1F8u;
        goto label_1ab1f8;
    }
    ctx->pc = 0x1AB1F0u;
    SET_GPR_U32(ctx, 31, 0x1AB1F8u);
    ctx->pc = 0x1AB1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1F0u;
    // 0x1ab1f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB930u, 0x1AB1F0u, 0x1AB1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1F8u;
label_1ab1f8:
    // 0x1ab1f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1ab1fc:
    if (ctx->pc == 0x1AB1FCu) {
        ctx->pc = 0x1AB200u;
        goto label_1ab200;
    }
    ctx->pc = 0x1AB1F8u;
    {
        const bool branch_taken_0x1ab1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab1f8) {
            ctx->pc = 0x1AB244u;
            goto label_1ab244;
        }
    }
    ctx->pc = 0x1AB200u;
label_1ab200:
    // 0x1ab200: 0x8e420670  lw          $v0, 0x670($s2)
    ctx->pc = 0x1ab200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1ab204:
    // 0x1ab204: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ab204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ab208:
    // 0x1ab208: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ab20c:
    // 0x1ab20c: 0xc06ae48  jal         func_1AB920
label_1ab210:
    if (ctx->pc == 0x1AB210u) {
        ctx->pc = 0x1AB210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB20Cu;
        // 0x1ab210: 0xae420670  sw          $v0, 0x670($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB214u;
        goto label_1ab214;
    }
    ctx->pc = 0x1AB20Cu;
    SET_GPR_U32(ctx, 31, 0x1AB214u);
    ctx->pc = 0x1AB210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB20Cu;
    // 0x1ab210: 0xae420670  sw          $v0, 0x670($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1648), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB920u, 0x1AB20Cu, 0x1AB214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB214u;
label_1ab214:
    // 0x1ab214: 0xc062d50  jal         func_18B540
label_1ab218:
    if (ctx->pc == 0x1AB218u) {
        ctx->pc = 0x1AB21Cu;
        goto label_1ab21c;
    }
    ctx->pc = 0x1AB214u;
    SET_GPR_U32(ctx, 31, 0x1AB21Cu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AB214u, 0x1AB21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB21Cu;
label_1ab21c:
    // 0x1ab21c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ab21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab220:
    // 0x1ab220: 0x240500c4  addiu       $a1, $zero, 0xC4
    ctx->pc = 0x1ab220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_1ab224:
    // 0x1ab224: 0xc062b5c  jal         func_18AD70
label_1ab228:
    if (ctx->pc == 0x1AB228u) {
        ctx->pc = 0x1AB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB224u;
        // 0x1ab228: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB22Cu;
        goto label_1ab22c;
    }
    ctx->pc = 0x1AB224u;
    SET_GPR_U32(ctx, 31, 0x1AB22Cu);
    ctx->pc = 0x1AB228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB224u;
    // 0x1ab228: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AB224u, 0x1AB22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB22Cu;
label_1ab22c:
    // 0x1ab22c: 0xc062d50  jal         func_18B540
label_1ab230:
    if (ctx->pc == 0x1AB230u) {
        ctx->pc = 0x1AB234u;
        goto label_1ab234;
    }
    ctx->pc = 0x1AB22Cu;
    SET_GPR_U32(ctx, 31, 0x1AB234u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AB22Cu, 0x1AB234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB234u;
label_1ab234:
    // 0x1ab234: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ab234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab238:
    // 0x1ab238: 0x240500c6  addiu       $a1, $zero, 0xC6
    ctx->pc = 0x1ab238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
label_1ab23c:
    // 0x1ab23c: 0xc062b5c  jal         func_18AD70
label_1ab240:
    if (ctx->pc == 0x1AB240u) {
        ctx->pc = 0x1AB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB23Cu;
        // 0x1ab240: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB244u;
        goto label_1ab244;
    }
    ctx->pc = 0x1AB23Cu;
    SET_GPR_U32(ctx, 31, 0x1AB244u);
    ctx->pc = 0x1AB240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB23Cu;
    // 0x1ab240: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AB23Cu, 0x1AB244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB244u;
label_1ab244:
    // 0x1ab244: 0x0  nop
    ctx->pc = 0x1ab244u;
    // NOP
label_1ab248:
    // 0x1ab248: 0xc06ae3c  jal         func_1AB8F0
label_1ab24c:
    if (ctx->pc == 0x1AB24Cu) {
        ctx->pc = 0x1AB24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB248u;
        // 0x1ab24c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB250u;
        goto label_1ab250;
    }
    ctx->pc = 0x1AB248u;
    SET_GPR_U32(ctx, 31, 0x1AB250u);
    ctx->pc = 0x1AB24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB248u;
    // 0x1ab24c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB8F0u, 0x1AB248u, 0x1AB250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB250u;
label_1ab250:
    // 0x1ab250: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ab254:
    if (ctx->pc == 0x1AB254u) {
        ctx->pc = 0x1AB254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB250u;
        // 0x1ab254: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB258u;
        goto label_1ab258;
    }
    ctx->pc = 0x1AB250u;
    {
        const bool branch_taken_0x1ab250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB250u;
        // 0x1ab254: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab250) {
            ctx->pc = 0x1AB260u;
            goto label_1ab260;
        }
    }
    ctx->pc = 0x1AB258u;
label_1ab258:
    // 0x1ab258: 0xc06ae30  jal         func_1AB8C0
label_1ab25c:
    if (ctx->pc == 0x1AB25Cu) {
        ctx->pc = 0x1AB260u;
        goto label_1ab260;
    }
    ctx->pc = 0x1AB258u;
    SET_GPR_U32(ctx, 31, 0x1AB260u);
    ctx->pc = 0x1AB8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB8C0u, 0x1AB258u, 0x1AB260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB260u;
label_1ab260:
    // 0x1ab260: 0x8e430670  lw          $v1, 0x670($s2)
    ctx->pc = 0x1ab260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1ab264:
    // 0x1ab264: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x1ab264u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_1ab268:
    // 0x1ab268: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1ab26c:
    if (ctx->pc == 0x1AB26Cu) {
        ctx->pc = 0x1AB26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB268u;
        // 0x1ab26c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB270u;
        goto label_1ab270;
    }
    ctx->pc = 0x1AB268u;
    {
        const bool branch_taken_0x1ab268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB268u;
        // 0x1ab26c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab268) {
            ctx->pc = 0x1AB280u;
            goto label_1ab280;
        }
    }
    ctx->pc = 0x1AB270u;
label_1ab270:
    // 0x1ab270: 0xc063e08  jal         func_18F820
label_1ab274:
    if (ctx->pc == 0x1AB274u) {
        ctx->pc = 0x1AB274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB270u;
        // 0x1ab274: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB278u;
        goto label_1ab278;
    }
    ctx->pc = 0x1AB270u;
    SET_GPR_U32(ctx, 31, 0x1AB278u);
    ctx->pc = 0x1AB274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB270u;
    // 0x1ab274: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AB270u, 0x1AB278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB278u;
label_1ab278:
    // 0x1ab278: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ab27c:
    if (ctx->pc == 0x1AB27Cu) {
        ctx->pc = 0x1AB280u;
        goto label_1ab280;
    }
    ctx->pc = 0x1AB278u;
    {
        const bool branch_taken_0x1ab278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab278) {
            ctx->pc = 0x1AB290u;
            goto label_1ab290;
        }
    }
    ctx->pc = 0x1AB280u;
label_1ab280:
    // 0x1ab280: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ab280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ab284:
    // 0x1ab284: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1ab284u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ab288:
    // 0x1ab288: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_1ab28c:
    if (ctx->pc == 0x1AB28Cu) {
        ctx->pc = 0x1AB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB288u;
        // 0x1ab28c: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB290u;
        goto label_1ab290;
    }
    ctx->pc = 0x1AB288u;
    {
        const bool branch_taken_0x1ab288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB288u;
        // 0x1ab28c: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab288) {
            ctx->pc = 0x1AB1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab1e8;
        }
    }
    ctx->pc = 0x1AB290u;
label_1ab290:
    // 0x1ab290: 0x928306da  lbu         $v1, 0x6DA($s4)
    ctx->pc = 0x1ab290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1754)));
label_1ab294:
    // 0x1ab294: 0x146000fb  bnez        $v1, . + 4 + (0xFB << 2)
label_1ab298:
    if (ctx->pc == 0x1AB298u) {
        ctx->pc = 0x1AB29Cu;
        goto label_1ab29c;
    }
    ctx->pc = 0x1AB294u;
    {
        const bool branch_taken_0x1ab294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab294) {
            ctx->pc = 0x1AB684u;
            goto label_1ab684;
        }
    }
    ctx->pc = 0x1AB29Cu;
label_1ab29c:
    // 0x1ab29c: 0x8e830670  lw          $v1, 0x670($s4)
    ctx->pc = 0x1ab29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_1ab2a0:
    // 0x1ab2a0: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x1ab2a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_1ab2a4:
    // 0x1ab2a4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1ab2a8:
    if (ctx->pc == 0x1AB2A8u) {
        ctx->pc = 0x1AB2ACu;
        goto label_1ab2ac;
    }
    ctx->pc = 0x1AB2A4u;
    {
        const bool branch_taken_0x1ab2a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab2a4) {
            ctx->pc = 0x1AB2BCu;
            goto label_1ab2bc;
        }
    }
    ctx->pc = 0x1AB2ACu;
label_1ab2ac:
    // 0x1ab2ac: 0x8e83069c  lw          $v1, 0x69C($s4)
    ctx->pc = 0x1ab2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
label_1ab2b0:
    // 0x1ab2b0: 0x28630007  slti        $v1, $v1, 0x7
    ctx->pc = 0x1ab2b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_1ab2b4:
    // 0x1ab2b4: 0x146000f3  bnez        $v1, . + 4 + (0xF3 << 2)
label_1ab2b8:
    if (ctx->pc == 0x1AB2B8u) {
        ctx->pc = 0x1AB2BCu;
        goto label_1ab2bc;
    }
    ctx->pc = 0x1AB2B4u;
    {
        const bool branch_taken_0x1ab2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab2b4) {
            ctx->pc = 0x1AB684u;
            goto label_1ab684;
        }
    }
    ctx->pc = 0x1AB2BCu;
label_1ab2bc:
    // 0x1ab2bc: 0x8e8406ec  lw          $a0, 0x6EC($s4)
    ctx->pc = 0x1ab2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1772)));
label_1ab2c0:
    // 0x1ab2c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1ab2c4:
    if (ctx->pc == 0x1AB2C4u) {
        ctx->pc = 0x1AB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2C0u;
        // 0x1ab2c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB2C8u;
        goto label_1ab2c8;
    }
    ctx->pc = 0x1AB2C0u;
    {
        const bool branch_taken_0x1ab2c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2C0u;
        // 0x1ab2c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab2c0) {
            ctx->pc = 0x1AB2D4u;
            goto label_1ab2d4;
        }
    }
    ctx->pc = 0x1AB2C8u;
label_1ab2c8:
    // 0x1ab2c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab2cc:
    // 0x1ab2cc: 0xac830320  sw          $v1, 0x320($a0)
    ctx->pc = 0x1ab2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 3));
label_1ab2d0:
    // 0x1ab2d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab2d4:
    // 0x1ab2d4: 0x100000eb  b           . + 4 + (0xEB << 2)
label_1ab2d8:
    if (ctx->pc == 0x1AB2D8u) {
        ctx->pc = 0x1AB2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2D4u;
        // 0x1ab2d8: 0xa28306da  sb          $v1, 0x6DA($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1754), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB2DCu;
        goto label_1ab2dc;
    }
    ctx->pc = 0x1AB2D4u;
    {
        const bool branch_taken_0x1ab2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2D4u;
        // 0x1ab2d8: 0xa28306da  sb          $v1, 0x6DA($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1754), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab2d4) {
            ctx->pc = 0x1AB684u;
            goto label_1ab684;
        }
    }
    ctx->pc = 0x1AB2DCu;
label_1ab2dc:
    // 0x1ab2dc: 0xa28006d9  sb          $zero, 0x6D9($s4)
    ctx->pc = 0x1ab2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1753), (uint8_t)GPR_U32(ctx, 0));
label_1ab2e0:
    // 0x1ab2e0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ab2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ab2e4:
    // 0x1ab2e4: 0xae800700  sw          $zero, 0x700($s4)
    ctx->pc = 0x1ab2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1792), GPR_U32(ctx, 0));
label_1ab2e8:
    // 0x1ab2e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ab2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ab2ec:
    // 0x1ab2ec: 0xae8006f8  sw          $zero, 0x6F8($s4)
    ctx->pc = 0x1ab2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1784), GPR_U32(ctx, 0));
label_1ab2f0:
    // 0x1ab2f0: 0x24a50918  addiu       $a1, $a1, 0x918
    ctx->pc = 0x1ab2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2328));
label_1ab2f4:
    // 0x1ab2f4: 0xae8006f4  sw          $zero, 0x6F4($s4)
    ctx->pc = 0x1ab2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1780), GPR_U32(ctx, 0));
label_1ab2f8:
    // 0x1ab2f8: 0xae8206fc  sw          $v0, 0x6FC($s4)
    ctx->pc = 0x1ab2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1788), GPR_U32(ctx, 2));
label_1ab2fc:
    // 0x1ab2fc: 0xa2800708  sb          $zero, 0x708($s4)
    ctx->pc = 0x1ab2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1800), (uint8_t)GPR_U32(ctx, 0));
label_1ab300:
    // 0x1ab300: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1ab300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1ab304:
    // 0x1ab304: 0x8f86810c  lw          $a2, -0x7EF4($gp)
    ctx->pc = 0x1ab304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934796)));
label_1ab308:
    // 0x1ab308: 0xc06cf34  jal         func_1B3CD0
label_1ab30c:
    if (ctx->pc == 0x1AB30Cu) {
        ctx->pc = 0x1AB30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB308u;
        // 0x1ab30c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB310u;
        goto label_1ab310;
    }
    ctx->pc = 0x1AB308u;
    SET_GPR_U32(ctx, 31, 0x1AB310u);
    ctx->pc = 0x1AB30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB308u;
    // 0x1ab30c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AB308u, 0x1AB310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB310u;
label_1ab310:
    // 0x1ab310: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab314:
    // 0x1ab314: 0xc069ac8  jal         func_1A6B20
label_1ab318:
    if (ctx->pc == 0x1AB318u) {
        ctx->pc = 0x1AB318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB314u;
        // 0x1ab318: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB31Cu;
        goto label_1ab31c;
    }
    ctx->pc = 0x1AB314u;
    SET_GPR_U32(ctx, 31, 0x1AB31Cu);
    ctx->pc = 0x1AB318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB314u;
    // 0x1ab318: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AB314u, 0x1AB31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB31Cu;
label_1ab31c:
    // 0x1ab31c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ab31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ab320:
    // 0x1ab320: 0x268406f0  addiu       $a0, $s4, 0x6F0
    ctx->pc = 0x1ab320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
label_1ab324:
    // 0x1ab324: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ab324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ab328:
    // 0x1ab328: 0xc069ac0  jal         func_1A6B00
label_1ab32c:
    if (ctx->pc == 0x1AB32Cu) {
        ctx->pc = 0x1AB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB328u;
        // 0x1ab32c: 0xa2800709  sb          $zero, 0x709($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1801), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB330u;
        goto label_1ab330;
    }
    ctx->pc = 0x1AB328u;
    SET_GPR_U32(ctx, 31, 0x1AB330u);
    ctx->pc = 0x1AB32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB328u;
    // 0x1ab32c: 0xa2800709  sb          $zero, 0x709($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1801), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x1AB328u, 0x1AB330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB330u;
label_1ab330:
    // 0x1ab330: 0xc062114  jal         func_188450
label_1ab334:
    if (ctx->pc == 0x1AB334u) {
        ctx->pc = 0x1AB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB330u;
        // 0x1ab334: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB338u;
        goto label_1ab338;
    }
    ctx->pc = 0x1AB330u;
    SET_GPR_U32(ctx, 31, 0x1AB338u);
    ctx->pc = 0x1AB334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB330u;
    // 0x1ab334: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AB330u, 0x1AB338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB338u;
label_1ab338:
    // 0x1ab338: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab33c:
    // 0x1ab33c: 0xc0620fc  jal         func_1883F0
label_1ab340:
    if (ctx->pc == 0x1AB340u) {
        ctx->pc = 0x1AB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB33Cu;
        // 0x1ab340: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB344u;
        goto label_1ab344;
    }
    ctx->pc = 0x1AB33Cu;
    SET_GPR_U32(ctx, 31, 0x1AB344u);
    ctx->pc = 0x1AB340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB33Cu;
    // 0x1ab340: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AB33Cu, 0x1AB344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB344u;
label_1ab344:
    // 0x1ab344: 0x8e8406f0  lw          $a0, 0x6F0($s4)
    ctx->pc = 0x1ab344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1776)));
label_1ab348:
    // 0x1ab348: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ab34c:
    if (ctx->pc == 0x1AB34Cu) {
        ctx->pc = 0x1AB350u;
        goto label_1ab350;
    }
    ctx->pc = 0x1AB348u;
    {
        const bool branch_taken_0x1ab348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab348) {
            ctx->pc = 0x1AB364u;
            goto label_1ab364;
        }
    }
    ctx->pc = 0x1AB350u;
label_1ab350:
    // 0x1ab350: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ab350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ab354:
    // 0x1ab354: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1ab354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ab358:
    // 0x1ab358: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1ab358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1ab35c:
    // 0x1ab35c: 0x320f809  jalr        $t9
label_1ab360:
    if (ctx->pc == 0x1AB360u) {
        ctx->pc = 0x1AB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB35Cu;
        // 0x1ab360: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB364u;
        goto label_1ab364;
    }
    ctx->pc = 0x1AB35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AB364u);
        ctx->pc = 0x1AB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB35Cu;
        // 0x1ab360: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB35Cu, 0x1AB364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB364u;
label_1ab364:
    // 0x1ab364: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ab364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ab368:
    // 0x1ab368: 0xc063e14  jal         func_18F850
label_1ab36c:
    if (ctx->pc == 0x1AB36Cu) {
        ctx->pc = 0x1AB36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB368u;
        // 0x1ab36c: 0xae8006e0  sw          $zero, 0x6E0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB370u;
        goto label_1ab370;
    }
    ctx->pc = 0x1AB368u;
    SET_GPR_U32(ctx, 31, 0x1AB370u);
    ctx->pc = 0x1AB36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB368u;
    // 0x1ab36c: 0xae8006e0  sw          $zero, 0x6E0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1760), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AB368u, 0x1AB370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB370u;
label_1ab370:
    // 0x1ab370: 0x26840710  addiu       $a0, $s4, 0x710
    ctx->pc = 0x1ab370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1808));
label_1ab374:
    // 0x1ab374: 0xc0628f0  jal         func_18A3C0
label_1ab378:
    if (ctx->pc == 0x1AB378u) {
        ctx->pc = 0x1AB378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB374u;
        // 0x1ab378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB37Cu;
        goto label_1ab37c;
    }
    ctx->pc = 0x1AB374u;
    SET_GPR_U32(ctx, 31, 0x1AB37Cu);
    ctx->pc = 0x1AB378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB374u;
    // 0x1ab378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1AB374u, 0x1AB37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB37Cu;
label_1ab37c:
    // 0x1ab37c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab37cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ab380:
    // 0x1ab380: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1ab380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_1ab384:
    // 0x1ab384: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ab384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ab388:
    // 0x1ab388: 0x26840710  addiu       $a0, $s4, 0x710
    ctx->pc = 0x1ab388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1808));
label_1ab38c:
    // 0x1ab38c: 0xc062828  jal         func_18A0A0
label_1ab390:
    if (ctx->pc == 0x1AB390u) {
        ctx->pc = 0x1AB390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB38Cu;
        // 0x1ab390: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB394u;
        goto label_1ab394;
    }
    ctx->pc = 0x1AB38Cu;
    SET_GPR_U32(ctx, 31, 0x1AB394u);
    ctx->pc = 0x1AB390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB38Cu;
    // 0x1ab390: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1AB38Cu, 0x1AB394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB394u;
label_1ab394:
    // 0x1ab394: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ab394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1ab398:
    // 0x1ab398: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ab398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ab39c:
    // 0x1ab39c: 0xc062858  jal         func_18A160
label_1ab3a0:
    if (ctx->pc == 0x1AB3A0u) {
        ctx->pc = 0x1AB3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB39Cu;
        // 0x1ab3a0: 0x26840710  addiu       $a0, $s4, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB3A4u;
        goto label_1ab3a4;
    }
    ctx->pc = 0x1AB39Cu;
    SET_GPR_U32(ctx, 31, 0x1AB3A4u);
    ctx->pc = 0x1AB3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB39Cu;
    // 0x1ab3a0: 0x26840710  addiu       $a0, $s4, 0x710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1AB39Cu, 0x1AB3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB3A4u;
label_1ab3a4:
    // 0x1ab3a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ab3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ab3a8:
    // 0x1ab3a8: 0x26840710  addiu       $a0, $s4, 0x710
    ctx->pc = 0x1ab3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1808));
label_1ab3ac:
    // 0x1ab3ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ab3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ab3b0:
    // 0x1ab3b0: 0x0  nop
    ctx->pc = 0x1ab3b0u;
    // NOP
label_1ab3b4:
    // 0x1ab3b4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ab3b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ab3b8:
    // 0x1ab3b8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1ab3b8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_1ab3bc:
    // 0x1ab3bc: 0xc062860  jal         func_18A180
label_1ab3c0:
    if (ctx->pc == 0x1AB3C0u) {
        ctx->pc = 0x1AB3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3BCu;
        // 0x1ab3c0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB3C4u;
        goto label_1ab3c4;
    }
    ctx->pc = 0x1AB3BCu;
    SET_GPR_U32(ctx, 31, 0x1AB3C4u);
    ctx->pc = 0x1AB3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB3BCu;
    // 0x1ab3c0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1AB3BCu, 0x1AB3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB3C4u;
label_1ab3c4:
    // 0x1ab3c4: 0x8e860670  lw          $a2, 0x670($s4)
    ctx->pc = 0x1ab3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_1ab3c8:
    // 0x1ab3c8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ab3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ab3cc:
    // 0x1ab3cc: 0x8e87069c  lw          $a3, 0x69C($s4)
    ctx->pc = 0x1ab3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
label_1ab3d0:
    // 0x1ab3d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ab3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ab3d4:
    // 0x1ab3d4: 0xc0805c8  jal         func_201720
label_1ab3d8:
    if (ctx->pc == 0x1AB3D8u) {
        ctx->pc = 0x1AB3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3D4u;
        // 0x1ab3d8: 0x24a50920  addiu       $a1, $a1, 0x920 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB3DCu;
        goto label_1ab3dc;
    }
    ctx->pc = 0x1AB3D4u;
    SET_GPR_U32(ctx, 31, 0x1AB3DCu);
    ctx->pc = 0x1AB3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB3D4u;
    // 0x1ab3d8: 0x24a50920  addiu       $a1, $a1, 0x920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1AB3D4u, 0x1AB3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB3DCu;
label_1ab3dc:
    // 0x1ab3dc: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ab3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab3e0:
    // 0x1ab3e0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ab3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1ab3e4:
    // 0x1ab3e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ab3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ab3e8:
    // 0x1ab3e8: 0x8e8306e0  lw          $v1, 0x6E0($s4)
    ctx->pc = 0x1ab3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1760)));
label_1ab3ec:
    // 0x1ab3ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ab3ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ab3f0:
    // 0x1ab3f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab3f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ab3f4:
    // 0x1ab3f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ab3f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ab3f8:
    // 0x1ab3f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ab3f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ab3fc:
    // 0x1ab3fc: 0x0  nop
    ctx->pc = 0x1ab3fcu;
    // NOP
label_1ab400:
    // 0x1ab400: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ab400u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ab404:
    // 0x1ab404: 0x0  nop
    ctx->pc = 0x1ab404u;
    // NOP
label_1ab408:
    // 0x1ab408: 0x0  nop
    ctx->pc = 0x1ab408u;
    // NOP
label_1ab40c:
    // 0x1ab40c: 0x1012  mflo        $v0
    ctx->pc = 0x1ab40cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1ab410:
    // 0x1ab410: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ab410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ab414:
    // 0x1ab414: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ab418:
    if (ctx->pc == 0x1AB418u) {
        ctx->pc = 0x1AB418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB414u;
        // 0x1ab418: 0x26840710  addiu       $a0, $s4, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB41Cu;
        goto label_1ab41c;
    }
    ctx->pc = 0x1AB414u;
    {
        const bool branch_taken_0x1ab414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB414u;
        // 0x1ab418: 0x26840710  addiu       $a0, $s4, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab414) {
            ctx->pc = 0x1AB438u;
            goto label_1ab438;
        }
    }
    ctx->pc = 0x1AB41Cu;
label_1ab41c:
    // 0x1ab41c: 0x8e8306d0  lw          $v1, 0x6D0($s4)
    ctx->pc = 0x1ab41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1744)));
label_1ab420:
    // 0x1ab420: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ab420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ab424:
    // 0x1ab424: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1ab424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ab428:
    // 0x1ab428: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1ab428u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1ab42c:
    // 0x1ab42c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1ab42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1ab430:
    // 0x1ab430: 0xa04400b0  sb          $a0, 0xB0($v0)
    ctx->pc = 0x1ab430u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 176), (uint8_t)GPR_U32(ctx, 4));
label_1ab434:
    // 0x1ab434: 0x26840710  addiu       $a0, $s4, 0x710
    ctx->pc = 0x1ab434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1808));
label_1ab438:
    // 0x1ab438: 0xc0627bc  jal         func_189EF0
label_1ab43c:
    if (ctx->pc == 0x1AB43Cu) {
        ctx->pc = 0x1AB43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB438u;
        // 0x1ab43c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB440u;
        goto label_1ab440;
    }
    ctx->pc = 0x1AB438u;
    SET_GPR_U32(ctx, 31, 0x1AB440u);
    ctx->pc = 0x1AB43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB438u;
    // 0x1ab43c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1AB438u, 0x1AB440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB440u;
label_1ab440:
    // 0x1ab440: 0x8e8206e0  lw          $v0, 0x6E0($s4)
    ctx->pc = 0x1ab440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1760)));
label_1ab444:
    // 0x1ab444: 0x268406f0  addiu       $a0, $s4, 0x6F0
    ctx->pc = 0x1ab444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
label_1ab448:
    // 0x1ab448: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ab44c:
    // 0x1ab44c: 0xc069afc  jal         func_1A6BF0
label_1ab450:
    if (ctx->pc == 0x1AB450u) {
        ctx->pc = 0x1AB450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB44Cu;
        // 0x1ab450: 0xae8206e0  sw          $v0, 0x6E0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB454u;
        goto label_1ab454;
    }
    ctx->pc = 0x1AB44Cu;
    SET_GPR_U32(ctx, 31, 0x1AB454u);
    ctx->pc = 0x1AB450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB44Cu;
    // 0x1ab450: 0xae8206e0  sw          $v0, 0x6E0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1760), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1AB44Cu, 0x1AB454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB454u;
label_1ab454:
    // 0x1ab454: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_1ab458:
    if (ctx->pc == 0x1AB458u) {
        ctx->pc = 0x1AB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB454u;
        // 0x1ab458: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB45Cu;
        goto label_1ab45c;
    }
    ctx->pc = 0x1AB454u;
    {
        const bool branch_taken_0x1ab454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB454u;
        // 0x1ab458: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab454) {
            ctx->pc = 0x1AB684u;
            goto label_1ab684;
        }
    }
    ctx->pc = 0x1AB45Cu;
label_1ab45c:
    // 0x1ab45c: 0xc069ae8  jal         func_1A6BA0
label_1ab460:
    if (ctx->pc == 0x1AB460u) {
        ctx->pc = 0x1AB464u;
        goto label_1ab464;
    }
    ctx->pc = 0x1AB45Cu;
    SET_GPR_U32(ctx, 31, 0x1AB464u);
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AB45Cu, 0x1AB464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB464u;
label_1ab464:
    // 0x1ab464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab468:
    // 0x1ab468: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ab468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ab46c:
    // 0x1ab46c: 0xa28206d9  sb          $v0, 0x6D9($s4)
    ctx->pc = 0x1ab46cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1753), (uint8_t)GPR_U32(ctx, 2));
label_1ab470:
    // 0x1ab470: 0xc063e08  jal         func_18F820
label_1ab474:
    if (ctx->pc == 0x1AB474u) {
        ctx->pc = 0x1AB474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB470u;
        // 0x1ab474: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB478u;
        goto label_1ab478;
    }
    ctx->pc = 0x1AB470u;
    SET_GPR_U32(ctx, 31, 0x1AB478u);
    ctx->pc = 0x1AB474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB470u;
    // 0x1ab474: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AB470u, 0x1AB478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB478u;
label_1ab478:
    // 0x1ab478: 0x10000082  b           . + 4 + (0x82 << 2)
label_1ab47c:
    if (ctx->pc == 0x1AB47Cu) {
        ctx->pc = 0x1AB480u;
        goto label_1ab480;
    }
    ctx->pc = 0x1AB478u;
    {
        const bool branch_taken_0x1ab478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab478) {
            ctx->pc = 0x1AB684u;
            goto label_1ab684;
        }
    }
    ctx->pc = 0x1AB480u;
label_1ab480:
    // 0x1ab480: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1ab480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1ab484:
    // 0x1ab484: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1ab484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_1ab488:
    // 0x1ab488: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ab48c:
    if (ctx->pc == 0x1AB48Cu) {
        ctx->pc = 0x1AB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB488u;
        // 0x1ab48c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB490u;
        goto label_1ab490;
    }
    ctx->pc = 0x1AB488u;
    {
        const bool branch_taken_0x1ab488 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB488u;
        // 0x1ab48c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab488) {
            ctx->pc = 0x1AB498u;
            goto label_1ab498;
        }
    }
    ctx->pc = 0x1AB490u;
label_1ab490:
    // 0x1ab490: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ab494:
    if (ctx->pc == 0x1AB494u) {
        ctx->pc = 0x1AB494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB490u;
        // 0x1ab494: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB498u;
        goto label_1ab498;
    }
    ctx->pc = 0x1AB490u;
    {
        const bool branch_taken_0x1ab490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB490u;
        // 0x1ab494: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab490) {
            ctx->pc = 0x1AB4B0u;
            goto label_1ab4b0;
        }
    }
    ctx->pc = 0x1AB498u;
label_1ab498:
    // 0x1ab498: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ab498u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ab49c:
    // 0x1ab49c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ab49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ab4a0:
    // 0x1ab4a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ab4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ab4a4:
    // 0x1ab4a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ab4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ab4a8:
    // 0x1ab4a8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ab4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ab4ac:
    // 0x1ab4ac: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1ab4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1ab4b0:
    // 0x1ab4b0: 0xc055c40  jal         func_157100
label_1ab4b4:
    if (ctx->pc == 0x1AB4B4u) {
        ctx->pc = 0x1AB4B8u;
        goto label_1ab4b8;
    }
    ctx->pc = 0x1AB4B0u;
    SET_GPR_U32(ctx, 31, 0x1AB4B8u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1AB4B0u, 0x1AB4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB4B8u;
label_1ab4b8:
    // 0x1ab4b8: 0x8e8306e0  lw          $v1, 0x6E0($s4)
    ctx->pc = 0x1ab4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1760)));
label_1ab4bc:
    // 0x1ab4bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ab4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ab4c0:
    // 0x1ab4c0: 0x1c600070  bgtz        $v1, . + 4 + (0x70 << 2)
label_1ab4c4:
    if (ctx->pc == 0x1AB4C4u) {
        ctx->pc = 0x1AB4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB4C0u;
        // 0x1ab4c4: 0xae8306e0  sw          $v1, 0x6E0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1760), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB4C8u;
        goto label_1ab4c8;
    }
    ctx->pc = 0x1AB4C0u;
    {
        const bool branch_taken_0x1ab4c0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1AB4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB4C0u;
        // 0x1ab4c4: 0xae8306e0  sw          $v1, 0x6E0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1760), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab4c0) {
            ctx->pc = 0x1AB684u;
            goto label_1ab684;
        }
    }
    ctx->pc = 0x1AB4C8u;
label_1ab4c8:
    // 0x1ab4c8: 0x8e8206c8  lw          $v0, 0x6C8($s4)
    ctx->pc = 0x1ab4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1736)));
label_1ab4cc:
    // 0x1ab4cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ab4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ab4d0:
    // 0x1ab4d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ab4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ab4d4:
    // 0x1ab4d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ab4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1ab4d8:
    // 0x1ab4d8: 0xc063e08  jal         func_18F820
label_1ab4dc:
    if (ctx->pc == 0x1AB4DCu) {
        ctx->pc = 0x1AB4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB4D8u;
        // 0x1ab4dc: 0xae8206cc  sw          $v0, 0x6CC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB4E0u;
        goto label_1ab4e0;
    }
    ctx->pc = 0x1AB4D8u;
    SET_GPR_U32(ctx, 31, 0x1AB4E0u);
    ctx->pc = 0x1AB4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB4D8u;
    // 0x1ab4dc: 0xae8206cc  sw          $v0, 0x6CC($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AB4D8u, 0x1AB4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB4E0u;
label_1ab4e0:
    // 0x1ab4e0: 0x10000068  b           . + 4 + (0x68 << 2)
label_1ab4e4:
    if (ctx->pc == 0x1AB4E4u) {
        ctx->pc = 0x1AB4E8u;
        goto label_1ab4e8;
    }
    ctx->pc = 0x1AB4E0u;
    {
        const bool branch_taken_0x1ab4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab4e0) {
            ctx->pc = 0x1AB684u;
            goto label_1ab684;
        }
    }
    ctx->pc = 0x1AB4E8u;
label_1ab4e8:
    // 0x1ab4e8: 0xa28006d8  sb          $zero, 0x6D8($s4)
    ctx->pc = 0x1ab4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1752), (uint8_t)GPR_U32(ctx, 0));
label_1ab4ec:
    // 0x1ab4ec: 0xa28006d9  sb          $zero, 0x6D9($s4)
    ctx->pc = 0x1ab4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1753), (uint8_t)GPR_U32(ctx, 0));
label_1ab4f0:
    // 0x1ab4f0: 0x8e820800  lw          $v0, 0x800($s4)
    ctx->pc = 0x1ab4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2048)));
label_1ab4f4:
    // 0x1ab4f4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1ab4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ab4f8:
    // 0x1ab4f8: 0x8e8206ec  lw          $v0, 0x6EC($s4)
    ctx->pc = 0x1ab4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1772)));
label_1ab4fc:
    // 0x1ab4fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1ab500:
    if (ctx->pc == 0x1AB500u) {
        ctx->pc = 0x1AB504u;
        goto label_1ab504;
    }
    ctx->pc = 0x1AB4FCu;
    {
        const bool branch_taken_0x1ab4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab4fc) {
            ctx->pc = 0x1AB508u;
            goto label_1ab508;
        }
    }
    ctx->pc = 0x1AB504u;
label_1ab504:
    // 0x1ab504: 0xac400320  sw          $zero, 0x320($v0)
    ctx->pc = 0x1ab504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 800), GPR_U32(ctx, 0));
label_1ab508:
    // 0x1ab508: 0xae800700  sw          $zero, 0x700($s4)
    ctx->pc = 0x1ab508u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1792), GPR_U32(ctx, 0));
label_1ab50c:
    // 0x1ab50c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ab50cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ab510:
    // 0x1ab510: 0xae8006f8  sw          $zero, 0x6F8($s4)
    ctx->pc = 0x1ab510u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1784), GPR_U32(ctx, 0));
label_1ab514:
    // 0x1ab514: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ab514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ab518:
    // 0x1ab518: 0xae8006f4  sw          $zero, 0x6F4($s4)
    ctx->pc = 0x1ab518u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1780), GPR_U32(ctx, 0));
label_1ab51c:
    // 0x1ab51c: 0x24a50918  addiu       $a1, $a1, 0x918
    ctx->pc = 0x1ab51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2328));
label_1ab520:
    // 0x1ab520: 0xae8206fc  sw          $v0, 0x6FC($s4)
    ctx->pc = 0x1ab520u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1788), GPR_U32(ctx, 2));
label_1ab524:
    // 0x1ab524: 0xa2800708  sb          $zero, 0x708($s4)
    ctx->pc = 0x1ab524u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1800), (uint8_t)GPR_U32(ctx, 0));
label_1ab528:
    // 0x1ab528: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1ab528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1ab52c:
    // 0x1ab52c: 0x8f86810c  lw          $a2, -0x7EF4($gp)
    ctx->pc = 0x1ab52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934796)));
label_1ab530:
    // 0x1ab530: 0xc06cf34  jal         func_1B3CD0
label_1ab534:
    if (ctx->pc == 0x1AB534u) {
        ctx->pc = 0x1AB534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB530u;
        // 0x1ab534: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB538u;
        goto label_1ab538;
    }
    ctx->pc = 0x1AB530u;
    SET_GPR_U32(ctx, 31, 0x1AB538u);
    ctx->pc = 0x1AB534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB530u;
    // 0x1ab534: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AB530u, 0x1AB538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB538u;
label_1ab538:
    // 0x1ab538: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab53c:
    // 0x1ab53c: 0xc069ac8  jal         func_1A6B20
label_1ab540:
    if (ctx->pc == 0x1AB540u) {
        ctx->pc = 0x1AB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB53Cu;
        // 0x1ab540: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB544u;
        goto label_1ab544;
    }
    ctx->pc = 0x1AB53Cu;
    SET_GPR_U32(ctx, 31, 0x1AB544u);
    ctx->pc = 0x1AB540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB53Cu;
    // 0x1ab540: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AB53Cu, 0x1AB544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB544u;
label_1ab544:
    // 0x1ab544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab548:
    // 0x1ab548: 0xa2820709  sb          $v0, 0x709($s4)
    ctx->pc = 0x1ab548u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1801), (uint8_t)GPR_U32(ctx, 2));
label_1ab54c:
    // 0x1ab54c: 0x8e830670  lw          $v1, 0x670($s4)
    ctx->pc = 0x1ab54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_1ab550:
    // 0x1ab550: 0x8e82069c  lw          $v0, 0x69C($s4)
    ctx->pc = 0x1ab550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
label_1ab554:
    // 0x1ab554: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1ab558:
    if (ctx->pc == 0x1AB558u) {
        ctx->pc = 0x1AB558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB554u;
        // 0x1ab558: 0x43802a  slt         $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB55Cu;
        goto label_1ab55c;
    }
    ctx->pc = 0x1AB554u;
    {
        const bool branch_taken_0x1ab554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AB558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB554u;
        // 0x1ab558: 0x43802a  slt         $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab554) {
            ctx->pc = 0x1AB590u;
            goto label_1ab590;
        }
    }
    ctx->pc = 0x1AB55Cu;
label_1ab55c:
    // 0x1ab55c: 0xc062114  jal         func_188450
label_1ab560:
    if (ctx->pc == 0x1AB560u) {
        ctx->pc = 0x1AB560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB55Cu;
        // 0x1ab560: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB564u;
        goto label_1ab564;
    }
    ctx->pc = 0x1AB55Cu;
    SET_GPR_U32(ctx, 31, 0x1AB564u);
    ctx->pc = 0x1AB560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB55Cu;
    // 0x1ab560: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AB55Cu, 0x1AB564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB564u;
label_1ab564:
    // 0x1ab564: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab568:
    // 0x1ab568: 0xc0620fc  jal         func_1883F0
label_1ab56c:
    if (ctx->pc == 0x1AB56Cu) {
        ctx->pc = 0x1AB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB568u;
        // 0x1ab56c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB570u;
        goto label_1ab570;
    }
    ctx->pc = 0x1AB568u;
    SET_GPR_U32(ctx, 31, 0x1AB570u);
    ctx->pc = 0x1AB56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB568u;
    // 0x1ab56c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AB568u, 0x1AB570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB570u;
label_1ab570:
    // 0x1ab570: 0x8e8206e8  lw          $v0, 0x6E8($s4)
    ctx->pc = 0x1ab570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1768)));
label_1ab574:
    // 0x1ab574: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1ab578:
    if (ctx->pc == 0x1AB578u) {
        ctx->pc = 0x1AB57Cu;
        goto label_1ab57c;
    }
    ctx->pc = 0x1AB574u;
    {
        const bool branch_taken_0x1ab574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab574) {
            ctx->pc = 0x1AB5D8u;
            goto label_1ab5d8;
        }
    }
    ctx->pc = 0x1AB57Cu;
label_1ab57c:
    // 0x1ab57c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1ab57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ab580:
    // 0x1ab580: 0xc064fb8  jal         func_193EE0
label_1ab584:
    if (ctx->pc == 0x1AB584u) {
        ctx->pc = 0x1AB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB580u;
        // 0x1ab584: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB588u;
        goto label_1ab588;
    }
    ctx->pc = 0x1AB580u;
    SET_GPR_U32(ctx, 31, 0x1AB588u);
    ctx->pc = 0x1AB584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB580u;
    // 0x1ab584: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1AB580u, 0x1AB588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB588u;
label_1ab588:
    // 0x1ab588: 0x10000014  b           . + 4 + (0x14 << 2)
label_1ab58c:
    if (ctx->pc == 0x1AB58Cu) {
        ctx->pc = 0x1AB58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB588u;
        // 0x1ab58c: 0x8e8406f0  lw          $a0, 0x6F0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB590u;
        goto label_1ab590;
    }
    ctx->pc = 0x1AB588u;
    {
        const bool branch_taken_0x1ab588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB588u;
        // 0x1ab58c: 0x8e8406f0  lw          $a0, 0x6F0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab588) {
            ctx->pc = 0x1AB5DCu;
            goto label_1ab5dc;
        }
    }
    ctx->pc = 0x1AB590u;
label_1ab590:
    // 0x1ab590: 0xc062114  jal         func_188450
label_1ab594:
    if (ctx->pc == 0x1AB594u) {
        ctx->pc = 0x1AB594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB590u;
        // 0x1ab594: 0x2404004d  addiu       $a0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB598u;
        goto label_1ab598;
    }
    ctx->pc = 0x1AB590u;
    SET_GPR_U32(ctx, 31, 0x1AB598u);
    ctx->pc = 0x1AB594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB590u;
    // 0x1ab594: 0x2404004d  addiu       $a0, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AB590u, 0x1AB598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB598u;
label_1ab598:
    // 0x1ab598: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab59c:
    // 0x1ab59c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ab59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab5a0:
    // 0x1ab5a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ab5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ab5a4:
    // 0x1ab5a4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ab5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ab5a8:
    // 0x1ab5a8: 0xc0620fc  jal         func_1883F0
label_1ab5ac:
    if (ctx->pc == 0x1AB5ACu) {
        ctx->pc = 0x1AB5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5A8u;
        // 0x1ab5ac: 0x50300a  movz        $a2, $v0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB5B0u;
        goto label_1ab5b0;
    }
    ctx->pc = 0x1AB5A8u;
    SET_GPR_U32(ctx, 31, 0x1AB5B0u);
    ctx->pc = 0x1AB5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB5A8u;
    // 0x1ab5ac: 0x50300a  movz        $a2, $v0, $s0 (Delay Slot)
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AB5A8u, 0x1AB5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB5B0u;
label_1ab5b0:
    // 0x1ab5b0: 0x8e8506e8  lw          $a1, 0x6E8($s4)
    ctx->pc = 0x1ab5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1768)));
label_1ab5b4:
    // 0x1ab5b4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1ab5b8:
    if (ctx->pc == 0x1AB5B8u) {
        ctx->pc = 0x1AB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5B4u;
        // 0x1ab5b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB5BCu;
        goto label_1ab5bc;
    }
    ctx->pc = 0x1AB5B4u;
    {
        const bool branch_taken_0x1ab5b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5B4u;
        // 0x1ab5b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5b4) {
            ctx->pc = 0x1AB5D8u;
            goto label_1ab5d8;
        }
    }
    ctx->pc = 0x1AB5BCu;
label_1ab5bc:
    // 0x1ab5bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab5c0:
    // 0x1ab5c0: 0x50180a  movz        $v1, $v0, $s0
    ctx->pc = 0x1ab5c0u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_1ab5c4:
    // 0x1ab5c4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ab5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ab5c8:
    // 0x1ab5c8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ab5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1ab5cc:
    // 0x1ab5cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ab5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ab5d0:
    // 0x1ab5d0: 0xc064fb8  jal         func_193EE0
label_1ab5d4:
    if (ctx->pc == 0x1AB5D4u) {
        ctx->pc = 0x1AB5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5D0u;
        // 0x1ab5d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB5D8u;
        goto label_1ab5d8;
    }
    ctx->pc = 0x1AB5D0u;
    SET_GPR_U32(ctx, 31, 0x1AB5D8u);
    ctx->pc = 0x1AB5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB5D0u;
    // 0x1ab5d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1AB5D0u, 0x1AB5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB5D8u;
label_1ab5d8:
    // 0x1ab5d8: 0x8e8406f0  lw          $a0, 0x6F0($s4)
    ctx->pc = 0x1ab5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1776)));
label_1ab5dc:
    // 0x1ab5dc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ab5e0:
    if (ctx->pc == 0x1AB5E0u) {
        ctx->pc = 0x1AB5E4u;
        goto label_1ab5e4;
    }
    ctx->pc = 0x1AB5DCu;
    {
        const bool branch_taken_0x1ab5dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab5dc) {
            ctx->pc = 0x1AB5F8u;
            goto label_1ab5f8;
        }
    }
    ctx->pc = 0x1AB5E4u;
label_1ab5e4:
    // 0x1ab5e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ab5e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ab5e8:
    // 0x1ab5e8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ab5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ab5ec:
    // 0x1ab5ec: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1ab5ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1ab5f0:
    // 0x1ab5f0: 0x320f809  jalr        $t9
label_1ab5f4:
    if (ctx->pc == 0x1AB5F4u) {
        ctx->pc = 0x1AB5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5F0u;
        // 0x1ab5f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB5F8u;
        goto label_1ab5f8;
    }
    ctx->pc = 0x1AB5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AB5F8u);
        ctx->pc = 0x1AB5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5F0u;
        // 0x1ab5f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB5F0u, 0x1AB5F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB5F8u;
label_1ab5f8:
    // 0x1ab5f8: 0xc062d50  jal         func_18B540
label_1ab5fc:
    if (ctx->pc == 0x1AB5FCu) {
        ctx->pc = 0x1AB600u;
        goto label_1ab600;
    }
    ctx->pc = 0x1AB5F8u;
    SET_GPR_U32(ctx, 31, 0x1AB600u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AB5F8u, 0x1AB600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB600u;
label_1ab600:
    // 0x1ab600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ab600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab604:
    // 0x1ab604: 0x240500c5  addiu       $a1, $zero, 0xC5
    ctx->pc = 0x1ab604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
label_1ab608:
    // 0x1ab608: 0xc062b5c  jal         func_18AD70
label_1ab60c:
    if (ctx->pc == 0x1AB60Cu) {
        ctx->pc = 0x1AB60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB608u;
        // 0x1ab60c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB610u;
        goto label_1ab610;
    }
    ctx->pc = 0x1AB608u;
    SET_GPR_U32(ctx, 31, 0x1AB610u);
    ctx->pc = 0x1AB60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB608u;
    // 0x1ab60c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AB608u, 0x1AB610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB610u;
label_1ab610:
    // 0x1ab610: 0xc062d50  jal         func_18B540
label_1ab614:
    if (ctx->pc == 0x1AB614u) {
        ctx->pc = 0x1AB618u;
        goto label_1ab618;
    }
    ctx->pc = 0x1AB610u;
    SET_GPR_U32(ctx, 31, 0x1AB618u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AB610u, 0x1AB618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB618u;
label_1ab618:
    // 0x1ab618: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ab618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab61c:
    // 0x1ab61c: 0x240500c3  addiu       $a1, $zero, 0xC3
    ctx->pc = 0x1ab61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
label_1ab620:
    // 0x1ab620: 0xc062b5c  jal         func_18AD70
label_1ab624:
    if (ctx->pc == 0x1AB624u) {
        ctx->pc = 0x1AB624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB620u;
        // 0x1ab624: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB628u;
        goto label_1ab628;
    }
    ctx->pc = 0x1AB620u;
    SET_GPR_U32(ctx, 31, 0x1AB628u);
    ctx->pc = 0x1AB624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB620u;
    // 0x1ab624: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AB620u, 0x1AB628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB628u;
label_1ab628:
    // 0x1ab628: 0xc063e14  jal         func_18F850
label_1ab62c:
    if (ctx->pc == 0x1AB62Cu) {
        ctx->pc = 0x1AB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB628u;
        // 0x1ab62c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB630u;
        goto label_1ab630;
    }
    ctx->pc = 0x1AB628u;
    SET_GPR_U32(ctx, 31, 0x1AB630u);
    ctx->pc = 0x1AB62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB628u;
    // 0x1ab62c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AB628u, 0x1AB630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB630u;
label_1ab630:
    // 0x1ab630: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab634:
    // 0x1ab634: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ab634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1ab638:
    // 0x1ab638: 0xae8307c4  sw          $v1, 0x7C4($s4)
    ctx->pc = 0x1ab638u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1988), GPR_U32(ctx, 3));
label_1ab63c:
    // 0x1ab63c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ab63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ab640:
    // 0x1ab640: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ab640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab644:
    // 0x1ab644: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ab644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ab648:
    // 0x1ab648: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ab64c:
    // 0x1ab64c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ab64cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ab650:
    // 0x1ab650: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ab650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ab654:
    // 0x1ab654: 0x0  nop
    ctx->pc = 0x1ab654u;
    // NOP
label_1ab658:
    // 0x1ab658: 0xae8207c8  sw          $v0, 0x7C8($s4)
    ctx->pc = 0x1ab658u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1992), GPR_U32(ctx, 2));
label_1ab65c:
    // 0x1ab65c: 0x8f8583a0  lw          $a1, -0x7C60($gp)
    ctx->pc = 0x1ab65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1ab660:
    // 0x1ab660: 0xc054660  jal         func_151980
label_1ab664:
    if (ctx->pc == 0x1AB664u) {
        ctx->pc = 0x1AB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB660u;
        // 0x1ab664: 0x268407b0  addiu       $a0, $s4, 0x7B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB668u;
        goto label_1ab668;
    }
    ctx->pc = 0x1AB660u;
    SET_GPR_U32(ctx, 31, 0x1AB668u);
    ctx->pc = 0x1AB664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB660u;
    // 0x1ab664: 0x268407b0  addiu       $a0, $s4, 0x7B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1AB660u, 0x1AB668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB668u;
label_1ab668:
    // 0x1ab668: 0xc069ae8  jal         func_1A6BA0
label_1ab66c:
    if (ctx->pc == 0x1AB66Cu) {
        ctx->pc = 0x1AB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB668u;
        // 0x1ab66c: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB670u;
        goto label_1ab670;
    }
    ctx->pc = 0x1AB668u;
    SET_GPR_U32(ctx, 31, 0x1AB670u);
    ctx->pc = 0x1AB66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB668u;
    // 0x1ab66c: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AB668u, 0x1AB670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB670u;
label_1ab670:
    // 0x1ab670: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ab670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ab674:
    // 0x1ab674: 0xc063e08  jal         func_18F820
label_1ab678:
    if (ctx->pc == 0x1AB678u) {
        ctx->pc = 0x1AB678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB674u;
        // 0x1ab678: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB67Cu;
        goto label_1ab67c;
    }
    ctx->pc = 0x1AB674u;
    SET_GPR_U32(ctx, 31, 0x1AB67Cu);
    ctx->pc = 0x1AB678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB674u;
    // 0x1ab678: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AB674u, 0x1AB67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB67Cu;
label_1ab67c:
    // 0x1ab67c: 0x1000fe47  b           . + 4 + (-0x1B9 << 2)
label_1ab680:
    if (ctx->pc == 0x1AB680u) {
        ctx->pc = 0x1AB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB67Cu;
        // 0x1ab680: 0xa28006d8  sb          $zero, 0x6D8($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1752), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB684u;
        goto label_1ab684;
    }
    ctx->pc = 0x1AB67Cu;
    {
        const bool branch_taken_0x1ab67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB67Cu;
        // 0x1ab680: 0xa28006d8  sb          $zero, 0x6D8($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1752), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab67c) {
            ctx->pc = 0x1AAF9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aaf9c;
        }
    }
    ctx->pc = 0x1AB684u;
label_1ab684:
    // 0x1ab684: 0x928306d8  lbu         $v1, 0x6D8($s4)
    ctx->pc = 0x1ab684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1752)));
label_1ab688:
    // 0x1ab688: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_1ab68c:
    if (ctx->pc == 0x1AB68Cu) {
        ctx->pc = 0x1AB690u;
        goto label_1ab690;
    }
    ctx->pc = 0x1AB688u;
    {
        const bool branch_taken_0x1ab688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab688) {
            ctx->pc = 0x1AB74Cu;
            goto label_1ab74c;
        }
    }
    ctx->pc = 0x1AB690u;
label_1ab690:
    // 0x1ab690: 0x8e8306dc  lw          $v1, 0x6DC($s4)
    ctx->pc = 0x1ab690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1756)));
label_1ab694:
    // 0x1ab694: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ab694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ab698:
    // 0x1ab698: 0xae8306dc  sw          $v1, 0x6DC($s4)
    ctx->pc = 0x1ab698u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1756), GPR_U32(ctx, 3));
label_1ab69c:
    // 0x1ab69c: 0x928306da  lbu         $v1, 0x6DA($s4)
    ctx->pc = 0x1ab69cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1754)));
label_1ab6a0:
    // 0x1ab6a0: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_1ab6a4:
    if (ctx->pc == 0x1AB6A4u) {
        ctx->pc = 0x1AB6A8u;
        goto label_1ab6a8;
    }
    ctx->pc = 0x1AB6A0u;
    {
        const bool branch_taken_0x1ab6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab6a0) {
            ctx->pc = 0x1AB704u;
            goto label_1ab704;
        }
    }
    ctx->pc = 0x1AB6A8u;
label_1ab6a8:
    // 0x1ab6a8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ab6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab6ac:
    // 0x1ab6ac: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1ab6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_1ab6b0:
    // 0x1ab6b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ab6b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ab6b4:
    // 0x1ab6b4: 0x8e8406dc  lw          $a0, 0x6DC($s4)
    ctx->pc = 0x1ab6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1756)));
label_1ab6b8:
    // 0x1ab6b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ab6b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ab6bc:
    // 0x1ab6bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab6bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ab6c0:
    // 0x1ab6c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ab6c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ab6c4:
    // 0x1ab6c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ab6c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1ab6c8:
    // 0x1ab6c8: 0x0  nop
    ctx->pc = 0x1ab6c8u;
    // NOP
label_1ab6cc:
    // 0x1ab6cc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1ab6ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ab6d0:
    // 0x1ab6d0: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_1ab6d4:
    if (ctx->pc == 0x1AB6D4u) {
        ctx->pc = 0x1AB6D8u;
        goto label_1ab6d8;
    }
    ctx->pc = 0x1AB6D0u;
    {
        const bool branch_taken_0x1ab6d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab6d0) {
            ctx->pc = 0x1AB704u;
            goto label_1ab704;
        }
    }
    ctx->pc = 0x1AB6D8u;
label_1ab6d8:
    // 0x1ab6d8: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1ab6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1ab6dc:
    // 0x1ab6dc: 0x9063282c  lbu         $v1, 0x282C($v1)
    ctx->pc = 0x1ab6dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10284)));
label_1ab6e0:
    // 0x1ab6e0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_1ab6e4:
    if (ctx->pc == 0x1AB6E4u) {
        ctx->pc = 0x1AB6E8u;
        goto label_1ab6e8;
    }
    ctx->pc = 0x1AB6E0u;
    {
        const bool branch_taken_0x1ab6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab6e0) {
            ctx->pc = 0x1AB704u;
            goto label_1ab704;
        }
    }
    ctx->pc = 0x1AB6E8u;
label_1ab6e8:
    // 0x1ab6e8: 0x8e8406ec  lw          $a0, 0x6EC($s4)
    ctx->pc = 0x1ab6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1772)));
label_1ab6ec:
    // 0x1ab6ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1ab6f0:
    if (ctx->pc == 0x1AB6F0u) {
        ctx->pc = 0x1AB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6ECu;
        // 0x1ab6f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB6F4u;
        goto label_1ab6f4;
    }
    ctx->pc = 0x1AB6ECu;
    {
        const bool branch_taken_0x1ab6ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6ECu;
        // 0x1ab6f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6ec) {
            ctx->pc = 0x1AB700u;
            goto label_1ab700;
        }
    }
    ctx->pc = 0x1AB6F4u;
label_1ab6f4:
    // 0x1ab6f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab6f8:
    // 0x1ab6f8: 0xac830320  sw          $v1, 0x320($a0)
    ctx->pc = 0x1ab6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 3));
label_1ab6fc:
    // 0x1ab6fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab700:
    // 0x1ab700: 0xa28306da  sb          $v1, 0x6DA($s4)
    ctx->pc = 0x1ab700u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1754), (uint8_t)GPR_U32(ctx, 3));
label_1ab704:
    // 0x1ab704: 0x8e8306dc  lw          $v1, 0x6DC($s4)
    ctx->pc = 0x1ab704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1756)));
label_1ab708:
    // 0x1ab708: 0x1c600010  bgtz        $v1, . + 4 + (0x10 << 2)
label_1ab70c:
    if (ctx->pc == 0x1AB70Cu) {
        ctx->pc = 0x1AB710u;
        goto label_1ab710;
    }
    ctx->pc = 0x1AB708u;
    {
        const bool branch_taken_0x1ab708 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1ab708) {
            ctx->pc = 0x1AB74Cu;
            goto label_1ab74c;
        }
    }
    ctx->pc = 0x1AB710u;
label_1ab710:
    // 0x1ab710: 0xae8006dc  sw          $zero, 0x6DC($s4)
    ctx->pc = 0x1ab710u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1756), GPR_U32(ctx, 0));
label_1ab714:
    // 0x1ab714: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1ab714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1ab718:
    // 0x1ab718: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1ab718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
label_1ab71c:
    // 0x1ab71c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ab720:
    if (ctx->pc == 0x1AB720u) {
        ctx->pc = 0x1AB720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB71Cu;
        // 0x1ab720: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB724u;
        goto label_1ab724;
    }
    ctx->pc = 0x1AB71Cu;
    {
        const bool branch_taken_0x1ab71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB71Cu;
        // 0x1ab720: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab71c) {
            ctx->pc = 0x1AB744u;
            goto label_1ab744;
        }
    }
    ctx->pc = 0x1AB724u;
label_1ab724:
    // 0x1ab724: 0x8f8283a0  lw          $v0, -0x7C60($gp)
    ctx->pc = 0x1ab724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1ab728:
    // 0x1ab728: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab72c:
    // 0x1ab72c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ab72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ab730:
    // 0x1ab730: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ab730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1ab734:
    // 0x1ab734: 0xc063e08  jal         func_18F820
label_1ab738:
    if (ctx->pc == 0x1AB738u) {
        ctx->pc = 0x1AB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB734u;
        // 0x1ab738: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB73Cu;
        goto label_1ab73c;
    }
    ctx->pc = 0x1AB734u;
    SET_GPR_U32(ctx, 31, 0x1AB73Cu);
    ctx->pc = 0x1AB738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB734u;
    // 0x1ab738: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AB734u, 0x1AB73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB73Cu;
label_1ab73c:
    // 0x1ab73c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ab740:
    if (ctx->pc == 0x1AB740u) {
        ctx->pc = 0x1AB740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB73Cu;
        // 0x1ab740: 0x928306d9  lbu         $v1, 0x6D9($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1753)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB744u;
        goto label_1ab744;
    }
    ctx->pc = 0x1AB73Cu;
    {
        const bool branch_taken_0x1ab73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB73Cu;
        // 0x1ab740: 0x928306d9  lbu         $v1, 0x6D9($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1753)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab73c) {
            ctx->pc = 0x1AB750u;
            goto label_1ab750;
        }
    }
    ctx->pc = 0x1AB744u;
label_1ab744:
    // 0x1ab744: 0xc063e08  jal         func_18F820
label_1ab748:
    if (ctx->pc == 0x1AB748u) {
        ctx->pc = 0x1AB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB744u;
        // 0x1ab748: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB74Cu;
        goto label_1ab74c;
    }
    ctx->pc = 0x1AB744u;
    SET_GPR_U32(ctx, 31, 0x1AB74Cu);
    ctx->pc = 0x1AB748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB744u;
    // 0x1ab748: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AB744u, 0x1AB74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB74Cu;
label_1ab74c:
    // 0x1ab74c: 0x928306d9  lbu         $v1, 0x6D9($s4)
    ctx->pc = 0x1ab74cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1753)));
label_1ab750:
    // 0x1ab750: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1ab754:
    if (ctx->pc == 0x1AB754u) {
        ctx->pc = 0x1AB758u;
        goto label_1ab758;
    }
    ctx->pc = 0x1AB750u;
    {
        const bool branch_taken_0x1ab750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab750) {
            ctx->pc = 0x1AB784u;
            goto label_1ab784;
        }
    }
    ctx->pc = 0x1AB758u;
label_1ab758:
    // 0x1ab758: 0x8e830800  lw          $v1, 0x800($s4)
    ctx->pc = 0x1ab758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2048)));
label_1ab75c:
    // 0x1ab75c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ab75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab760:
    // 0x1ab760: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ab760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1ab764:
    // 0x1ab764: 0x8e8406dc  lw          $a0, 0x6DC($s4)
    ctx->pc = 0x1ab764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1756)));
label_1ab768:
    // 0x1ab768: 0x8e85069c  lw          $a1, 0x69C($s4)
    ctx->pc = 0x1ab768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
label_1ab76c:
    // 0x1ab76c: 0x8e860670  lw          $a2, 0x670($s4)
    ctx->pc = 0x1ab76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_1ab770:
    // 0x1ab770: 0x8e830800  lw          $v1, 0x800($s4)
    ctx->pc = 0x1ab770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2048)));
label_1ab774:
    // 0x1ab774: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x1ab774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_1ab778:
    // 0x1ab778: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x1ab778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
label_1ab77c:
    // 0x1ab77c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ab780:
    if (ctx->pc == 0x1AB780u) {
        ctx->pc = 0x1AB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB77Cu;
        // 0x1ab780: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB784u;
        goto label_1ab784;
    }
    ctx->pc = 0x1AB77Cu;
    {
        const bool branch_taken_0x1ab77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB77Cu;
        // 0x1ab780: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab77c) {
            ctx->pc = 0x1AB78Cu;
            goto label_1ab78c;
        }
    }
    ctx->pc = 0x1AB784u;
label_1ab784:
    // 0x1ab784: 0x8e830800  lw          $v1, 0x800($s4)
    ctx->pc = 0x1ab784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2048)));
label_1ab788:
    // 0x1ab788: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ab788u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ab78c:
    // 0x1ab78c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ab78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ab790:
    // 0x1ab790: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ab790u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ab794:
    // 0x1ab794: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ab794u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ab798:
    // 0x1ab798: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ab798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ab79c:
    // 0x1ab79c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ab79cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ab7a0:
    // 0x1ab7a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ab7a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab7a4:
    // 0x1ab7a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ab7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab7a8:
    // 0x1ab7a8: 0x3e00008  jr          $ra
label_1ab7ac:
    if (ctx->pc == 0x1AB7ACu) {
        ctx->pc = 0x1AB7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7A8u;
        // 0x1ab7ac: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB7B0u;
        goto label_fallthrough_0x1ab7a8;
    }
    ctx->pc = 0x1AB7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7A8u;
        // 0x1ab7ac: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ab7a8:
    ctx->pc = 0x1AB7B0u;
}
