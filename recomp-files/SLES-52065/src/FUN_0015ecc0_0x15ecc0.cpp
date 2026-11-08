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

// Function: FUN_0015ecc0
// Address: 0x15ecc0 - 0x15fb30
void FUN_0015ecc0_0x15ecc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015ecc0_0x15ecc0");
#endif

    switch (ctx->pc) {
        case 0x15ecc0u: goto label_15ecc0;
        case 0x15ecc4u: goto label_15ecc4;
        case 0x15ecc8u: goto label_15ecc8;
        case 0x15ecccu: goto label_15eccc;
        case 0x15ecd0u: goto label_15ecd0;
        case 0x15ecd4u: goto label_15ecd4;
        case 0x15ecd8u: goto label_15ecd8;
        case 0x15ecdcu: goto label_15ecdc;
        case 0x15ece0u: goto label_15ece0;
        case 0x15ece4u: goto label_15ece4;
        case 0x15ece8u: goto label_15ece8;
        case 0x15ececu: goto label_15ecec;
        case 0x15ecf0u: goto label_15ecf0;
        case 0x15ecf4u: goto label_15ecf4;
        case 0x15ecf8u: goto label_15ecf8;
        case 0x15ecfcu: goto label_15ecfc;
        case 0x15ed00u: goto label_15ed00;
        case 0x15ed04u: goto label_15ed04;
        case 0x15ed08u: goto label_15ed08;
        case 0x15ed0cu: goto label_15ed0c;
        case 0x15ed10u: goto label_15ed10;
        case 0x15ed14u: goto label_15ed14;
        case 0x15ed18u: goto label_15ed18;
        case 0x15ed1cu: goto label_15ed1c;
        case 0x15ed20u: goto label_15ed20;
        case 0x15ed24u: goto label_15ed24;
        case 0x15ed28u: goto label_15ed28;
        case 0x15ed2cu: goto label_15ed2c;
        case 0x15ed30u: goto label_15ed30;
        case 0x15ed34u: goto label_15ed34;
        case 0x15ed38u: goto label_15ed38;
        case 0x15ed3cu: goto label_15ed3c;
        case 0x15ed40u: goto label_15ed40;
        case 0x15ed44u: goto label_15ed44;
        case 0x15ed48u: goto label_15ed48;
        case 0x15ed4cu: goto label_15ed4c;
        case 0x15ed50u: goto label_15ed50;
        case 0x15ed54u: goto label_15ed54;
        case 0x15ed58u: goto label_15ed58;
        case 0x15ed5cu: goto label_15ed5c;
        case 0x15ed60u: goto label_15ed60;
        case 0x15ed64u: goto label_15ed64;
        case 0x15ed68u: goto label_15ed68;
        case 0x15ed6cu: goto label_15ed6c;
        case 0x15ed70u: goto label_15ed70;
        case 0x15ed74u: goto label_15ed74;
        case 0x15ed78u: goto label_15ed78;
        case 0x15ed7cu: goto label_15ed7c;
        case 0x15ed80u: goto label_15ed80;
        case 0x15ed84u: goto label_15ed84;
        case 0x15ed88u: goto label_15ed88;
        case 0x15ed8cu: goto label_15ed8c;
        case 0x15ed90u: goto label_15ed90;
        case 0x15ed94u: goto label_15ed94;
        case 0x15ed98u: goto label_15ed98;
        case 0x15ed9cu: goto label_15ed9c;
        case 0x15eda0u: goto label_15eda0;
        case 0x15eda4u: goto label_15eda4;
        case 0x15eda8u: goto label_15eda8;
        case 0x15edacu: goto label_15edac;
        case 0x15edb0u: goto label_15edb0;
        case 0x15edb4u: goto label_15edb4;
        case 0x15edb8u: goto label_15edb8;
        case 0x15edbcu: goto label_15edbc;
        case 0x15edc0u: goto label_15edc0;
        case 0x15edc4u: goto label_15edc4;
        case 0x15edc8u: goto label_15edc8;
        case 0x15edccu: goto label_15edcc;
        case 0x15edd0u: goto label_15edd0;
        case 0x15edd4u: goto label_15edd4;
        case 0x15edd8u: goto label_15edd8;
        case 0x15eddcu: goto label_15eddc;
        case 0x15ede0u: goto label_15ede0;
        case 0x15ede4u: goto label_15ede4;
        case 0x15ede8u: goto label_15ede8;
        case 0x15edecu: goto label_15edec;
        case 0x15edf0u: goto label_15edf0;
        case 0x15edf4u: goto label_15edf4;
        case 0x15edf8u: goto label_15edf8;
        case 0x15edfcu: goto label_15edfc;
        case 0x15ee00u: goto label_15ee00;
        case 0x15ee04u: goto label_15ee04;
        case 0x15ee08u: goto label_15ee08;
        case 0x15ee0cu: goto label_15ee0c;
        case 0x15ee10u: goto label_15ee10;
        case 0x15ee14u: goto label_15ee14;
        case 0x15ee18u: goto label_15ee18;
        case 0x15ee1cu: goto label_15ee1c;
        case 0x15ee20u: goto label_15ee20;
        case 0x15ee24u: goto label_15ee24;
        case 0x15ee28u: goto label_15ee28;
        case 0x15ee2cu: goto label_15ee2c;
        case 0x15ee30u: goto label_15ee30;
        case 0x15ee34u: goto label_15ee34;
        case 0x15ee38u: goto label_15ee38;
        case 0x15ee3cu: goto label_15ee3c;
        case 0x15ee40u: goto label_15ee40;
        case 0x15ee44u: goto label_15ee44;
        case 0x15ee48u: goto label_15ee48;
        case 0x15ee4cu: goto label_15ee4c;
        case 0x15ee50u: goto label_15ee50;
        case 0x15ee54u: goto label_15ee54;
        case 0x15ee58u: goto label_15ee58;
        case 0x15ee5cu: goto label_15ee5c;
        case 0x15ee60u: goto label_15ee60;
        case 0x15ee64u: goto label_15ee64;
        case 0x15ee68u: goto label_15ee68;
        case 0x15ee6cu: goto label_15ee6c;
        case 0x15ee70u: goto label_15ee70;
        case 0x15ee74u: goto label_15ee74;
        case 0x15ee78u: goto label_15ee78;
        case 0x15ee7cu: goto label_15ee7c;
        case 0x15ee80u: goto label_15ee80;
        case 0x15ee84u: goto label_15ee84;
        case 0x15ee88u: goto label_15ee88;
        case 0x15ee8cu: goto label_15ee8c;
        case 0x15ee90u: goto label_15ee90;
        case 0x15ee94u: goto label_15ee94;
        case 0x15ee98u: goto label_15ee98;
        case 0x15ee9cu: goto label_15ee9c;
        case 0x15eea0u: goto label_15eea0;
        case 0x15eea4u: goto label_15eea4;
        case 0x15eea8u: goto label_15eea8;
        case 0x15eeacu: goto label_15eeac;
        case 0x15eeb0u: goto label_15eeb0;
        case 0x15eeb4u: goto label_15eeb4;
        case 0x15eeb8u: goto label_15eeb8;
        case 0x15eebcu: goto label_15eebc;
        case 0x15eec0u: goto label_15eec0;
        case 0x15eec4u: goto label_15eec4;
        case 0x15eec8u: goto label_15eec8;
        case 0x15eeccu: goto label_15eecc;
        case 0x15eed0u: goto label_15eed0;
        case 0x15eed4u: goto label_15eed4;
        case 0x15eed8u: goto label_15eed8;
        case 0x15eedcu: goto label_15eedc;
        case 0x15eee0u: goto label_15eee0;
        case 0x15eee4u: goto label_15eee4;
        case 0x15eee8u: goto label_15eee8;
        case 0x15eeecu: goto label_15eeec;
        case 0x15eef0u: goto label_15eef0;
        case 0x15eef4u: goto label_15eef4;
        case 0x15eef8u: goto label_15eef8;
        case 0x15eefcu: goto label_15eefc;
        case 0x15ef00u: goto label_15ef00;
        case 0x15ef04u: goto label_15ef04;
        case 0x15ef08u: goto label_15ef08;
        case 0x15ef0cu: goto label_15ef0c;
        case 0x15ef10u: goto label_15ef10;
        case 0x15ef14u: goto label_15ef14;
        case 0x15ef18u: goto label_15ef18;
        case 0x15ef1cu: goto label_15ef1c;
        case 0x15ef20u: goto label_15ef20;
        case 0x15ef24u: goto label_15ef24;
        case 0x15ef28u: goto label_15ef28;
        case 0x15ef2cu: goto label_15ef2c;
        case 0x15ef30u: goto label_15ef30;
        case 0x15ef34u: goto label_15ef34;
        case 0x15ef38u: goto label_15ef38;
        case 0x15ef3cu: goto label_15ef3c;
        case 0x15ef40u: goto label_15ef40;
        case 0x15ef44u: goto label_15ef44;
        case 0x15ef48u: goto label_15ef48;
        case 0x15ef4cu: goto label_15ef4c;
        case 0x15ef50u: goto label_15ef50;
        case 0x15ef54u: goto label_15ef54;
        case 0x15ef58u: goto label_15ef58;
        case 0x15ef5cu: goto label_15ef5c;
        case 0x15ef60u: goto label_15ef60;
        case 0x15ef64u: goto label_15ef64;
        case 0x15ef68u: goto label_15ef68;
        case 0x15ef6cu: goto label_15ef6c;
        case 0x15ef70u: goto label_15ef70;
        case 0x15ef74u: goto label_15ef74;
        case 0x15ef78u: goto label_15ef78;
        case 0x15ef7cu: goto label_15ef7c;
        case 0x15ef80u: goto label_15ef80;
        case 0x15ef84u: goto label_15ef84;
        case 0x15ef88u: goto label_15ef88;
        case 0x15ef8cu: goto label_15ef8c;
        case 0x15ef90u: goto label_15ef90;
        case 0x15ef94u: goto label_15ef94;
        case 0x15ef98u: goto label_15ef98;
        case 0x15ef9cu: goto label_15ef9c;
        case 0x15efa0u: goto label_15efa0;
        case 0x15efa4u: goto label_15efa4;
        case 0x15efa8u: goto label_15efa8;
        case 0x15efacu: goto label_15efac;
        case 0x15efb0u: goto label_15efb0;
        case 0x15efb4u: goto label_15efb4;
        case 0x15efb8u: goto label_15efb8;
        case 0x15efbcu: goto label_15efbc;
        case 0x15efc0u: goto label_15efc0;
        case 0x15efc4u: goto label_15efc4;
        case 0x15efc8u: goto label_15efc8;
        case 0x15efccu: goto label_15efcc;
        case 0x15efd0u: goto label_15efd0;
        case 0x15efd4u: goto label_15efd4;
        case 0x15efd8u: goto label_15efd8;
        case 0x15efdcu: goto label_15efdc;
        case 0x15efe0u: goto label_15efe0;
        case 0x15efe4u: goto label_15efe4;
        case 0x15efe8u: goto label_15efe8;
        case 0x15efecu: goto label_15efec;
        case 0x15eff0u: goto label_15eff0;
        case 0x15eff4u: goto label_15eff4;
        case 0x15eff8u: goto label_15eff8;
        case 0x15effcu: goto label_15effc;
        case 0x15f000u: goto label_15f000;
        case 0x15f004u: goto label_15f004;
        case 0x15f008u: goto label_15f008;
        case 0x15f00cu: goto label_15f00c;
        case 0x15f010u: goto label_15f010;
        case 0x15f014u: goto label_15f014;
        case 0x15f018u: goto label_15f018;
        case 0x15f01cu: goto label_15f01c;
        case 0x15f020u: goto label_15f020;
        case 0x15f024u: goto label_15f024;
        case 0x15f028u: goto label_15f028;
        case 0x15f02cu: goto label_15f02c;
        case 0x15f030u: goto label_15f030;
        case 0x15f034u: goto label_15f034;
        case 0x15f038u: goto label_15f038;
        case 0x15f03cu: goto label_15f03c;
        case 0x15f040u: goto label_15f040;
        case 0x15f044u: goto label_15f044;
        case 0x15f048u: goto label_15f048;
        case 0x15f04cu: goto label_15f04c;
        case 0x15f050u: goto label_15f050;
        case 0x15f054u: goto label_15f054;
        case 0x15f058u: goto label_15f058;
        case 0x15f05cu: goto label_15f05c;
        case 0x15f060u: goto label_15f060;
        case 0x15f064u: goto label_15f064;
        case 0x15f068u: goto label_15f068;
        case 0x15f06cu: goto label_15f06c;
        case 0x15f070u: goto label_15f070;
        case 0x15f074u: goto label_15f074;
        case 0x15f078u: goto label_15f078;
        case 0x15f07cu: goto label_15f07c;
        case 0x15f080u: goto label_15f080;
        case 0x15f084u: goto label_15f084;
        case 0x15f088u: goto label_15f088;
        case 0x15f08cu: goto label_15f08c;
        case 0x15f090u: goto label_15f090;
        case 0x15f094u: goto label_15f094;
        case 0x15f098u: goto label_15f098;
        case 0x15f09cu: goto label_15f09c;
        case 0x15f0a0u: goto label_15f0a0;
        case 0x15f0a4u: goto label_15f0a4;
        case 0x15f0a8u: goto label_15f0a8;
        case 0x15f0acu: goto label_15f0ac;
        case 0x15f0b0u: goto label_15f0b0;
        case 0x15f0b4u: goto label_15f0b4;
        case 0x15f0b8u: goto label_15f0b8;
        case 0x15f0bcu: goto label_15f0bc;
        case 0x15f0c0u: goto label_15f0c0;
        case 0x15f0c4u: goto label_15f0c4;
        case 0x15f0c8u: goto label_15f0c8;
        case 0x15f0ccu: goto label_15f0cc;
        case 0x15f0d0u: goto label_15f0d0;
        case 0x15f0d4u: goto label_15f0d4;
        case 0x15f0d8u: goto label_15f0d8;
        case 0x15f0dcu: goto label_15f0dc;
        case 0x15f0e0u: goto label_15f0e0;
        case 0x15f0e4u: goto label_15f0e4;
        case 0x15f0e8u: goto label_15f0e8;
        case 0x15f0ecu: goto label_15f0ec;
        case 0x15f0f0u: goto label_15f0f0;
        case 0x15f0f4u: goto label_15f0f4;
        case 0x15f0f8u: goto label_15f0f8;
        case 0x15f0fcu: goto label_15f0fc;
        case 0x15f100u: goto label_15f100;
        case 0x15f104u: goto label_15f104;
        case 0x15f108u: goto label_15f108;
        case 0x15f10cu: goto label_15f10c;
        case 0x15f110u: goto label_15f110;
        case 0x15f114u: goto label_15f114;
        case 0x15f118u: goto label_15f118;
        case 0x15f11cu: goto label_15f11c;
        case 0x15f120u: goto label_15f120;
        case 0x15f124u: goto label_15f124;
        case 0x15f128u: goto label_15f128;
        case 0x15f12cu: goto label_15f12c;
        case 0x15f130u: goto label_15f130;
        case 0x15f134u: goto label_15f134;
        case 0x15f138u: goto label_15f138;
        case 0x15f13cu: goto label_15f13c;
        case 0x15f140u: goto label_15f140;
        case 0x15f144u: goto label_15f144;
        case 0x15f148u: goto label_15f148;
        case 0x15f14cu: goto label_15f14c;
        case 0x15f150u: goto label_15f150;
        case 0x15f154u: goto label_15f154;
        case 0x15f158u: goto label_15f158;
        case 0x15f15cu: goto label_15f15c;
        case 0x15f160u: goto label_15f160;
        case 0x15f164u: goto label_15f164;
        case 0x15f168u: goto label_15f168;
        case 0x15f16cu: goto label_15f16c;
        case 0x15f170u: goto label_15f170;
        case 0x15f174u: goto label_15f174;
        case 0x15f178u: goto label_15f178;
        case 0x15f17cu: goto label_15f17c;
        case 0x15f180u: goto label_15f180;
        case 0x15f184u: goto label_15f184;
        case 0x15f188u: goto label_15f188;
        case 0x15f18cu: goto label_15f18c;
        case 0x15f190u: goto label_15f190;
        case 0x15f194u: goto label_15f194;
        case 0x15f198u: goto label_15f198;
        case 0x15f19cu: goto label_15f19c;
        case 0x15f1a0u: goto label_15f1a0;
        case 0x15f1a4u: goto label_15f1a4;
        case 0x15f1a8u: goto label_15f1a8;
        case 0x15f1acu: goto label_15f1ac;
        case 0x15f1b0u: goto label_15f1b0;
        case 0x15f1b4u: goto label_15f1b4;
        case 0x15f1b8u: goto label_15f1b8;
        case 0x15f1bcu: goto label_15f1bc;
        case 0x15f1c0u: goto label_15f1c0;
        case 0x15f1c4u: goto label_15f1c4;
        case 0x15f1c8u: goto label_15f1c8;
        case 0x15f1ccu: goto label_15f1cc;
        case 0x15f1d0u: goto label_15f1d0;
        case 0x15f1d4u: goto label_15f1d4;
        case 0x15f1d8u: goto label_15f1d8;
        case 0x15f1dcu: goto label_15f1dc;
        case 0x15f1e0u: goto label_15f1e0;
        case 0x15f1e4u: goto label_15f1e4;
        case 0x15f1e8u: goto label_15f1e8;
        case 0x15f1ecu: goto label_15f1ec;
        case 0x15f1f0u: goto label_15f1f0;
        case 0x15f1f4u: goto label_15f1f4;
        case 0x15f1f8u: goto label_15f1f8;
        case 0x15f1fcu: goto label_15f1fc;
        case 0x15f200u: goto label_15f200;
        case 0x15f204u: goto label_15f204;
        case 0x15f208u: goto label_15f208;
        case 0x15f20cu: goto label_15f20c;
        case 0x15f210u: goto label_15f210;
        case 0x15f214u: goto label_15f214;
        case 0x15f218u: goto label_15f218;
        case 0x15f21cu: goto label_15f21c;
        case 0x15f220u: goto label_15f220;
        case 0x15f224u: goto label_15f224;
        case 0x15f228u: goto label_15f228;
        case 0x15f22cu: goto label_15f22c;
        case 0x15f230u: goto label_15f230;
        case 0x15f234u: goto label_15f234;
        case 0x15f238u: goto label_15f238;
        case 0x15f23cu: goto label_15f23c;
        case 0x15f240u: goto label_15f240;
        case 0x15f244u: goto label_15f244;
        case 0x15f248u: goto label_15f248;
        case 0x15f24cu: goto label_15f24c;
        case 0x15f250u: goto label_15f250;
        case 0x15f254u: goto label_15f254;
        case 0x15f258u: goto label_15f258;
        case 0x15f25cu: goto label_15f25c;
        case 0x15f260u: goto label_15f260;
        case 0x15f264u: goto label_15f264;
        case 0x15f268u: goto label_15f268;
        case 0x15f26cu: goto label_15f26c;
        case 0x15f270u: goto label_15f270;
        case 0x15f274u: goto label_15f274;
        case 0x15f278u: goto label_15f278;
        case 0x15f27cu: goto label_15f27c;
        case 0x15f280u: goto label_15f280;
        case 0x15f284u: goto label_15f284;
        case 0x15f288u: goto label_15f288;
        case 0x15f28cu: goto label_15f28c;
        case 0x15f290u: goto label_15f290;
        case 0x15f294u: goto label_15f294;
        case 0x15f298u: goto label_15f298;
        case 0x15f29cu: goto label_15f29c;
        case 0x15f2a0u: goto label_15f2a0;
        case 0x15f2a4u: goto label_15f2a4;
        case 0x15f2a8u: goto label_15f2a8;
        case 0x15f2acu: goto label_15f2ac;
        case 0x15f2b0u: goto label_15f2b0;
        case 0x15f2b4u: goto label_15f2b4;
        case 0x15f2b8u: goto label_15f2b8;
        case 0x15f2bcu: goto label_15f2bc;
        case 0x15f2c0u: goto label_15f2c0;
        case 0x15f2c4u: goto label_15f2c4;
        case 0x15f2c8u: goto label_15f2c8;
        case 0x15f2ccu: goto label_15f2cc;
        case 0x15f2d0u: goto label_15f2d0;
        case 0x15f2d4u: goto label_15f2d4;
        case 0x15f2d8u: goto label_15f2d8;
        case 0x15f2dcu: goto label_15f2dc;
        case 0x15f2e0u: goto label_15f2e0;
        case 0x15f2e4u: goto label_15f2e4;
        case 0x15f2e8u: goto label_15f2e8;
        case 0x15f2ecu: goto label_15f2ec;
        case 0x15f2f0u: goto label_15f2f0;
        case 0x15f2f4u: goto label_15f2f4;
        case 0x15f2f8u: goto label_15f2f8;
        case 0x15f2fcu: goto label_15f2fc;
        case 0x15f300u: goto label_15f300;
        case 0x15f304u: goto label_15f304;
        case 0x15f308u: goto label_15f308;
        case 0x15f30cu: goto label_15f30c;
        case 0x15f310u: goto label_15f310;
        case 0x15f314u: goto label_15f314;
        case 0x15f318u: goto label_15f318;
        case 0x15f31cu: goto label_15f31c;
        case 0x15f320u: goto label_15f320;
        case 0x15f324u: goto label_15f324;
        case 0x15f328u: goto label_15f328;
        case 0x15f32cu: goto label_15f32c;
        case 0x15f330u: goto label_15f330;
        case 0x15f334u: goto label_15f334;
        case 0x15f338u: goto label_15f338;
        case 0x15f33cu: goto label_15f33c;
        case 0x15f340u: goto label_15f340;
        case 0x15f344u: goto label_15f344;
        case 0x15f348u: goto label_15f348;
        case 0x15f34cu: goto label_15f34c;
        case 0x15f350u: goto label_15f350;
        case 0x15f354u: goto label_15f354;
        case 0x15f358u: goto label_15f358;
        case 0x15f35cu: goto label_15f35c;
        case 0x15f360u: goto label_15f360;
        case 0x15f364u: goto label_15f364;
        case 0x15f368u: goto label_15f368;
        case 0x15f36cu: goto label_15f36c;
        case 0x15f370u: goto label_15f370;
        case 0x15f374u: goto label_15f374;
        case 0x15f378u: goto label_15f378;
        case 0x15f37cu: goto label_15f37c;
        case 0x15f380u: goto label_15f380;
        case 0x15f384u: goto label_15f384;
        case 0x15f388u: goto label_15f388;
        case 0x15f38cu: goto label_15f38c;
        case 0x15f390u: goto label_15f390;
        case 0x15f394u: goto label_15f394;
        case 0x15f398u: goto label_15f398;
        case 0x15f39cu: goto label_15f39c;
        case 0x15f3a0u: goto label_15f3a0;
        case 0x15f3a4u: goto label_15f3a4;
        case 0x15f3a8u: goto label_15f3a8;
        case 0x15f3acu: goto label_15f3ac;
        case 0x15f3b0u: goto label_15f3b0;
        case 0x15f3b4u: goto label_15f3b4;
        case 0x15f3b8u: goto label_15f3b8;
        case 0x15f3bcu: goto label_15f3bc;
        case 0x15f3c0u: goto label_15f3c0;
        case 0x15f3c4u: goto label_15f3c4;
        case 0x15f3c8u: goto label_15f3c8;
        case 0x15f3ccu: goto label_15f3cc;
        case 0x15f3d0u: goto label_15f3d0;
        case 0x15f3d4u: goto label_15f3d4;
        case 0x15f3d8u: goto label_15f3d8;
        case 0x15f3dcu: goto label_15f3dc;
        case 0x15f3e0u: goto label_15f3e0;
        case 0x15f3e4u: goto label_15f3e4;
        case 0x15f3e8u: goto label_15f3e8;
        case 0x15f3ecu: goto label_15f3ec;
        case 0x15f3f0u: goto label_15f3f0;
        case 0x15f3f4u: goto label_15f3f4;
        case 0x15f3f8u: goto label_15f3f8;
        case 0x15f3fcu: goto label_15f3fc;
        case 0x15f400u: goto label_15f400;
        case 0x15f404u: goto label_15f404;
        case 0x15f408u: goto label_15f408;
        case 0x15f40cu: goto label_15f40c;
        case 0x15f410u: goto label_15f410;
        case 0x15f414u: goto label_15f414;
        case 0x15f418u: goto label_15f418;
        case 0x15f41cu: goto label_15f41c;
        case 0x15f420u: goto label_15f420;
        case 0x15f424u: goto label_15f424;
        case 0x15f428u: goto label_15f428;
        case 0x15f42cu: goto label_15f42c;
        case 0x15f430u: goto label_15f430;
        case 0x15f434u: goto label_15f434;
        case 0x15f438u: goto label_15f438;
        case 0x15f43cu: goto label_15f43c;
        case 0x15f440u: goto label_15f440;
        case 0x15f444u: goto label_15f444;
        case 0x15f448u: goto label_15f448;
        case 0x15f44cu: goto label_15f44c;
        case 0x15f450u: goto label_15f450;
        case 0x15f454u: goto label_15f454;
        case 0x15f458u: goto label_15f458;
        case 0x15f45cu: goto label_15f45c;
        case 0x15f460u: goto label_15f460;
        case 0x15f464u: goto label_15f464;
        case 0x15f468u: goto label_15f468;
        case 0x15f46cu: goto label_15f46c;
        case 0x15f470u: goto label_15f470;
        case 0x15f474u: goto label_15f474;
        case 0x15f478u: goto label_15f478;
        case 0x15f47cu: goto label_15f47c;
        case 0x15f480u: goto label_15f480;
        case 0x15f484u: goto label_15f484;
        case 0x15f488u: goto label_15f488;
        case 0x15f48cu: goto label_15f48c;
        case 0x15f490u: goto label_15f490;
        case 0x15f494u: goto label_15f494;
        case 0x15f498u: goto label_15f498;
        case 0x15f49cu: goto label_15f49c;
        case 0x15f4a0u: goto label_15f4a0;
        case 0x15f4a4u: goto label_15f4a4;
        case 0x15f4a8u: goto label_15f4a8;
        case 0x15f4acu: goto label_15f4ac;
        case 0x15f4b0u: goto label_15f4b0;
        case 0x15f4b4u: goto label_15f4b4;
        case 0x15f4b8u: goto label_15f4b8;
        case 0x15f4bcu: goto label_15f4bc;
        case 0x15f4c0u: goto label_15f4c0;
        case 0x15f4c4u: goto label_15f4c4;
        case 0x15f4c8u: goto label_15f4c8;
        case 0x15f4ccu: goto label_15f4cc;
        case 0x15f4d0u: goto label_15f4d0;
        case 0x15f4d4u: goto label_15f4d4;
        case 0x15f4d8u: goto label_15f4d8;
        case 0x15f4dcu: goto label_15f4dc;
        case 0x15f4e0u: goto label_15f4e0;
        case 0x15f4e4u: goto label_15f4e4;
        case 0x15f4e8u: goto label_15f4e8;
        case 0x15f4ecu: goto label_15f4ec;
        case 0x15f4f0u: goto label_15f4f0;
        case 0x15f4f4u: goto label_15f4f4;
        case 0x15f4f8u: goto label_15f4f8;
        case 0x15f4fcu: goto label_15f4fc;
        case 0x15f500u: goto label_15f500;
        case 0x15f504u: goto label_15f504;
        case 0x15f508u: goto label_15f508;
        case 0x15f50cu: goto label_15f50c;
        case 0x15f510u: goto label_15f510;
        case 0x15f514u: goto label_15f514;
        case 0x15f518u: goto label_15f518;
        case 0x15f51cu: goto label_15f51c;
        case 0x15f520u: goto label_15f520;
        case 0x15f524u: goto label_15f524;
        case 0x15f528u: goto label_15f528;
        case 0x15f52cu: goto label_15f52c;
        case 0x15f530u: goto label_15f530;
        case 0x15f534u: goto label_15f534;
        case 0x15f538u: goto label_15f538;
        case 0x15f53cu: goto label_15f53c;
        case 0x15f540u: goto label_15f540;
        case 0x15f544u: goto label_15f544;
        case 0x15f548u: goto label_15f548;
        case 0x15f54cu: goto label_15f54c;
        case 0x15f550u: goto label_15f550;
        case 0x15f554u: goto label_15f554;
        case 0x15f558u: goto label_15f558;
        case 0x15f55cu: goto label_15f55c;
        case 0x15f560u: goto label_15f560;
        case 0x15f564u: goto label_15f564;
        case 0x15f568u: goto label_15f568;
        case 0x15f56cu: goto label_15f56c;
        case 0x15f570u: goto label_15f570;
        case 0x15f574u: goto label_15f574;
        case 0x15f578u: goto label_15f578;
        case 0x15f57cu: goto label_15f57c;
        case 0x15f580u: goto label_15f580;
        case 0x15f584u: goto label_15f584;
        case 0x15f588u: goto label_15f588;
        case 0x15f58cu: goto label_15f58c;
        case 0x15f590u: goto label_15f590;
        case 0x15f594u: goto label_15f594;
        case 0x15f598u: goto label_15f598;
        case 0x15f59cu: goto label_15f59c;
        case 0x15f5a0u: goto label_15f5a0;
        case 0x15f5a4u: goto label_15f5a4;
        case 0x15f5a8u: goto label_15f5a8;
        case 0x15f5acu: goto label_15f5ac;
        case 0x15f5b0u: goto label_15f5b0;
        case 0x15f5b4u: goto label_15f5b4;
        case 0x15f5b8u: goto label_15f5b8;
        case 0x15f5bcu: goto label_15f5bc;
        case 0x15f5c0u: goto label_15f5c0;
        case 0x15f5c4u: goto label_15f5c4;
        case 0x15f5c8u: goto label_15f5c8;
        case 0x15f5ccu: goto label_15f5cc;
        case 0x15f5d0u: goto label_15f5d0;
        case 0x15f5d4u: goto label_15f5d4;
        case 0x15f5d8u: goto label_15f5d8;
        case 0x15f5dcu: goto label_15f5dc;
        case 0x15f5e0u: goto label_15f5e0;
        case 0x15f5e4u: goto label_15f5e4;
        case 0x15f5e8u: goto label_15f5e8;
        case 0x15f5ecu: goto label_15f5ec;
        case 0x15f5f0u: goto label_15f5f0;
        case 0x15f5f4u: goto label_15f5f4;
        case 0x15f5f8u: goto label_15f5f8;
        case 0x15f5fcu: goto label_15f5fc;
        case 0x15f600u: goto label_15f600;
        case 0x15f604u: goto label_15f604;
        case 0x15f608u: goto label_15f608;
        case 0x15f60cu: goto label_15f60c;
        case 0x15f610u: goto label_15f610;
        case 0x15f614u: goto label_15f614;
        case 0x15f618u: goto label_15f618;
        case 0x15f61cu: goto label_15f61c;
        case 0x15f620u: goto label_15f620;
        case 0x15f624u: goto label_15f624;
        case 0x15f628u: goto label_15f628;
        case 0x15f62cu: goto label_15f62c;
        case 0x15f630u: goto label_15f630;
        case 0x15f634u: goto label_15f634;
        case 0x15f638u: goto label_15f638;
        case 0x15f63cu: goto label_15f63c;
        case 0x15f640u: goto label_15f640;
        case 0x15f644u: goto label_15f644;
        case 0x15f648u: goto label_15f648;
        case 0x15f64cu: goto label_15f64c;
        case 0x15f650u: goto label_15f650;
        case 0x15f654u: goto label_15f654;
        case 0x15f658u: goto label_15f658;
        case 0x15f65cu: goto label_15f65c;
        case 0x15f660u: goto label_15f660;
        case 0x15f664u: goto label_15f664;
        case 0x15f668u: goto label_15f668;
        case 0x15f66cu: goto label_15f66c;
        case 0x15f670u: goto label_15f670;
        case 0x15f674u: goto label_15f674;
        case 0x15f678u: goto label_15f678;
        case 0x15f67cu: goto label_15f67c;
        case 0x15f680u: goto label_15f680;
        case 0x15f684u: goto label_15f684;
        case 0x15f688u: goto label_15f688;
        case 0x15f68cu: goto label_15f68c;
        case 0x15f690u: goto label_15f690;
        case 0x15f694u: goto label_15f694;
        case 0x15f698u: goto label_15f698;
        case 0x15f69cu: goto label_15f69c;
        case 0x15f6a0u: goto label_15f6a0;
        case 0x15f6a4u: goto label_15f6a4;
        case 0x15f6a8u: goto label_15f6a8;
        case 0x15f6acu: goto label_15f6ac;
        case 0x15f6b0u: goto label_15f6b0;
        case 0x15f6b4u: goto label_15f6b4;
        case 0x15f6b8u: goto label_15f6b8;
        case 0x15f6bcu: goto label_15f6bc;
        case 0x15f6c0u: goto label_15f6c0;
        case 0x15f6c4u: goto label_15f6c4;
        case 0x15f6c8u: goto label_15f6c8;
        case 0x15f6ccu: goto label_15f6cc;
        case 0x15f6d0u: goto label_15f6d0;
        case 0x15f6d4u: goto label_15f6d4;
        case 0x15f6d8u: goto label_15f6d8;
        case 0x15f6dcu: goto label_15f6dc;
        case 0x15f6e0u: goto label_15f6e0;
        case 0x15f6e4u: goto label_15f6e4;
        case 0x15f6e8u: goto label_15f6e8;
        case 0x15f6ecu: goto label_15f6ec;
        case 0x15f6f0u: goto label_15f6f0;
        case 0x15f6f4u: goto label_15f6f4;
        case 0x15f6f8u: goto label_15f6f8;
        case 0x15f6fcu: goto label_15f6fc;
        case 0x15f700u: goto label_15f700;
        case 0x15f704u: goto label_15f704;
        case 0x15f708u: goto label_15f708;
        case 0x15f70cu: goto label_15f70c;
        case 0x15f710u: goto label_15f710;
        case 0x15f714u: goto label_15f714;
        case 0x15f718u: goto label_15f718;
        case 0x15f71cu: goto label_15f71c;
        case 0x15f720u: goto label_15f720;
        case 0x15f724u: goto label_15f724;
        case 0x15f728u: goto label_15f728;
        case 0x15f72cu: goto label_15f72c;
        case 0x15f730u: goto label_15f730;
        case 0x15f734u: goto label_15f734;
        case 0x15f738u: goto label_15f738;
        case 0x15f73cu: goto label_15f73c;
        case 0x15f740u: goto label_15f740;
        case 0x15f744u: goto label_15f744;
        case 0x15f748u: goto label_15f748;
        case 0x15f74cu: goto label_15f74c;
        case 0x15f750u: goto label_15f750;
        case 0x15f754u: goto label_15f754;
        case 0x15f758u: goto label_15f758;
        case 0x15f75cu: goto label_15f75c;
        case 0x15f760u: goto label_15f760;
        case 0x15f764u: goto label_15f764;
        case 0x15f768u: goto label_15f768;
        case 0x15f76cu: goto label_15f76c;
        case 0x15f770u: goto label_15f770;
        case 0x15f774u: goto label_15f774;
        case 0x15f778u: goto label_15f778;
        case 0x15f77cu: goto label_15f77c;
        case 0x15f780u: goto label_15f780;
        case 0x15f784u: goto label_15f784;
        case 0x15f788u: goto label_15f788;
        case 0x15f78cu: goto label_15f78c;
        case 0x15f790u: goto label_15f790;
        case 0x15f794u: goto label_15f794;
        case 0x15f798u: goto label_15f798;
        case 0x15f79cu: goto label_15f79c;
        case 0x15f7a0u: goto label_15f7a0;
        case 0x15f7a4u: goto label_15f7a4;
        case 0x15f7a8u: goto label_15f7a8;
        case 0x15f7acu: goto label_15f7ac;
        case 0x15f7b0u: goto label_15f7b0;
        case 0x15f7b4u: goto label_15f7b4;
        case 0x15f7b8u: goto label_15f7b8;
        case 0x15f7bcu: goto label_15f7bc;
        case 0x15f7c0u: goto label_15f7c0;
        case 0x15f7c4u: goto label_15f7c4;
        case 0x15f7c8u: goto label_15f7c8;
        case 0x15f7ccu: goto label_15f7cc;
        case 0x15f7d0u: goto label_15f7d0;
        case 0x15f7d4u: goto label_15f7d4;
        case 0x15f7d8u: goto label_15f7d8;
        case 0x15f7dcu: goto label_15f7dc;
        case 0x15f7e0u: goto label_15f7e0;
        case 0x15f7e4u: goto label_15f7e4;
        case 0x15f7e8u: goto label_15f7e8;
        case 0x15f7ecu: goto label_15f7ec;
        case 0x15f7f0u: goto label_15f7f0;
        case 0x15f7f4u: goto label_15f7f4;
        case 0x15f7f8u: goto label_15f7f8;
        case 0x15f7fcu: goto label_15f7fc;
        case 0x15f800u: goto label_15f800;
        case 0x15f804u: goto label_15f804;
        case 0x15f808u: goto label_15f808;
        case 0x15f80cu: goto label_15f80c;
        case 0x15f810u: goto label_15f810;
        case 0x15f814u: goto label_15f814;
        case 0x15f818u: goto label_15f818;
        case 0x15f81cu: goto label_15f81c;
        case 0x15f820u: goto label_15f820;
        case 0x15f824u: goto label_15f824;
        case 0x15f828u: goto label_15f828;
        case 0x15f82cu: goto label_15f82c;
        case 0x15f830u: goto label_15f830;
        case 0x15f834u: goto label_15f834;
        case 0x15f838u: goto label_15f838;
        case 0x15f83cu: goto label_15f83c;
        case 0x15f840u: goto label_15f840;
        case 0x15f844u: goto label_15f844;
        case 0x15f848u: goto label_15f848;
        case 0x15f84cu: goto label_15f84c;
        case 0x15f850u: goto label_15f850;
        case 0x15f854u: goto label_15f854;
        case 0x15f858u: goto label_15f858;
        case 0x15f85cu: goto label_15f85c;
        case 0x15f860u: goto label_15f860;
        case 0x15f864u: goto label_15f864;
        case 0x15f868u: goto label_15f868;
        case 0x15f86cu: goto label_15f86c;
        case 0x15f870u: goto label_15f870;
        case 0x15f874u: goto label_15f874;
        case 0x15f878u: goto label_15f878;
        case 0x15f87cu: goto label_15f87c;
        case 0x15f880u: goto label_15f880;
        case 0x15f884u: goto label_15f884;
        case 0x15f888u: goto label_15f888;
        case 0x15f88cu: goto label_15f88c;
        case 0x15f890u: goto label_15f890;
        case 0x15f894u: goto label_15f894;
        case 0x15f898u: goto label_15f898;
        case 0x15f89cu: goto label_15f89c;
        case 0x15f8a0u: goto label_15f8a0;
        case 0x15f8a4u: goto label_15f8a4;
        case 0x15f8a8u: goto label_15f8a8;
        case 0x15f8acu: goto label_15f8ac;
        case 0x15f8b0u: goto label_15f8b0;
        case 0x15f8b4u: goto label_15f8b4;
        case 0x15f8b8u: goto label_15f8b8;
        case 0x15f8bcu: goto label_15f8bc;
        case 0x15f8c0u: goto label_15f8c0;
        case 0x15f8c4u: goto label_15f8c4;
        case 0x15f8c8u: goto label_15f8c8;
        case 0x15f8ccu: goto label_15f8cc;
        case 0x15f8d0u: goto label_15f8d0;
        case 0x15f8d4u: goto label_15f8d4;
        case 0x15f8d8u: goto label_15f8d8;
        case 0x15f8dcu: goto label_15f8dc;
        case 0x15f8e0u: goto label_15f8e0;
        case 0x15f8e4u: goto label_15f8e4;
        case 0x15f8e8u: goto label_15f8e8;
        case 0x15f8ecu: goto label_15f8ec;
        case 0x15f8f0u: goto label_15f8f0;
        case 0x15f8f4u: goto label_15f8f4;
        case 0x15f8f8u: goto label_15f8f8;
        case 0x15f8fcu: goto label_15f8fc;
        case 0x15f900u: goto label_15f900;
        case 0x15f904u: goto label_15f904;
        case 0x15f908u: goto label_15f908;
        case 0x15f90cu: goto label_15f90c;
        case 0x15f910u: goto label_15f910;
        case 0x15f914u: goto label_15f914;
        case 0x15f918u: goto label_15f918;
        case 0x15f91cu: goto label_15f91c;
        case 0x15f920u: goto label_15f920;
        case 0x15f924u: goto label_15f924;
        case 0x15f928u: goto label_15f928;
        case 0x15f92cu: goto label_15f92c;
        case 0x15f930u: goto label_15f930;
        case 0x15f934u: goto label_15f934;
        case 0x15f938u: goto label_15f938;
        case 0x15f93cu: goto label_15f93c;
        case 0x15f940u: goto label_15f940;
        case 0x15f944u: goto label_15f944;
        case 0x15f948u: goto label_15f948;
        case 0x15f94cu: goto label_15f94c;
        case 0x15f950u: goto label_15f950;
        case 0x15f954u: goto label_15f954;
        case 0x15f958u: goto label_15f958;
        case 0x15f95cu: goto label_15f95c;
        case 0x15f960u: goto label_15f960;
        case 0x15f964u: goto label_15f964;
        case 0x15f968u: goto label_15f968;
        case 0x15f96cu: goto label_15f96c;
        case 0x15f970u: goto label_15f970;
        case 0x15f974u: goto label_15f974;
        case 0x15f978u: goto label_15f978;
        case 0x15f97cu: goto label_15f97c;
        case 0x15f980u: goto label_15f980;
        case 0x15f984u: goto label_15f984;
        case 0x15f988u: goto label_15f988;
        case 0x15f98cu: goto label_15f98c;
        case 0x15f990u: goto label_15f990;
        case 0x15f994u: goto label_15f994;
        case 0x15f998u: goto label_15f998;
        case 0x15f99cu: goto label_15f99c;
        case 0x15f9a0u: goto label_15f9a0;
        case 0x15f9a4u: goto label_15f9a4;
        case 0x15f9a8u: goto label_15f9a8;
        case 0x15f9acu: goto label_15f9ac;
        case 0x15f9b0u: goto label_15f9b0;
        case 0x15f9b4u: goto label_15f9b4;
        case 0x15f9b8u: goto label_15f9b8;
        case 0x15f9bcu: goto label_15f9bc;
        case 0x15f9c0u: goto label_15f9c0;
        case 0x15f9c4u: goto label_15f9c4;
        case 0x15f9c8u: goto label_15f9c8;
        case 0x15f9ccu: goto label_15f9cc;
        case 0x15f9d0u: goto label_15f9d0;
        case 0x15f9d4u: goto label_15f9d4;
        case 0x15f9d8u: goto label_15f9d8;
        case 0x15f9dcu: goto label_15f9dc;
        case 0x15f9e0u: goto label_15f9e0;
        case 0x15f9e4u: goto label_15f9e4;
        case 0x15f9e8u: goto label_15f9e8;
        case 0x15f9ecu: goto label_15f9ec;
        case 0x15f9f0u: goto label_15f9f0;
        case 0x15f9f4u: goto label_15f9f4;
        case 0x15f9f8u: goto label_15f9f8;
        case 0x15f9fcu: goto label_15f9fc;
        case 0x15fa00u: goto label_15fa00;
        case 0x15fa04u: goto label_15fa04;
        case 0x15fa08u: goto label_15fa08;
        case 0x15fa0cu: goto label_15fa0c;
        case 0x15fa10u: goto label_15fa10;
        case 0x15fa14u: goto label_15fa14;
        case 0x15fa18u: goto label_15fa18;
        case 0x15fa1cu: goto label_15fa1c;
        case 0x15fa20u: goto label_15fa20;
        case 0x15fa24u: goto label_15fa24;
        case 0x15fa28u: goto label_15fa28;
        case 0x15fa2cu: goto label_15fa2c;
        case 0x15fa30u: goto label_15fa30;
        case 0x15fa34u: goto label_15fa34;
        case 0x15fa38u: goto label_15fa38;
        case 0x15fa3cu: goto label_15fa3c;
        case 0x15fa40u: goto label_15fa40;
        case 0x15fa44u: goto label_15fa44;
        case 0x15fa48u: goto label_15fa48;
        case 0x15fa4cu: goto label_15fa4c;
        case 0x15fa50u: goto label_15fa50;
        case 0x15fa54u: goto label_15fa54;
        case 0x15fa58u: goto label_15fa58;
        case 0x15fa5cu: goto label_15fa5c;
        case 0x15fa60u: goto label_15fa60;
        case 0x15fa64u: goto label_15fa64;
        case 0x15fa68u: goto label_15fa68;
        case 0x15fa6cu: goto label_15fa6c;
        case 0x15fa70u: goto label_15fa70;
        case 0x15fa74u: goto label_15fa74;
        case 0x15fa78u: goto label_15fa78;
        case 0x15fa7cu: goto label_15fa7c;
        case 0x15fa80u: goto label_15fa80;
        case 0x15fa84u: goto label_15fa84;
        case 0x15fa88u: goto label_15fa88;
        case 0x15fa8cu: goto label_15fa8c;
        case 0x15fa90u: goto label_15fa90;
        case 0x15fa94u: goto label_15fa94;
        case 0x15fa98u: goto label_15fa98;
        case 0x15fa9cu: goto label_15fa9c;
        case 0x15faa0u: goto label_15faa0;
        case 0x15faa4u: goto label_15faa4;
        case 0x15faa8u: goto label_15faa8;
        case 0x15faacu: goto label_15faac;
        case 0x15fab0u: goto label_15fab0;
        case 0x15fab4u: goto label_15fab4;
        case 0x15fab8u: goto label_15fab8;
        case 0x15fabcu: goto label_15fabc;
        case 0x15fac0u: goto label_15fac0;
        case 0x15fac4u: goto label_15fac4;
        case 0x15fac8u: goto label_15fac8;
        case 0x15faccu: goto label_15facc;
        case 0x15fad0u: goto label_15fad0;
        case 0x15fad4u: goto label_15fad4;
        case 0x15fad8u: goto label_15fad8;
        case 0x15fadcu: goto label_15fadc;
        case 0x15fae0u: goto label_15fae0;
        case 0x15fae4u: goto label_15fae4;
        case 0x15fae8u: goto label_15fae8;
        case 0x15faecu: goto label_15faec;
        case 0x15faf0u: goto label_15faf0;
        case 0x15faf4u: goto label_15faf4;
        case 0x15faf8u: goto label_15faf8;
        case 0x15fafcu: goto label_15fafc;
        case 0x15fb00u: goto label_15fb00;
        case 0x15fb04u: goto label_15fb04;
        case 0x15fb08u: goto label_15fb08;
        case 0x15fb0cu: goto label_15fb0c;
        case 0x15fb10u: goto label_15fb10;
        case 0x15fb14u: goto label_15fb14;
        case 0x15fb18u: goto label_15fb18;
        case 0x15fb1cu: goto label_15fb1c;
        case 0x15fb20u: goto label_15fb20;
        case 0x15fb24u: goto label_15fb24;
        case 0x15fb28u: goto label_15fb28;
        case 0x15fb2cu: goto label_15fb2c;
        default: break;
    }

    ctx->pc = 0x15ecc0u;

label_15ecc0:
    // 0x15ecc0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x15ecc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_15ecc4:
    // 0x15ecc4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15ecc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_15ecc8:
    // 0x15ecc8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15ecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15eccc:
    // 0x15eccc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15ecccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15ecd0:
    // 0x15ecd0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15ecd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15ecd4:
    // 0x15ecd4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15ecd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15ecd8:
    // 0x15ecd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15ecd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15ecdc:
    // 0x15ecdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ecdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15ece0:
    // 0x15ece0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ece0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15ece4:
    // 0x15ece4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15ece4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15ece8:
    // 0x15ece8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ece8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15ecec:
    // 0x15ecec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15ececu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ecf0:
    // 0x15ecf0: 0x10000072  b           . + 4 + (0x72 << 2)
label_15ecf4:
    if (ctx->pc == 0x15ECF4u) {
        ctx->pc = 0x15ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECF0u;
        // 0x15ecf4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ECF8u;
        goto label_15ecf8;
    }
    ctx->pc = 0x15ECF0u;
    {
        const bool branch_taken_0x15ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECF0u;
        // 0x15ecf4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ecf0) {
            ctx->pc = 0x15EEBCu;
            goto label_15eebc;
        }
    }
    ctx->pc = 0x15ECF8u;
label_15ecf8:
    // 0x15ecf8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15ecfc:
    // 0x15ecfc: 0x24427490  addiu       $v0, $v0, 0x7490
    ctx->pc = 0x15ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29840));
label_15ed00:
    // 0x15ed00: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15ed04:
    // 0x15ed04: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x15ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_15ed08:
    // 0x15ed08: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x15ed08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_15ed0c:
    // 0x15ed0c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x15ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15ed10:
    // 0x15ed10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15ed10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15ed14:
    // 0x15ed14: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x15ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_15ed18:
    // 0x15ed18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15ed1c:
    // 0x15ed1c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15ed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15ed20:
    // 0x15ed20: 0x723021  addu        $a2, $v1, $s2
    ctx->pc = 0x15ed20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15ed24:
    // 0x15ed24: 0x84c30228  lh          $v1, 0x228($a2)
    ctx->pc = 0x15ed24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 552)));
label_15ed28:
    // 0x15ed28: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_15ed2c:
    if (ctx->pc == 0x15ED2Cu) {
        ctx->pc = 0x15ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED28u;
        // 0x15ed2c: 0x3c02ff7f  lui         $v0, 0xFF7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED30u;
        goto label_15ed30;
    }
    ctx->pc = 0x15ED28u;
    {
        const bool branch_taken_0x15ed28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED28u;
        // 0x15ed2c: 0x3c02ff7f  lui         $v0, 0xFF7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed28) {
            ctx->pc = 0x15ED4Cu;
            goto label_15ed4c;
        }
    }
    ctx->pc = 0x15ED30u;
label_15ed30:
    // 0x15ed30: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x15ed30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_15ed34:
    // 0x15ed34: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x15ed34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_15ed38:
    // 0x15ed38: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_15ed3c:
    // 0x15ed3c: 0x244274c0  addiu       $v0, $v0, 0x74C0
    ctx->pc = 0x15ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29888));
label_15ed40:
    // 0x15ed40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15ed44:
    // 0x15ed44: 0x1000005c  b           . + 4 + (0x5C << 2)
label_15ed48:
    if (ctx->pc == 0x15ED48u) {
        ctx->pc = 0x15ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED44u;
        // 0x15ed48: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED4Cu;
        goto label_15ed4c;
    }
    ctx->pc = 0x15ED44u;
    {
        const bool branch_taken_0x15ed44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED44u;
        // 0x15ed48: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed44) {
            ctx->pc = 0x15EEB8u;
            goto label_15eeb8;
        }
    }
    ctx->pc = 0x15ED4Cu;
label_15ed4c:
    // 0x15ed4c: 0x0  nop
    ctx->pc = 0x15ed4cu;
    // NOP
label_15ed50:
    // 0x15ed50: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x15ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_15ed54:
    // 0x15ed54: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_15ed58:
    if (ctx->pc == 0x15ED58u) {
        ctx->pc = 0x15ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED54u;
        // 0x15ed58: 0x3c02ff7f  lui         $v0, 0xFF7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED5Cu;
        goto label_15ed5c;
    }
    ctx->pc = 0x15ED54u;
    {
        const bool branch_taken_0x15ed54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED54u;
        // 0x15ed58: 0x3c02ff7f  lui         $v0, 0xFF7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed54) {
            ctx->pc = 0x15ED78u;
            goto label_15ed78;
        }
    }
    ctx->pc = 0x15ED5Cu;
label_15ed5c:
    // 0x15ed5c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x15ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_15ed60:
    // 0x15ed60: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x15ed60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_15ed64:
    // 0x15ed64: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_15ed68:
    // 0x15ed68: 0x244274c0  addiu       $v0, $v0, 0x74C0
    ctx->pc = 0x15ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29888));
label_15ed6c:
    // 0x15ed6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15ed70:
    // 0x15ed70: 0x10000051  b           . + 4 + (0x51 << 2)
label_15ed74:
    if (ctx->pc == 0x15ED74u) {
        ctx->pc = 0x15ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED70u;
        // 0x15ed74: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED78u;
        goto label_15ed78;
    }
    ctx->pc = 0x15ED70u;
    {
        const bool branch_taken_0x15ed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED70u;
        // 0x15ed74: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed70) {
            ctx->pc = 0x15EEB8u;
            goto label_15eeb8;
        }
    }
    ctx->pc = 0x15ED78u;
label_15ed78:
    // 0x15ed78: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_15ed7c:
    // 0x15ed7c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x15ed7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_15ed80:
    // 0x15ed80: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x15ed80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_15ed84:
    // 0x15ed84: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x15ed84u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15ed88:
    // 0x15ed88: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x15ed88u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_15ed8c:
    // 0x15ed8c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x15ed8cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_15ed90:
    // 0x15ed90: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x15ed90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_15ed94:
    // 0x15ed94: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x15ed94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_15ed98:
    // 0x15ed98: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x15ed98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_15ed9c:
    // 0x15ed9c: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x15ed9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_15eda0:
    // 0x15eda0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x15eda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_15eda4:
    // 0x15eda4: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x15eda4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_15eda8:
    // 0x15eda8: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x15eda8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_15edac:
    // 0x15edac: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x15edacu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15edb0:
    // 0x15edb0: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x15edb0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_15edb4:
    // 0x15edb4: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x15edb4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_15edb8:
    // 0x15edb8: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x15edb8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_15edbc:
    // 0x15edbc: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x15edbcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_15edc0:
    // 0x15edc0: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x15edc0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_15edc4:
    // 0x15edc4: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x15edc4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_15edc8:
    // 0x15edc8: 0xc4c002a0  lwc1        $f0, 0x2A0($a2)
    ctx->pc = 0x15edc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15edcc:
    // 0x15edcc: 0xc07d3fe  jal         func_1F4FF8
label_15edd0:
    if (ctx->pc == 0x15EDD0u) {
        ctx->pc = 0x15EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDCCu;
        // 0x15edd0: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDD4u;
        goto label_15edd4;
    }
    ctx->pc = 0x15EDCCu;
    SET_GPR_U32(ctx, 31, 0x15EDD4u);
    ctx->pc = 0x15EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDCCu;
    // 0x15edd0: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x15EDCCu, 0x15EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDD4u;
label_15edd4:
    // 0x15edd4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x15edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_15edd8:
    // 0x15edd8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x15edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15eddc:
    // 0x15eddc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15ede0:
    // 0x15ede0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15ede4:
    // 0x15ede4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15ede8:
    // 0x15ede8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15edec:
    // 0x15edec: 0xc44c02a8  lwc1        $f12, 0x2A8($v0)
    ctx->pc = 0x15edecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15edf0:
    // 0x15edf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15edf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15edf4:
    // 0x15edf4: 0x0  nop
    ctx->pc = 0x15edf4u;
    // NOP
label_15edf8:
    // 0x15edf8: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x15edf8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15edfc:
    // 0x15edfc: 0x0  nop
    ctx->pc = 0x15edfcu;
    // NOP
label_15ee00:
    // 0x15ee00: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_15ee04:
    if (ctx->pc == 0x15EE04u) {
        ctx->pc = 0x15EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE00u;
        // 0x15ee04: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE08u;
        goto label_15ee08;
    }
    ctx->pc = 0x15EE00u;
    {
        const bool branch_taken_0x15ee00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE00u;
        // 0x15ee04: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ee00) {
            ctx->pc = 0x15EE10u;
            goto label_15ee10;
        }
    }
    ctx->pc = 0x15EE08u;
label_15ee08:
    // 0x15ee08: 0xc07d3d4  jal         func_1F4F50
label_15ee0c:
    if (ctx->pc == 0x15EE0Cu) {
        ctx->pc = 0x15EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE08u;
        // 0x15ee0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE10u;
        goto label_15ee10;
    }
    ctx->pc = 0x15EE08u;
    SET_GPR_U32(ctx, 31, 0x15EE10u);
    ctx->pc = 0x15EE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE08u;
    // 0x15ee0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x15EE08u, 0x15EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EE10u;
label_15ee10:
    // 0x15ee10: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x15ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_15ee14:
    // 0x15ee14: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x15ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15ee18:
    // 0x15ee18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15ee1c:
    // 0x15ee1c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15ee20:
    // 0x15ee20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15ee24:
    // 0x15ee24: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15ee28:
    // 0x15ee28: 0xc44102a4  lwc1        $f1, 0x2A4($v0)
    ctx->pc = 0x15ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15ee2c:
    // 0x15ee2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ee2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15ee30:
    // 0x15ee30: 0x0  nop
    ctx->pc = 0x15ee30u;
    // NOP
label_15ee34:
    // 0x15ee34: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x15ee34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15ee38:
    // 0x15ee38: 0x0  nop
    ctx->pc = 0x15ee38u;
    // NOP
label_15ee3c:
    // 0x15ee3c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_15ee40:
    if (ctx->pc == 0x15EE40u) {
        ctx->pc = 0x15EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE3Cu;
        // 0x15ee40: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE44u;
        goto label_15ee44;
    }
    ctx->pc = 0x15EE3Cu;
    {
        const bool branch_taken_0x15ee3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE3Cu;
        // 0x15ee40: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ee3c) {
            ctx->pc = 0x15EE50u;
            goto label_15ee50;
        }
    }
    ctx->pc = 0x15EE44u;
label_15ee44:
    // 0x15ee44: 0x46000b07  neg.s       $f12, $f1
    ctx->pc = 0x15ee44u;
    ctx->f[12] = FPU_NEG_S(ctx->f[1]);
label_15ee48:
    // 0x15ee48: 0xc07d428  jal         func_1F50A0
label_15ee4c:
    if (ctx->pc == 0x15EE4Cu) {
        ctx->pc = 0x15EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE48u;
        // 0x15ee4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE50u;
        goto label_15ee50;
    }
    ctx->pc = 0x15EE48u;
    SET_GPR_U32(ctx, 31, 0x15EE50u);
    ctx->pc = 0x15EE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE48u;
    // 0x15ee4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x15EE48u, 0x15EE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EE50u;
label_15ee50:
    // 0x15ee50: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x15ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_15ee54:
    // 0x15ee54: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x15ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15ee58:
    // 0x15ee58: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x15ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_15ee5c:
    // 0x15ee5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15ee60:
    // 0x15ee60: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15ee60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_15ee64:
    // 0x15ee64: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15ee68:
    // 0x15ee68: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15ee6c:
    // 0x15ee6c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15ee70:
    // 0x15ee70: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x15ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_15ee74:
    // 0x15ee74: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15ee74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_15ee78:
    // 0x15ee78: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x15ee78u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_15ee7c:
    // 0x15ee7c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x15ee7cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_15ee80:
    // 0x15ee80: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x15ee80u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_15ee84:
    // 0x15ee84: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x15ee84u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_15ee88:
    // 0x15ee88: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x15ee88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_15ee8c:
    // 0x15ee8c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x15ee8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_15ee90:
    // 0x15ee90: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x15ee90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_15ee94:
    // 0x15ee94: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x15ee94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_15ee98:
    // 0x15ee98: 0xf8890000  sqc2        $vf9, 0x0($a0)
    ctx->pc = 0x15ee98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[9]));
label_15ee9c:
    // 0x15ee9c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_15eea0:
    // 0x15eea0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x15eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_15eea4:
    // 0x15eea4: 0x244274c0  addiu       $v0, $v0, 0x74C0
    ctx->pc = 0x15eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29888));
label_15eea8:
    // 0x15eea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15eeac:
    // 0x15eeac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15eeacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15eeb0:
    // 0x15eeb0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x15eeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15eeb4:
    // 0x15eeb4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x15eeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_15eeb8:
    // 0x15eeb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15eeb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15eebc:
    // 0x15eebc: 0x0  nop
    ctx->pc = 0x15eebcu;
    // NOP
label_15eec0:
    // 0x15eec0: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x15eec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_15eec4:
    // 0x15eec4: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
label_15eec8:
    if (ctx->pc == 0x15EEC8u) {
        ctx->pc = 0x15EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EEC4u;
        // 0x15eec8: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EECCu;
        goto label_15eecc;
    }
    ctx->pc = 0x15EEC4u;
    {
        const bool branch_taken_0x15eec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EEC4u;
        // 0x15eec8: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eec4) {
            ctx->pc = 0x15ECF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ecf8;
        }
    }
    ctx->pc = 0x15EECCu;
label_15eecc:
    // 0x15eecc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15eeccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_15eed0:
    // 0x15eed0: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x15eed0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_15eed4:
    // 0x15eed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15eed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15eed8:
    // 0x15eed8: 0x24a574c0  addiu       $a1, $a1, 0x74C0
    ctx->pc = 0x15eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29888));
label_15eedc:
    // 0x15eedc: 0x24c67490  addiu       $a2, $a2, 0x7490
    ctx->pc = 0x15eedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29840));
label_15eee0:
    // 0x15eee0: 0xc059568  jal         func_1655A0
label_15eee4:
    if (ctx->pc == 0x15EEE4u) {
        ctx->pc = 0x15EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EEE0u;
        // 0x15eee4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EEE8u;
        goto label_15eee8;
    }
    ctx->pc = 0x15EEE0u;
    SET_GPR_U32(ctx, 31, 0x15EEE8u);
    ctx->pc = 0x15EEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EEE0u;
    // 0x15eee4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1655A0u, 0x15EEE0u, 0x15EEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EEE8u;
label_15eee8:
    // 0x15eee8: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x15eee8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_15eeec:
    // 0x15eeec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15eeecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15eef0:
    // 0x15eef0: 0x1000000d  b           . + 4 + (0xD << 2)
label_15eef4:
    if (ctx->pc == 0x15EEF4u) {
        ctx->pc = 0x15EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EEF0u;
        // 0x15eef4: 0x24c67490  addiu       $a2, $a2, 0x7490 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EEF8u;
        goto label_15eef8;
    }
    ctx->pc = 0x15EEF0u;
    {
        const bool branch_taken_0x15eef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EEF0u;
        // 0x15eef4: 0x24c67490  addiu       $a2, $a2, 0x7490 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eef0) {
            ctx->pc = 0x15EF28u;
            goto label_15ef28;
        }
    }
    ctx->pc = 0x15EEF8u;
label_15eef8:
    // 0x15eef8: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x15eef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_15eefc:
    // 0x15eefc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15eefcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_15ef00:
    // 0x15ef00: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x15ef00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15ef04:
    // 0x15ef04: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15ef08:
    // 0x15ef08: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x15ef08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_15ef0c:
    // 0x15ef0c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x15ef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15ef10:
    // 0x15ef10: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15ef10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15ef14:
    // 0x15ef14: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15ef14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15ef18:
    // 0x15ef18: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15ef18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15ef1c:
    // 0x15ef1c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x15ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_15ef20:
    // 0x15ef20: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x15ef20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_15ef24:
    // 0x15ef24: 0xac642ca8  sw          $a0, 0x2CA8($v1)
    ctx->pc = 0x15ef24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11432), GPR_U32(ctx, 4));
label_15ef28:
    // 0x15ef28: 0xf1182a  slt         $v1, $a3, $s1
    ctx->pc = 0x15ef28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15ef2c:
    // 0x15ef2c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_15ef30:
    if (ctx->pc == 0x15EF30u) {
        ctx->pc = 0x15EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF2Cu;
        // 0x15ef30: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF34u;
        goto label_15ef34;
    }
    ctx->pc = 0x15EF2Cu;
    {
        const bool branch_taken_0x15ef2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF2Cu;
        // 0x15ef30: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef2c) {
            ctx->pc = 0x15EEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15eef8;
        }
    }
    ctx->pc = 0x15EF34u;
label_15ef34:
    // 0x15ef34: 0x10000004  b           . + 4 + (0x4 << 2)
label_15ef38:
    if (ctx->pc == 0x15EF38u) {
        ctx->pc = 0x15EF3Cu;
        goto label_15ef3c;
    }
    ctx->pc = 0x15EF34u;
    {
        const bool branch_taken_0x15ef34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ef34) {
            ctx->pc = 0x15EF48u;
            goto label_15ef48;
        }
    }
    ctx->pc = 0x15EF3Cu;
label_15ef3c:
    // 0x15ef3c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15ef40:
    // 0x15ef40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15ef40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15ef44:
    // 0x15ef44: 0xac602ca8  sw          $zero, 0x2CA8($v1)
    ctx->pc = 0x15ef44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11432), GPR_U32(ctx, 0));
label_15ef48:
    // 0x15ef48: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x15ef48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_15ef4c:
    // 0x15ef4c: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_15ef50:
    if (ctx->pc == 0x15EF50u) {
        ctx->pc = 0x15EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF4Cu;
        // 0x15ef50: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF54u;
        goto label_15ef54;
    }
    ctx->pc = 0x15EF4Cu;
    {
        const bool branch_taken_0x15ef4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF4Cu;
        // 0x15ef50: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef4c) {
            ctx->pc = 0x15EF3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ef3c;
        }
    }
    ctx->pc = 0x15EF54u;
label_15ef54:
    // 0x15ef54: 0x10000057  b           . + 4 + (0x57 << 2)
label_15ef58:
    if (ctx->pc == 0x15EF58u) {
        ctx->pc = 0x15EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF54u;
        // 0x15ef58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF5Cu;
        goto label_15ef5c;
    }
    ctx->pc = 0x15EF54u;
    {
        const bool branch_taken_0x15ef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF54u;
        // 0x15ef58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef54) {
            ctx->pc = 0x15F0B4u;
            goto label_15f0b4;
        }
    }
    ctx->pc = 0x15EF5Cu;
label_15ef5c:
    // 0x15ef5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15ef60:
    // 0x15ef60: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x15ef60u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_15ef64:
    // 0x15ef64: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15ef64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15ef68:
    // 0x15ef68: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x15ef68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_15ef6c:
    // 0x15ef6c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15ef70:
    // 0x15ef70: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x15ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_15ef74:
    // 0x15ef74: 0x84840228  lh          $a0, 0x228($a0)
    ctx->pc = 0x15ef74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 552)));
label_15ef78:
    // 0x15ef78: 0x1083004d  beq         $a0, $v1, . + 4 + (0x4D << 2)
label_15ef7c:
    if (ctx->pc == 0x15EF7Cu) {
        ctx->pc = 0x15EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF78u;
        // 0x15ef7c: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF80u;
        goto label_15ef80;
    }
    ctx->pc = 0x15EF78u;
    {
        const bool branch_taken_0x15ef78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF78u;
        // 0x15ef7c: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef78) {
            ctx->pc = 0x15F0B0u;
            goto label_15f0b0;
        }
    }
    ctx->pc = 0x15EF80u;
label_15ef80:
    // 0x15ef80: 0x1083004b  beq         $a0, $v1, . + 4 + (0x4B << 2)
label_15ef84:
    if (ctx->pc == 0x15EF84u) {
        ctx->pc = 0x15EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF80u;
        // 0x15ef84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF88u;
        goto label_15ef88;
    }
    ctx->pc = 0x15EF80u;
    {
        const bool branch_taken_0x15ef80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF80u;
        // 0x15ef84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef80) {
            ctx->pc = 0x15F0B0u;
            goto label_15f0b0;
        }
    }
    ctx->pc = 0x15EF88u;
label_15ef88:
    // 0x15ef88: 0x10000044  b           . + 4 + (0x44 << 2)
label_15ef8c:
    if (ctx->pc == 0x15EF8Cu) {
        ctx->pc = 0x15EF90u;
        goto label_15ef90;
    }
    ctx->pc = 0x15EF88u;
    {
        const bool branch_taken_0x15ef88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ef88) {
            ctx->pc = 0x15F09Cu;
            goto label_15f09c;
        }
    }
    ctx->pc = 0x15EF90u;
label_15ef90:
    // 0x15ef90: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x15ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_15ef94:
    // 0x15ef94: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15ef98:
    // 0x15ef98: 0x8c643cd8  lw          $a0, 0x3CD8($v1)
    ctx->pc = 0x15ef98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_15ef9c:
    // 0x15ef9c: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15ef9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15efa0:
    // 0x15efa0: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
label_15efa4:
    if (ctx->pc == 0x15EFA4u) {
        ctx->pc = 0x15EFA8u;
        goto label_15efa8;
    }
    ctx->pc = 0x15EFA0u;
    {
        const bool branch_taken_0x15efa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15efa0) {
            ctx->pc = 0x15F094u;
            goto label_15f094;
        }
    }
    ctx->pc = 0x15EFA8u;
label_15efa8:
    // 0x15efa8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15efa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15efac:
    // 0x15efac: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x15efacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_15efb0:
    // 0x15efb0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x15efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15efb4:
    // 0x15efb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15efb8:
    // 0x15efb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15efbc:
    // 0x15efbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15efc0:
    // 0x15efc0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15efc4:
    // 0x15efc4: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x15efc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_15efc8:
    // 0x15efc8: 0x320f809  jalr        $t9
label_15efcc:
    if (ctx->pc == 0x15EFCCu) {
        ctx->pc = 0x15EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFC8u;
        // 0x15efcc: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EFD0u;
        goto label_15efd0;
    }
    ctx->pc = 0x15EFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EFD0u);
        ctx->pc = 0x15EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFC8u;
        // 0x15efcc: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EFC8u, 0x15EFD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EFD0u;
label_15efd0:
    // 0x15efd0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x15efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_15efd4:
    // 0x15efd4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x15efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_15efd8:
    // 0x15efd8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15efdc:
    // 0x15efdc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x15efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15efe0:
    // 0x15efe0: 0x8c643cd8  lw          $a0, 0x3CD8($v1)
    ctx->pc = 0x15efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_15efe4:
    // 0x15efe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15efe8:
    // 0x15efe8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15efec:
    // 0x15efec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15efecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15eff0:
    // 0x15eff0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15eff4:
    // 0x15eff4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15eff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15eff8:
    // 0x15eff8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15eff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15effc:
    // 0x15effc: 0x320f809  jalr        $t9
label_15f000:
    if (ctx->pc == 0x15F000u) {
        ctx->pc = 0x15F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFFCu;
        // 0x15f000: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F004u;
        goto label_15f004;
    }
    ctx->pc = 0x15EFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F004u);
        ctx->pc = 0x15F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFFCu;
        // 0x15f000: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EFFCu, 0x15F004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F004u;
label_15f004:
    // 0x15f004: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15f004u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_15f008:
    // 0x15f008: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
label_15f00c:
    if (ctx->pc == 0x15F00Cu) {
        ctx->pc = 0x15F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F008u;
        // 0x15f00c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F010u;
        goto label_15f010;
    }
    ctx->pc = 0x15F008u;
    {
        const bool branch_taken_0x15f008 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F008u;
        // 0x15f00c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f008) {
            ctx->pc = 0x15F05Cu;
            goto label_15f05c;
        }
    }
    ctx->pc = 0x15F010u;
label_15f010:
    // 0x15f010: 0x1446000d  bne         $v0, $a2, . + 4 + (0xD << 2)
label_15f014:
    if (ctx->pc == 0x15F014u) {
        ctx->pc = 0x15F018u;
        goto label_15f018;
    }
    ctx->pc = 0x15F010u;
    {
        const bool branch_taken_0x15f010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x15f010) {
            ctx->pc = 0x15F048u;
            goto label_15f048;
        }
    }
    ctx->pc = 0x15F018u;
label_15f018:
    // 0x15f018: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f01c:
    // 0x15f01c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f020:
    // 0x15f020: 0x8c432cd8  lw          $v1, 0x2CD8($v0)
    ctx->pc = 0x15f020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f024:
    // 0x15f024: 0x8c6201fc  lw          $v0, 0x1FC($v1)
    ctx->pc = 0x15f024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_15f028:
    // 0x15f028: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15f028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15f02c:
    // 0x15f02c: 0xac6201fc  sw          $v0, 0x1FC($v1)
    ctx->pc = 0x15f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 508), GPR_U32(ctx, 2));
label_15f030:
    // 0x15f030: 0x846201fa  lh          $v0, 0x1FA($v1)
    ctx->pc = 0x15f030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 506)));
label_15f034:
    // 0x15f034: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x15f034u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_15f038:
    // 0x15f038: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15f03c:
    if (ctx->pc == 0x15F03Cu) {
        ctx->pc = 0x15F040u;
        goto label_15f040;
    }
    ctx->pc = 0x15F038u;
    {
        const bool branch_taken_0x15f038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f038) {
            ctx->pc = 0x15F048u;
            goto label_15f048;
        }
    }
    ctx->pc = 0x15F040u;
label_15f040:
    // 0x15f040: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15f040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15f044:
    // 0x15f044: 0xa46201fa  sh          $v0, 0x1FA($v1)
    ctx->pc = 0x15f044u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 506), (uint16_t)GPR_U32(ctx, 2));
label_15f048:
    // 0x15f048: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f04c:
    // 0x15f04c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f050:
    // 0x15f050: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f054:
    // 0x15f054: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x15f054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f058:
    // 0x15f058: 0xa05001d1  sb          $s0, 0x1D1($v0)
    ctx->pc = 0x15f058u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 465), (uint8_t)GPR_U32(ctx, 16));
label_15f05c:
    // 0x15f05c: 0x0  nop
    ctx->pc = 0x15f05cu;
    // NOP
label_15f060:
    // 0x15f060: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x15f060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_15f064:
    // 0x15f064: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x15f064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f068:
    // 0x15f068: 0x8c643cd8  lw          $a0, 0x3CD8($v1)
    ctx->pc = 0x15f068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_15f06c:
    // 0x15f06c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x15f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_15f070:
    // 0x15f070: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x15f070u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15f074:
    // 0x15f074: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f078:
    // 0x15f078: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15f078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15f07c:
    // 0x15f07c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f080:
    // 0x15f080: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f084:
    // 0x15f084: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f088:
    // 0x15f088: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x15f088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_15f08c:
    // 0x15f08c: 0x320f809  jalr        $t9
label_15f090:
    if (ctx->pc == 0x15F090u) {
        ctx->pc = 0x15F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F08Cu;
        // 0x15f090: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F094u;
        goto label_15f094;
    }
    ctx->pc = 0x15F08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F094u);
        ctx->pc = 0x15F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F08Cu;
        // 0x15f090: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F08Cu, 0x15F094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F094u;
label_15f094:
    // 0x15f094: 0x0  nop
    ctx->pc = 0x15f094u;
    // NOP
label_15f098:
    // 0x15f098: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15f098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15f09c:
    // 0x15f09c: 0x0  nop
    ctx->pc = 0x15f09cu;
    // NOP
label_15f0a0:
    // 0x15f0a0: 0x8e433dd8  lw          $v1, 0x3DD8($s2)
    ctx->pc = 0x15f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15832)));
label_15f0a4:
    // 0x15f0a4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15f0a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15f0a8:
    // 0x15f0a8: 0x1460ffb9  bnez        $v1, . + 4 + (-0x47 << 2)
label_15f0ac:
    if (ctx->pc == 0x15F0ACu) {
        ctx->pc = 0x15F0B0u;
        goto label_15f0b0;
    }
    ctx->pc = 0x15F0A8u;
    {
        const bool branch_taken_0x15f0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f0a8) {
            ctx->pc = 0x15EF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ef90;
        }
    }
    ctx->pc = 0x15F0B0u;
label_15f0b0:
    // 0x15f0b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15f0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15f0b4:
    // 0x15f0b4: 0x0  nop
    ctx->pc = 0x15f0b4u;
    // NOP
label_15f0b8:
    // 0x15f0b8: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x15f0b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_15f0bc:
    // 0x15f0bc: 0x1460ffa7  bnez        $v1, . + 4 + (-0x59 << 2)
label_15f0c0:
    if (ctx->pc == 0x15F0C0u) {
        ctx->pc = 0x15F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0BCu;
        // 0x15f0c0: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F0C4u;
        goto label_15f0c4;
    }
    ctx->pc = 0x15F0BCu;
    {
        const bool branch_taken_0x15f0bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0BCu;
        // 0x15f0c0: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0bc) {
            ctx->pc = 0x15EF5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ef5c;
        }
    }
    ctx->pc = 0x15F0C4u;
label_15f0c4:
    // 0x15f0c4: 0x1000028b  b           . + 4 + (0x28B << 2)
label_15f0c8:
    if (ctx->pc == 0x15F0C8u) {
        ctx->pc = 0x15F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0C4u;
        // 0x15f0c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F0CCu;
        goto label_15f0cc;
    }
    ctx->pc = 0x15F0C4u;
    {
        const bool branch_taken_0x15f0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0C4u;
        // 0x15f0c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0c4) {
            ctx->pc = 0x15FAF4u;
            goto label_15faf4;
        }
    }
    ctx->pc = 0x15F0CCu;
label_15f0cc:
    // 0x15f0cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15f0d0:
    // 0x15f0d0: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x15f0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_15f0d4:
    // 0x15f0d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15f0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15f0d8:
    // 0x15f0d8: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x15f0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_15f0dc:
    // 0x15f0dc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15f0e0:
    // 0x15f0e0: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x15f0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_15f0e4:
    // 0x15f0e4: 0x84a40228  lh          $a0, 0x228($a1)
    ctx->pc = 0x15f0e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 552)));
label_15f0e8:
    // 0x15f0e8: 0x10830280  beq         $a0, $v1, . + 4 + (0x280 << 2)
label_15f0ec:
    if (ctx->pc == 0x15F0ECu) {
        ctx->pc = 0x15F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0E8u;
        // 0x15f0ec: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F0F0u;
        goto label_15f0f0;
    }
    ctx->pc = 0x15F0E8u;
    {
        const bool branch_taken_0x15f0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0E8u;
        // 0x15f0ec: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0e8) {
            ctx->pc = 0x15FAECu;
            goto label_15faec;
        }
    }
    ctx->pc = 0x15F0F0u;
label_15f0f0:
    // 0x15f0f0: 0x1083027e  beq         $a0, $v1, . + 4 + (0x27E << 2)
label_15f0f4:
    if (ctx->pc == 0x15F0F4u) {
        ctx->pc = 0x15F0F8u;
        goto label_15f0f8;
    }
    ctx->pc = 0x15F0F0u;
    {
        const bool branch_taken_0x15f0f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15f0f0) {
            ctx->pc = 0x15FAECu;
            goto label_15faec;
        }
    }
    ctx->pc = 0x15F0F8u;
label_15f0f8:
    // 0x15f0f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15f0fc:
    // 0x15f0fc: 0x10830277  beq         $a0, $v1, . + 4 + (0x277 << 2)
label_15f100:
    if (ctx->pc == 0x15F100u) {
        ctx->pc = 0x15F104u;
        goto label_15f104;
    }
    ctx->pc = 0x15F0FCu;
    {
        const bool branch_taken_0x15f0fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15f0fc) {
            ctx->pc = 0x15FADCu;
            goto label_15fadc;
        }
    }
    ctx->pc = 0x15F104u;
label_15f104:
    // 0x15f104: 0x8cb70320  lw          $s7, 0x320($a1)
    ctx->pc = 0x15f104u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 800)));
label_15f108:
    // 0x15f108: 0x1000026e  b           . + 4 + (0x26E << 2)
label_15f10c:
    if (ctx->pc == 0x15F10Cu) {
        ctx->pc = 0x15F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F108u;
        // 0x15f10c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F110u;
        goto label_15f110;
    }
    ctx->pc = 0x15F108u;
    {
        const bool branch_taken_0x15f108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F108u;
        // 0x15f10c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f108) {
            ctx->pc = 0x15FAC4u;
            goto label_15fac4;
        }
    }
    ctx->pc = 0x15F110u;
label_15f110:
    // 0x15f110: 0x8e452c1c  lw          $a1, 0x2C1C($s2)
    ctx->pc = 0x15f110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11292)));
label_15f114:
    // 0x15f114: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x15f114u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_15f118:
    // 0x15f118: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x15f118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_15f11c:
    // 0x15f11c: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x15f11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_15f120:
    // 0x15f120: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15f124:
    // 0x15f124: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15f124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15f128:
    // 0x15f128: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f12c:
    // 0x15f12c: 0x8475000e  lh          $s5, 0xE($v1)
    ctx->pc = 0x15f12cu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_15f130:
    // 0x15f130: 0x6a0026e  bltz        $s5, . + 4 + (0x26E << 2)
label_15f134:
    if (ctx->pc == 0x15F134u) {
        ctx->pc = 0x15F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F130u;
        // 0x15f134: 0x151880  sll         $v1, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F138u;
        goto label_15f138;
    }
    ctx->pc = 0x15F130u;
    {
        const bool branch_taken_0x15f130 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x15F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F130u;
        // 0x15f134: 0x151880  sll         $v1, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f130) {
            ctx->pc = 0x15FAECu;
            goto label_15faec;
        }
    }
    ctx->pc = 0x15F138u;
label_15f138:
    // 0x15f138: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x15f138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_15f13c:
    // 0x15f13c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f140:
    // 0x15f140: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x15f140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15f144:
    // 0x15f144: 0x90e30041  lbu         $v1, 0x41($a3)
    ctx->pc = 0x15f144u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 65)));
label_15f148:
    // 0x15f148: 0x1460025c  bnez        $v1, . + 4 + (0x25C << 2)
label_15f14c:
    if (ctx->pc == 0x15F14Cu) {
        ctx->pc = 0x15F150u;
        goto label_15f150;
    }
    ctx->pc = 0x15F148u;
    {
        const bool branch_taken_0x15f148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f148) {
            ctx->pc = 0x15FABCu;
            goto label_15fabc;
        }
    }
    ctx->pc = 0x15F150u;
label_15f150:
    // 0x15f150: 0x84e40006  lh          $a0, 0x6($a3)
    ctx->pc = 0x15f150u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
label_15f154:
    // 0x15f154: 0x84e30004  lh          $v1, 0x4($a3)
    ctx->pc = 0x15f154u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_15f158:
    // 0x15f158: 0x14640258  bne         $v1, $a0, . + 4 + (0x258 << 2)
label_15f15c:
    if (ctx->pc == 0x15F15Cu) {
        ctx->pc = 0x15F160u;
        goto label_15f160;
    }
    ctx->pc = 0x15F158u;
    {
        const bool branch_taken_0x15f158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x15f158) {
            ctx->pc = 0x15FABCu;
            goto label_15fabc;
        }
    }
    ctx->pc = 0x15F160u;
label_15f160:
    // 0x15f160: 0x84e6000a  lh          $a2, 0xA($a3)
    ctx->pc = 0x15f160u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15f164:
    // 0x15f164: 0x8ce50030  lw          $a1, 0x30($a3)
    ctx->pc = 0x15f164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_15f168:
    // 0x15f168: 0x84e4000c  lh          $a0, 0xC($a3)
    ctx->pc = 0x15f168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
label_15f16c:
    // 0x15f16c: 0x84e30008  lh          $v1, 0x8($a3)
    ctx->pc = 0x15f16cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_15f170:
    // 0x15f170: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15f174:
    // 0x15f174: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x15f174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15f178:
    // 0x15f178: 0x1000006a  b           . + 4 + (0x6A << 2)
label_15f17c:
    if (ctx->pc == 0x15F17Cu) {
        ctx->pc = 0x15F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F178u;
        // 0x15f17c: 0x2038821  addu        $s1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F180u;
        goto label_15f180;
    }
    ctx->pc = 0x15F178u;
    {
        const bool branch_taken_0x15f178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F178u;
        // 0x15f17c: 0x2038821  addu        $s1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f178) {
            ctx->pc = 0x15F324u;
            goto label_15f324;
        }
    }
    ctx->pc = 0x15F180u;
label_15f180:
    // 0x15f180: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f184:
    // 0x15f184: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f188:
    // 0x15f188: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f18c:
    // 0x15f18c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x15f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15f190:
    // 0x15f190: 0x84630020  lh          $v1, 0x20($v1)
    ctx->pc = 0x15f190u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_15f194:
    // 0x15f194: 0x4600062  bltz        $v1, . + 4 + (0x62 << 2)
label_15f198:
    if (ctx->pc == 0x15F198u) {
        ctx->pc = 0x15F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F194u;
        // 0x15f198: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F19Cu;
        goto label_15f19c;
    }
    ctx->pc = 0x15F194u;
    {
        const bool branch_taken_0x15f194 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x15F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F194u;
        // 0x15f198: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f194) {
            ctx->pc = 0x15F320u;
            goto label_15f320;
        }
    }
    ctx->pc = 0x15F19Cu;
label_15f19c:
    // 0x15f19c: 0x10200060  beqz        $at, . + 4 + (0x60 << 2)
label_15f1a0:
    if (ctx->pc == 0x15F1A0u) {
        ctx->pc = 0x15F1A4u;
        goto label_15f1a4;
    }
    ctx->pc = 0x15F19Cu;
    {
        const bool branch_taken_0x15f19c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f19c) {
            ctx->pc = 0x15F320u;
            goto label_15f320;
        }
    }
    ctx->pc = 0x15F1A4u;
label_15f1a4:
    // 0x15f1a4: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15f1a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15f1a8:
    // 0x15f1a8: 0x1460005d  bnez        $v1, . + 4 + (0x5D << 2)
label_15f1ac:
    if (ctx->pc == 0x15F1ACu) {
        ctx->pc = 0x15F1B0u;
        goto label_15f1b0;
    }
    ctx->pc = 0x15F1A8u;
    {
        const bool branch_taken_0x15f1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f1a8) {
            ctx->pc = 0x15F320u;
            goto label_15f320;
        }
    }
    ctx->pc = 0x15F1B0u;
label_15f1b0:
    // 0x15f1b0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f1b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f1b4:
    // 0x15f1b4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f1b8:
    // 0x15f1b8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f1bc:
    // 0x15f1bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f1c0:
    // 0x15f1c0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f1c4:
    // 0x15f1c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f1c8:
    // 0x15f1c8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f1cc:
    // 0x15f1cc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x15f1ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_15f1d0:
    // 0x15f1d0: 0x320f809  jalr        $t9
label_15f1d4:
    if (ctx->pc == 0x15F1D4u) {
        ctx->pc = 0x15F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1D0u;
        // 0x15f1d4: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F1D8u;
        goto label_15f1d8;
    }
    ctx->pc = 0x15F1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F1D8u);
        ctx->pc = 0x15F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1D0u;
        // 0x15f1d4: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F1D0u, 0x15F1D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F1D8u;
label_15f1d8:
    // 0x15f1d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f1dc:
    // 0x15f1dc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x15f1dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f1e0:
    // 0x15f1e0: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x15f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f1e4:
    // 0x15f1e4: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f1e8:
    // 0x15f1e8: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f1ec:
    // 0x15f1ec: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f1f0:
    // 0x15f1f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f1f4:
    // 0x15f1f4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f1f8:
    // 0x15f1f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f1fc:
    // 0x15f1fc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f200:
    // 0x15f200: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f204:
    // 0x15f204: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x15f204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_15f208:
    // 0x15f208: 0x320f809  jalr        $t9
label_15f20c:
    if (ctx->pc == 0x15F20Cu) {
        ctx->pc = 0x15F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F208u;
        // 0x15f20c: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F210u;
        goto label_15f210;
    }
    ctx->pc = 0x15F208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F210u);
        ctx->pc = 0x15F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F208u;
        // 0x15f20c: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F208u, 0x15F210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F210u;
label_15f210:
    // 0x15f210: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15f210u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15f214:
    // 0x15f214: 0x14200033  bnez        $at, . + 4 + (0x33 << 2)
label_15f218:
    if (ctx->pc == 0x15F218u) {
        ctx->pc = 0x15F21Cu;
        goto label_15f21c;
    }
    ctx->pc = 0x15F214u;
    {
        const bool branch_taken_0x15f214 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f214) {
            ctx->pc = 0x15F2E4u;
            goto label_15f2e4;
        }
    }
    ctx->pc = 0x15F21Cu;
label_15f21c:
    // 0x15f21c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f220:
    // 0x15f220: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15f220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15f224:
    // 0x15f224: 0x531823  subu        $v1, $v0, $s3
    ctx->pc = 0x15f224u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f228:
    // 0x15f228: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f22c:
    // 0x15f22c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f230:
    // 0x15f230: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f234:
    // 0x15f234: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f238:
    // 0x15f238: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f23c:
    // 0x15f23c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f240:
    // 0x15f240: 0xa4640236  sh          $a0, 0x236($v1)
    ctx->pc = 0x15f240u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 566), (uint16_t)GPR_U32(ctx, 4));
label_15f244:
    // 0x15f244: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15f244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f248:
    // 0x15f248: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f24c:
    // 0x15f24c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15f24cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15f250:
    // 0x15f250: 0x320f809  jalr        $t9
label_15f254:
    if (ctx->pc == 0x15F254u) {
        ctx->pc = 0x15F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F250u;
        // 0x15f254: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F258u;
        goto label_15f258;
    }
    ctx->pc = 0x15F250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F258u);
        ctx->pc = 0x15F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F250u;
        // 0x15f254: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F250u, 0x15F258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F258u;
label_15f258:
    // 0x15f258: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15f258u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_15f25c:
    // 0x15f25c: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
label_15f260:
    if (ctx->pc == 0x15F260u) {
        ctx->pc = 0x15F264u;
        goto label_15f264;
    }
    ctx->pc = 0x15F25Cu;
    {
        const bool branch_taken_0x15f25c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f25c) {
            ctx->pc = 0x15F2E4u;
            goto label_15f2e4;
        }
    }
    ctx->pc = 0x15F264u;
label_15f264:
    // 0x15f264: 0x601000a  bgez        $s0, . + 4 + (0xA << 2)
label_15f268:
    if (ctx->pc == 0x15F268u) {
        ctx->pc = 0x15F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F264u;
        // 0x15f268: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F26Cu;
        goto label_15f26c;
    }
    ctx->pc = 0x15F264u;
    {
        const bool branch_taken_0x15f264 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x15F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F264u;
        // 0x15f268: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f264) {
            ctx->pc = 0x15F290u;
            goto label_15f290;
        }
    }
    ctx->pc = 0x15F26Cu;
label_15f26c:
    // 0x15f26c: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x15f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f270:
    // 0x15f270: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f274:
    // 0x15f274: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f278:
    // 0x15f278: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f27c:
    // 0x15f27c: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x15f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f280:
    // 0x15f280: 0x8483022c  lh          $v1, 0x22C($a0)
    ctx->pc = 0x15f280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_15f284:
    // 0x15f284: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
label_15f288:
    if (ctx->pc == 0x15F288u) {
        ctx->pc = 0x15F28Cu;
        goto label_15f28c;
    }
    ctx->pc = 0x15F284u;
    {
        const bool branch_taken_0x15f284 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x15f284) {
            ctx->pc = 0x15F290u;
            goto label_15f290;
        }
    }
    ctx->pc = 0x15F28Cu;
label_15f28c:
    // 0x15f28c: 0xa483022e  sh          $v1, 0x22E($a0)
    ctx->pc = 0x15f28cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 558), (uint16_t)GPR_U32(ctx, 3));
label_15f290:
    // 0x15f290: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x15f290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f294:
    // 0x15f294: 0x732023  subu        $a0, $v1, $s3
    ctx->pc = 0x15f294u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f298:
    // 0x15f298: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15f298u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15f29c:
    // 0x15f29c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f2a0:
    // 0x15f2a0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x15f2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_15f2a4:
    // 0x15f2a4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15f2a8:
    // 0x15f2a8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x15f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_15f2ac:
    // 0x15f2ac: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_15f2b0:
    if (ctx->pc == 0x15F2B0u) {
        ctx->pc = 0x15F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2ACu;
        // 0x15f2b0: 0xa490022c  sh          $s0, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F2B4u;
        goto label_15f2b4;
    }
    ctx->pc = 0x15F2ACu;
    {
        const bool branch_taken_0x15f2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2ACu;
        // 0x15f2b0: 0xa490022c  sh          $s0, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f2ac) {
            ctx->pc = 0x15F2CCu;
            goto label_15f2cc;
        }
    }
    ctx->pc = 0x15F2B4u;
label_15f2b4:
    // 0x15f2b4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f2b8:
    // 0x15f2b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f2bc:
    // 0x15f2bc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f2c0:
    // 0x15f2c0: 0x8c452cd8  lw          $a1, 0x2CD8($v0)
    ctx->pc = 0x15f2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f2c4:
    // 0x15f2c4: 0xc05b698  jal         func_16DA60
label_15f2c8:
    if (ctx->pc == 0x15F2C8u) {
        ctx->pc = 0x15F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2C4u;
        // 0x15f2c8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F2CCu;
        goto label_15f2cc;
    }
    ctx->pc = 0x15F2C4u;
    SET_GPR_U32(ctx, 31, 0x15F2CCu);
    ctx->pc = 0x15F2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F2C4u;
    // 0x15f2c8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA60u, 0x15F2C4u, 0x15F2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F2CCu;
label_15f2cc:
    // 0x15f2cc: 0x0  nop
    ctx->pc = 0x15f2ccu;
    // NOP
label_15f2d0:
    // 0x15f2d0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f2d4:
    // 0x15f2d4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f2d8:
    // 0x15f2d8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x15f2d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f2dc:
    // 0x15f2dc: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x15f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f2e0:
    // 0x15f2e0: 0xa05301d1  sb          $s3, 0x1D1($v0)
    ctx->pc = 0x15f2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 465), (uint8_t)GPR_U32(ctx, 19));
label_15f2e4:
    // 0x15f2e4: 0x0  nop
    ctx->pc = 0x15f2e4u;
    // NOP
label_15f2e8:
    // 0x15f2e8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f2ec:
    // 0x15f2ec: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f2f0:
    // 0x15f2f0: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f2f4:
    // 0x15f2f4: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f2f8:
    // 0x15f2f8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f2fc:
    // 0x15f2fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f300:
    // 0x15f300: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x15f300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15f304:
    // 0x15f304: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f308:
    // 0x15f308: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f30c:
    // 0x15f30c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f310:
    // 0x15f310: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f314:
    // 0x15f314: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x15f314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_15f318:
    // 0x15f318: 0x320f809  jalr        $t9
label_15f31c:
    if (ctx->pc == 0x15F31Cu) {
        ctx->pc = 0x15F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F318u;
        // 0x15f31c: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F320u;
        goto label_15f320;
    }
    ctx->pc = 0x15F318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F320u);
        ctx->pc = 0x15F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F318u;
        // 0x15f31c: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F318u, 0x15F320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F320u;
label_15f320:
    // 0x15f320: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15f320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15f324:
    // 0x15f324: 0x0  nop
    ctx->pc = 0x15f324u;
    // NOP
label_15f328:
    // 0x15f328: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x15f328u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15f32c:
    // 0x15f32c: 0x1460ff94  bnez        $v1, . + 4 + (-0x6C << 2)
label_15f330:
    if (ctx->pc == 0x15F330u) {
        ctx->pc = 0x15F334u;
        goto label_15f334;
    }
    ctx->pc = 0x15F32Cu;
    {
        const bool branch_taken_0x15f32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f32c) {
            ctx->pc = 0x15F180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f180;
        }
    }
    ctx->pc = 0x15F334u;
label_15f334:
    // 0x15f334: 0x8e442c1c  lw          $a0, 0x2C1C($s2)
    ctx->pc = 0x15f334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11292)));
label_15f338:
    // 0x15f338: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x15f338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_15f33c:
    // 0x15f33c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x15f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_15f340:
    // 0x15f340: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f344:
    // 0x15f344: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f348:
    // 0x15f348: 0x8c700030  lw          $s0, 0x30($v1)
    ctx->pc = 0x15f348u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_15f34c:
    // 0x15f34c: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x15f34cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_15f350:
    // 0x15f350: 0x1000003a  b           . + 4 + (0x3A << 2)
label_15f354:
    if (ctx->pc == 0x15F354u) {
        ctx->pc = 0x15F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F350u;
        // 0x15f354: 0x2038821  addu        $s1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F358u;
        goto label_15f358;
    }
    ctx->pc = 0x15F350u;
    {
        const bool branch_taken_0x15f350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F350u;
        // 0x15f354: 0x2038821  addu        $s1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f350) {
            ctx->pc = 0x15F43Cu;
            goto label_15f43c;
        }
    }
    ctx->pc = 0x15F358u;
label_15f358:
    // 0x15f358: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f35c:
    // 0x15f35c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f360:
    // 0x15f360: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f364:
    // 0x15f364: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15f364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15f368:
    // 0x15f368: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
label_15f36c:
    if (ctx->pc == 0x15F36Cu) {
        ctx->pc = 0x15F370u;
        goto label_15f370;
    }
    ctx->pc = 0x15F368u;
    {
        const bool branch_taken_0x15f368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f368) {
            ctx->pc = 0x15F434u;
            goto label_15f434;
        }
    }
    ctx->pc = 0x15F370u;
label_15f370:
    // 0x15f370: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f374:
    // 0x15f374: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f378:
    // 0x15f378: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f37c:
    // 0x15f37c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f380:
    // 0x15f380: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f384:
    // 0x15f384: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f388:
    // 0x15f388: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f38c:
    // 0x15f38c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x15f38cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_15f390:
    // 0x15f390: 0x320f809  jalr        $t9
label_15f394:
    if (ctx->pc == 0x15F394u) {
        ctx->pc = 0x15F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F390u;
        // 0x15f394: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F398u;
        goto label_15f398;
    }
    ctx->pc = 0x15F390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F398u);
        ctx->pc = 0x15F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F390u;
        // 0x15f394: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F390u, 0x15F398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F398u;
label_15f398:
    // 0x15f398: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15f398u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15f39c:
    // 0x15f39c: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
label_15f3a0:
    if (ctx->pc == 0x15F3A0u) {
        ctx->pc = 0x15F3A4u;
        goto label_15f3a4;
    }
    ctx->pc = 0x15F39Cu;
    {
        const bool branch_taken_0x15f39c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f39c) {
            ctx->pc = 0x15F434u;
            goto label_15f434;
        }
    }
    ctx->pc = 0x15F3A4u;
label_15f3a4:
    // 0x15f3a4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f3a8:
    // 0x15f3a8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15f3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15f3ac:
    // 0x15f3ac: 0x531823  subu        $v1, $v0, $s3
    ctx->pc = 0x15f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f3b0:
    // 0x15f3b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f3b4:
    // 0x15f3b4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f3b8:
    // 0x15f3b8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f3bc:
    // 0x15f3bc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f3c0:
    // 0x15f3c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f3c4:
    // 0x15f3c4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f3c8:
    // 0x15f3c8: 0xa4640236  sh          $a0, 0x236($v1)
    ctx->pc = 0x15f3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 566), (uint16_t)GPR_U32(ctx, 4));
label_15f3cc:
    // 0x15f3cc: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15f3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f3d0:
    // 0x15f3d0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f3d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f3d4:
    // 0x15f3d4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15f3d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15f3d8:
    // 0x15f3d8: 0x320f809  jalr        $t9
label_15f3dc:
    if (ctx->pc == 0x15F3DCu) {
        ctx->pc = 0x15F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3D8u;
        // 0x15f3dc: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F3E0u;
        goto label_15f3e0;
    }
    ctx->pc = 0x15F3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F3E0u);
        ctx->pc = 0x15F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3D8u;
        // 0x15f3dc: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F3D8u, 0x15F3E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F3E0u;
label_15f3e0:
    // 0x15f3e0: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15f3e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_15f3e4:
    // 0x15f3e4: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
label_15f3e8:
    if (ctx->pc == 0x15F3E8u) {
        ctx->pc = 0x15F3ECu;
        goto label_15f3ec;
    }
    ctx->pc = 0x15F3E4u;
    {
        const bool branch_taken_0x15f3e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f3e4) {
            ctx->pc = 0x15F434u;
            goto label_15f434;
        }
    }
    ctx->pc = 0x15F3ECu;
label_15f3ec:
    // 0x15f3ec: 0x601000a  bgez        $s0, . + 4 + (0xA << 2)
label_15f3f0:
    if (ctx->pc == 0x15F3F0u) {
        ctx->pc = 0x15F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3ECu;
        // 0x15f3f0: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F3F4u;
        goto label_15f3f4;
    }
    ctx->pc = 0x15F3ECu;
    {
        const bool branch_taken_0x15f3ec = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x15F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3ECu;
        // 0x15f3f0: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f3ec) {
            ctx->pc = 0x15F418u;
            goto label_15f418;
        }
    }
    ctx->pc = 0x15F3F4u;
label_15f3f4:
    // 0x15f3f4: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x15f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f3f8:
    // 0x15f3f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f3fc:
    // 0x15f3fc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f400:
    // 0x15f400: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f404:
    // 0x15f404: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x15f404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f408:
    // 0x15f408: 0x8483022c  lh          $v1, 0x22C($a0)
    ctx->pc = 0x15f408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_15f40c:
    // 0x15f40c: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
label_15f410:
    if (ctx->pc == 0x15F410u) {
        ctx->pc = 0x15F414u;
        goto label_15f414;
    }
    ctx->pc = 0x15F40Cu;
    {
        const bool branch_taken_0x15f40c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x15f40c) {
            ctx->pc = 0x15F418u;
            goto label_15f418;
        }
    }
    ctx->pc = 0x15F414u;
label_15f414:
    // 0x15f414: 0xa483022e  sh          $v1, 0x22E($a0)
    ctx->pc = 0x15f414u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 558), (uint16_t)GPR_U32(ctx, 3));
label_15f418:
    // 0x15f418: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x15f418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f41c:
    // 0x15f41c: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x15f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f420:
    // 0x15f420: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f424:
    // 0x15f424: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f428:
    // 0x15f428: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f42c:
    // 0x15f42c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f430:
    // 0x15f430: 0xa470022c  sh          $s0, 0x22C($v1)
    ctx->pc = 0x15f430u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 556), (uint16_t)GPR_U32(ctx, 16));
label_15f434:
    // 0x15f434: 0x0  nop
    ctx->pc = 0x15f434u;
    // NOP
label_15f438:
    // 0x15f438: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15f438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15f43c:
    // 0x15f43c: 0x0  nop
    ctx->pc = 0x15f43cu;
    // NOP
label_15f440:
    // 0x15f440: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x15f440u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15f444:
    // 0x15f444: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
label_15f448:
    if (ctx->pc == 0x15F448u) {
        ctx->pc = 0x15F44Cu;
        goto label_15f44c;
    }
    ctx->pc = 0x15F444u;
    {
        const bool branch_taken_0x15f444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f444) {
            ctx->pc = 0x15F358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f358;
        }
    }
    ctx->pc = 0x15F44Cu;
label_15f44c:
    // 0x15f44c: 0x8e432c1c  lw          $v1, 0x2C1C($s2)
    ctx->pc = 0x15f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11292)));
label_15f450:
    // 0x15f450: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x15f450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_15f454:
    // 0x15f454: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x15f454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_15f458:
    // 0x15f458: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15f45c:
    // 0x15f45c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f460:
    // 0x15f460: 0x8466000a  lh          $a2, 0xA($v1)
    ctx->pc = 0x15f460u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_15f464:
    // 0x15f464: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x15f464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_15f468:
    // 0x15f468: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x15f468u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_15f46c:
    // 0x15f46c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15f470:
    // 0x15f470: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x15f470u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_15f474:
    // 0x15f474: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x15f474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15f478:
    // 0x15f478: 0x1000006c  b           . + 4 + (0x6C << 2)
label_15f47c:
    if (ctx->pc == 0x15F47Cu) {
        ctx->pc = 0x15F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F478u;
        // 0x15f47c: 0x2038821  addu        $s1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F480u;
        goto label_15f480;
    }
    ctx->pc = 0x15F478u;
    {
        const bool branch_taken_0x15f478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F478u;
        // 0x15f47c: 0x2038821  addu        $s1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f478) {
            ctx->pc = 0x15F62Cu;
            goto label_15f62c;
        }
    }
    ctx->pc = 0x15F480u;
label_15f480:
    // 0x15f480: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f484:
    // 0x15f484: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f488:
    // 0x15f488: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f48c:
    // 0x15f48c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x15f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15f490:
    // 0x15f490: 0x84650020  lh          $a1, 0x20($v1)
    ctx->pc = 0x15f490u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_15f494:
    // 0x15f494: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x15f494u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_15f498:
    // 0x15f498: 0x14600063  bnez        $v1, . + 4 + (0x63 << 2)
label_15f49c:
    if (ctx->pc == 0x15F49Cu) {
        ctx->pc = 0x15F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F498u;
        // 0x15f49c: 0x28a10040  slti        $at, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F4A0u;
        goto label_15f4a0;
    }
    ctx->pc = 0x15F498u;
    {
        const bool branch_taken_0x15f498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F498u;
        // 0x15f49c: 0x28a10040  slti        $at, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f498) {
            ctx->pc = 0x15F628u;
            goto label_15f628;
        }
    }
    ctx->pc = 0x15F4A0u;
label_15f4a0:
    // 0x15f4a0: 0x10200061  beqz        $at, . + 4 + (0x61 << 2)
label_15f4a4:
    if (ctx->pc == 0x15F4A4u) {
        ctx->pc = 0x15F4A8u;
        goto label_15f4a8;
    }
    ctx->pc = 0x15F4A0u;
    {
        const bool branch_taken_0x15f4a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f4a0) {
            ctx->pc = 0x15F628u;
            goto label_15f628;
        }
    }
    ctx->pc = 0x15F4A8u;
label_15f4a8:
    // 0x15f4a8: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15f4a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15f4ac:
    // 0x15f4ac: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
label_15f4b0:
    if (ctx->pc == 0x15F4B0u) {
        ctx->pc = 0x15F4B4u;
        goto label_15f4b4;
    }
    ctx->pc = 0x15F4ACu;
    {
        const bool branch_taken_0x15f4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f4ac) {
            ctx->pc = 0x15F628u;
            goto label_15f628;
        }
    }
    ctx->pc = 0x15F4B4u;
label_15f4b4:
    // 0x15f4b4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f4b8:
    // 0x15f4b8: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f4bc:
    // 0x15f4bc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f4c0:
    // 0x15f4c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f4c4:
    // 0x15f4c4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f4c8:
    // 0x15f4c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f4cc:
    // 0x15f4cc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f4d0:
    // 0x15f4d0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x15f4d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_15f4d4:
    // 0x15f4d4: 0x320f809  jalr        $t9
label_15f4d8:
    if (ctx->pc == 0x15F4D8u) {
        ctx->pc = 0x15F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4D4u;
        // 0x15f4d8: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F4DCu;
        goto label_15f4dc;
    }
    ctx->pc = 0x15F4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F4DCu);
        ctx->pc = 0x15F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4D4u;
        // 0x15f4d8: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F4D4u, 0x15F4DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F4DCu;
label_15f4dc:
    // 0x15f4dc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f4e0:
    // 0x15f4e0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x15f4e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f4e4:
    // 0x15f4e4: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x15f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f4e8:
    // 0x15f4e8: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f4ec:
    // 0x15f4ec: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f4f0:
    // 0x15f4f0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f4f4:
    // 0x15f4f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f4f8:
    // 0x15f4f8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f4fc:
    // 0x15f4fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f500:
    // 0x15f500: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f504:
    // 0x15f504: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f508:
    // 0x15f508: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x15f508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_15f50c:
    // 0x15f50c: 0x320f809  jalr        $t9
label_15f510:
    if (ctx->pc == 0x15F510u) {
        ctx->pc = 0x15F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F50Cu;
        // 0x15f510: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F514u;
        goto label_15f514;
    }
    ctx->pc = 0x15F50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F514u);
        ctx->pc = 0x15F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F50Cu;
        // 0x15f510: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F50Cu, 0x15F514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F514u;
label_15f514:
    // 0x15f514: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15f514u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15f518:
    // 0x15f518: 0x14200034  bnez        $at, . + 4 + (0x34 << 2)
label_15f51c:
    if (ctx->pc == 0x15F51Cu) {
        ctx->pc = 0x15F520u;
        goto label_15f520;
    }
    ctx->pc = 0x15F518u;
    {
        const bool branch_taken_0x15f518 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f518) {
            ctx->pc = 0x15F5ECu;
            goto label_15f5ec;
        }
    }
    ctx->pc = 0x15F520u;
label_15f520:
    // 0x15f520: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f524:
    // 0x15f524: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15f524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15f528:
    // 0x15f528: 0x531823  subu        $v1, $v0, $s3
    ctx->pc = 0x15f528u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f52c:
    // 0x15f52c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f530:
    // 0x15f530: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f534:
    // 0x15f534: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f538:
    // 0x15f538: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f53c:
    // 0x15f53c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f540:
    // 0x15f540: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f544:
    // 0x15f544: 0xa4640236  sh          $a0, 0x236($v1)
    ctx->pc = 0x15f544u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 566), (uint16_t)GPR_U32(ctx, 4));
label_15f548:
    // 0x15f548: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15f548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f54c:
    // 0x15f54c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f54cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f550:
    // 0x15f550: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15f550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15f554:
    // 0x15f554: 0x320f809  jalr        $t9
label_15f558:
    if (ctx->pc == 0x15F558u) {
        ctx->pc = 0x15F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F554u;
        // 0x15f558: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F55Cu;
        goto label_15f55c;
    }
    ctx->pc = 0x15F554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F55Cu);
        ctx->pc = 0x15F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F554u;
        // 0x15f558: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F554u, 0x15F55Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F55Cu;
label_15f55c:
    // 0x15f55c: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15f55cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_15f560:
    // 0x15f560: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_15f564:
    if (ctx->pc == 0x15F564u) {
        ctx->pc = 0x15F568u;
        goto label_15f568;
    }
    ctx->pc = 0x15F560u;
    {
        const bool branch_taken_0x15f560 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f560) {
            ctx->pc = 0x15F5ECu;
            goto label_15f5ec;
        }
    }
    ctx->pc = 0x15F568u;
label_15f568:
    // 0x15f568: 0x601000a  bgez        $s0, . + 4 + (0xA << 2)
label_15f56c:
    if (ctx->pc == 0x15F56Cu) {
        ctx->pc = 0x15F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F568u;
        // 0x15f56c: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F570u;
        goto label_15f570;
    }
    ctx->pc = 0x15F568u;
    {
        const bool branch_taken_0x15f568 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x15F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F568u;
        // 0x15f56c: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f568) {
            ctx->pc = 0x15F594u;
            goto label_15f594;
        }
    }
    ctx->pc = 0x15F570u;
label_15f570:
    // 0x15f570: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x15f570u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f574:
    // 0x15f574: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f578:
    // 0x15f578: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f57c:
    // 0x15f57c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f580:
    // 0x15f580: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x15f580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f584:
    // 0x15f584: 0x8483022c  lh          $v1, 0x22C($a0)
    ctx->pc = 0x15f584u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_15f588:
    // 0x15f588: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
label_15f58c:
    if (ctx->pc == 0x15F58Cu) {
        ctx->pc = 0x15F590u;
        goto label_15f590;
    }
    ctx->pc = 0x15F588u;
    {
        const bool branch_taken_0x15f588 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x15f588) {
            ctx->pc = 0x15F594u;
            goto label_15f594;
        }
    }
    ctx->pc = 0x15F590u;
label_15f590:
    // 0x15f590: 0xa483022e  sh          $v1, 0x22E($a0)
    ctx->pc = 0x15f590u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 558), (uint16_t)GPR_U32(ctx, 3));
label_15f594:
    // 0x15f594: 0x0  nop
    ctx->pc = 0x15f594u;
    // NOP
label_15f598:
    // 0x15f598: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x15f598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f59c:
    // 0x15f59c: 0x732023  subu        $a0, $v1, $s3
    ctx->pc = 0x15f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f5a0:
    // 0x15f5a0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15f5a4:
    // 0x15f5a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f5a8:
    // 0x15f5a8: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x15f5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_15f5ac:
    // 0x15f5ac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f5acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15f5b0:
    // 0x15f5b0: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x15f5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_15f5b4:
    // 0x15f5b4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_15f5b8:
    if (ctx->pc == 0x15F5B8u) {
        ctx->pc = 0x15F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5B4u;
        // 0x15f5b8: 0xa490022c  sh          $s0, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F5BCu;
        goto label_15f5bc;
    }
    ctx->pc = 0x15F5B4u;
    {
        const bool branch_taken_0x15f5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5B4u;
        // 0x15f5b8: 0xa490022c  sh          $s0, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f5b4) {
            ctx->pc = 0x15F5D4u;
            goto label_15f5d4;
        }
    }
    ctx->pc = 0x15F5BCu;
label_15f5bc:
    // 0x15f5bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f5c0:
    // 0x15f5c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f5c4:
    // 0x15f5c4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f5c8:
    // 0x15f5c8: 0x8c452cd8  lw          $a1, 0x2CD8($v0)
    ctx->pc = 0x15f5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f5cc:
    // 0x15f5cc: 0xc05b698  jal         func_16DA60
label_15f5d0:
    if (ctx->pc == 0x15F5D0u) {
        ctx->pc = 0x15F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5CCu;
        // 0x15f5d0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F5D4u;
        goto label_15f5d4;
    }
    ctx->pc = 0x15F5CCu;
    SET_GPR_U32(ctx, 31, 0x15F5D4u);
    ctx->pc = 0x15F5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F5CCu;
    // 0x15f5d0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA60u, 0x15F5CCu, 0x15F5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F5D4u;
label_15f5d4:
    // 0x15f5d4: 0x0  nop
    ctx->pc = 0x15f5d4u;
    // NOP
label_15f5d8:
    // 0x15f5d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f5dc:
    // 0x15f5dc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f5e0:
    // 0x15f5e0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x15f5e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f5e4:
    // 0x15f5e4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x15f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f5e8:
    // 0x15f5e8: 0xa05301d1  sb          $s3, 0x1D1($v0)
    ctx->pc = 0x15f5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 465), (uint8_t)GPR_U32(ctx, 19));
label_15f5ec:
    // 0x15f5ec: 0x0  nop
    ctx->pc = 0x15f5ecu;
    // NOP
label_15f5f0:
    // 0x15f5f0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f5f4:
    // 0x15f5f4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f5f8:
    // 0x15f5f8: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f5fc:
    // 0x15f5fc: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f600:
    // 0x15f600: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f600u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f604:
    // 0x15f604: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f608:
    // 0x15f608: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x15f608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15f60c:
    // 0x15f60c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f610:
    // 0x15f610: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f614:
    // 0x15f614: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f618:
    // 0x15f618: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f61c:
    // 0x15f61c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x15f61cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_15f620:
    // 0x15f620: 0x320f809  jalr        $t9
label_15f624:
    if (ctx->pc == 0x15F624u) {
        ctx->pc = 0x15F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F620u;
        // 0x15f624: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F628u;
        goto label_15f628;
    }
    ctx->pc = 0x15F620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F628u);
        ctx->pc = 0x15F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F620u;
        // 0x15f624: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F620u, 0x15F628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F628u;
label_15f628:
    // 0x15f628: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15f628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15f62c:
    // 0x15f62c: 0x0  nop
    ctx->pc = 0x15f62cu;
    // NOP
label_15f630:
    // 0x15f630: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x15f630u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15f634:
    // 0x15f634: 0x1460ff92  bnez        $v1, . + 4 + (-0x6E << 2)
label_15f638:
    if (ctx->pc == 0x15F638u) {
        ctx->pc = 0x15F63Cu;
        goto label_15f63c;
    }
    ctx->pc = 0x15F634u;
    {
        const bool branch_taken_0x15f634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f634) {
            ctx->pc = 0x15F480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f480;
        }
    }
    ctx->pc = 0x15F63Cu;
label_15f63c:
    // 0x15f63c: 0x8e442c1c  lw          $a0, 0x2C1C($s2)
    ctx->pc = 0x15f63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11292)));
label_15f640:
    // 0x15f640: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x15f640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_15f644:
    // 0x15f644: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x15f644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_15f648:
    // 0x15f648: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f64c:
    // 0x15f64c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f650:
    // 0x15f650: 0x8465000a  lh          $a1, 0xA($v1)
    ctx->pc = 0x15f650u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_15f654:
    // 0x15f654: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x15f654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_15f658:
    // 0x15f658: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x15f658u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_15f65c:
    // 0x15f65c: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x15f65cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15f660:
    // 0x15f660: 0x1000003a  b           . + 4 + (0x3A << 2)
label_15f664:
    if (ctx->pc == 0x15F664u) {
        ctx->pc = 0x15F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F660u;
        // 0x15f664: 0x708821  addu        $s1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F668u;
        goto label_15f668;
    }
    ctx->pc = 0x15F660u;
    {
        const bool branch_taken_0x15f660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F660u;
        // 0x15f664: 0x708821  addu        $s1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f660) {
            ctx->pc = 0x15F74Cu;
            goto label_15f74c;
        }
    }
    ctx->pc = 0x15F668u;
label_15f668:
    // 0x15f668: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f66c:
    // 0x15f66c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f670:
    // 0x15f670: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f674:
    // 0x15f674: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15f674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15f678:
    // 0x15f678: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
label_15f67c:
    if (ctx->pc == 0x15F67Cu) {
        ctx->pc = 0x15F680u;
        goto label_15f680;
    }
    ctx->pc = 0x15F678u;
    {
        const bool branch_taken_0x15f678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f678) {
            ctx->pc = 0x15F744u;
            goto label_15f744;
        }
    }
    ctx->pc = 0x15F680u;
label_15f680:
    // 0x15f680: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f684:
    // 0x15f684: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f688:
    // 0x15f688: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f68c:
    // 0x15f68c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f690:
    // 0x15f690: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f694:
    // 0x15f694: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f698:
    // 0x15f698: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f69c:
    // 0x15f69c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x15f69cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_15f6a0:
    // 0x15f6a0: 0x320f809  jalr        $t9
label_15f6a4:
    if (ctx->pc == 0x15F6A4u) {
        ctx->pc = 0x15F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6A0u;
        // 0x15f6a4: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F6A8u;
        goto label_15f6a8;
    }
    ctx->pc = 0x15F6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F6A8u);
        ctx->pc = 0x15F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6A0u;
        // 0x15f6a4: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F6A0u, 0x15F6A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F6A8u;
label_15f6a8:
    // 0x15f6a8: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15f6a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15f6ac:
    // 0x15f6ac: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
label_15f6b0:
    if (ctx->pc == 0x15F6B0u) {
        ctx->pc = 0x15F6B4u;
        goto label_15f6b4;
    }
    ctx->pc = 0x15F6ACu;
    {
        const bool branch_taken_0x15f6ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f6ac) {
            ctx->pc = 0x15F744u;
            goto label_15f744;
        }
    }
    ctx->pc = 0x15F6B4u;
label_15f6b4:
    // 0x15f6b4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f6b8:
    // 0x15f6b8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15f6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15f6bc:
    // 0x15f6bc: 0x531823  subu        $v1, $v0, $s3
    ctx->pc = 0x15f6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f6c0:
    // 0x15f6c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f6c4:
    // 0x15f6c4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f6c8:
    // 0x15f6c8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f6cc:
    // 0x15f6cc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f6d0:
    // 0x15f6d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f6d4:
    // 0x15f6d4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f6d8:
    // 0x15f6d8: 0xa4640236  sh          $a0, 0x236($v1)
    ctx->pc = 0x15f6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 566), (uint16_t)GPR_U32(ctx, 4));
label_15f6dc:
    // 0x15f6dc: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15f6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f6e0:
    // 0x15f6e0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f6e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f6e4:
    // 0x15f6e4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15f6e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15f6e8:
    // 0x15f6e8: 0x320f809  jalr        $t9
label_15f6ec:
    if (ctx->pc == 0x15F6ECu) {
        ctx->pc = 0x15F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6E8u;
        // 0x15f6ec: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F6F0u;
        goto label_15f6f0;
    }
    ctx->pc = 0x15F6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F6F0u);
        ctx->pc = 0x15F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6E8u;
        // 0x15f6ec: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F6E8u, 0x15F6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F6F0u;
label_15f6f0:
    // 0x15f6f0: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15f6f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_15f6f4:
    // 0x15f6f4: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
label_15f6f8:
    if (ctx->pc == 0x15F6F8u) {
        ctx->pc = 0x15F6FCu;
        goto label_15f6fc;
    }
    ctx->pc = 0x15F6F4u;
    {
        const bool branch_taken_0x15f6f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f6f4) {
            ctx->pc = 0x15F744u;
            goto label_15f744;
        }
    }
    ctx->pc = 0x15F6FCu;
label_15f6fc:
    // 0x15f6fc: 0x601000a  bgez        $s0, . + 4 + (0xA << 2)
label_15f700:
    if (ctx->pc == 0x15F700u) {
        ctx->pc = 0x15F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6FCu;
        // 0x15f700: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F704u;
        goto label_15f704;
    }
    ctx->pc = 0x15F6FCu;
    {
        const bool branch_taken_0x15f6fc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x15F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6FCu;
        // 0x15f700: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f6fc) {
            ctx->pc = 0x15F728u;
            goto label_15f728;
        }
    }
    ctx->pc = 0x15F704u;
label_15f704:
    // 0x15f704: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x15f704u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f708:
    // 0x15f708: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f70c:
    // 0x15f70c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f710:
    // 0x15f710: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f714:
    // 0x15f714: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x15f714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f718:
    // 0x15f718: 0x8483022c  lh          $v1, 0x22C($a0)
    ctx->pc = 0x15f718u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_15f71c:
    // 0x15f71c: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
label_15f720:
    if (ctx->pc == 0x15F720u) {
        ctx->pc = 0x15F724u;
        goto label_15f724;
    }
    ctx->pc = 0x15F71Cu;
    {
        const bool branch_taken_0x15f71c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x15f71c) {
            ctx->pc = 0x15F728u;
            goto label_15f728;
        }
    }
    ctx->pc = 0x15F724u;
label_15f724:
    // 0x15f724: 0xa483022e  sh          $v1, 0x22E($a0)
    ctx->pc = 0x15f724u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 558), (uint16_t)GPR_U32(ctx, 3));
label_15f728:
    // 0x15f728: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x15f728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f72c:
    // 0x15f72c: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x15f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f730:
    // 0x15f730: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f734:
    // 0x15f734: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f738:
    // 0x15f738: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f73c:
    // 0x15f73c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f740:
    // 0x15f740: 0xa470022c  sh          $s0, 0x22C($v1)
    ctx->pc = 0x15f740u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 556), (uint16_t)GPR_U32(ctx, 16));
label_15f744:
    // 0x15f744: 0x0  nop
    ctx->pc = 0x15f744u;
    // NOP
label_15f748:
    // 0x15f748: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15f748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15f74c:
    // 0x15f74c: 0x0  nop
    ctx->pc = 0x15f74cu;
    // NOP
label_15f750:
    // 0x15f750: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x15f750u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15f754:
    // 0x15f754: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
label_15f758:
    if (ctx->pc == 0x15F758u) {
        ctx->pc = 0x15F75Cu;
        goto label_15f75c;
    }
    ctx->pc = 0x15F754u;
    {
        const bool branch_taken_0x15f754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f754) {
            ctx->pc = 0x15F668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f668;
        }
    }
    ctx->pc = 0x15F75Cu;
label_15f75c:
    // 0x15f75c: 0x8e432c1c  lw          $v1, 0x2C1C($s2)
    ctx->pc = 0x15f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11292)));
label_15f760:
    // 0x15f760: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x15f760u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_15f764:
    // 0x15f764: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x15f764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_15f768:
    // 0x15f768: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f768u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15f76c:
    // 0x15f76c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f770:
    // 0x15f770: 0x8466000a  lh          $a2, 0xA($v1)
    ctx->pc = 0x15f770u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_15f774:
    // 0x15f774: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x15f774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_15f778:
    // 0x15f778: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x15f778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_15f77c:
    // 0x15f77c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15f780:
    // 0x15f780: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x15f780u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_15f784:
    // 0x15f784: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x15f784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15f788:
    // 0x15f788: 0x10000074  b           . + 4 + (0x74 << 2)
label_15f78c:
    if (ctx->pc == 0x15F78Cu) {
        ctx->pc = 0x15F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F788u;
        // 0x15f78c: 0x2038821  addu        $s1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F790u;
        goto label_15f790;
    }
    ctx->pc = 0x15F788u;
    {
        const bool branch_taken_0x15f788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F788u;
        // 0x15f78c: 0x2038821  addu        $s1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f788) {
            ctx->pc = 0x15F95Cu;
            goto label_15f95c;
        }
    }
    ctx->pc = 0x15F790u;
label_15f790:
    // 0x15f790: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f794:
    // 0x15f794: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f798:
    // 0x15f798: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f79c:
    // 0x15f79c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x15f79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15f7a0:
    // 0x15f7a0: 0x84630020  lh          $v1, 0x20($v1)
    ctx->pc = 0x15f7a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_15f7a4:
    // 0x15f7a4: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x15f7a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_15f7a8:
    // 0x15f7a8: 0x1460006b  bnez        $v1, . + 4 + (0x6B << 2)
label_15f7ac:
    if (ctx->pc == 0x15F7ACu) {
        ctx->pc = 0x15F7B0u;
        goto label_15f7b0;
    }
    ctx->pc = 0x15F7A8u;
    {
        const bool branch_taken_0x15f7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f7a8) {
            ctx->pc = 0x15F958u;
            goto label_15f958;
        }
    }
    ctx->pc = 0x15F7B0u;
label_15f7b0:
    // 0x15f7b0: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15f7b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15f7b4:
    // 0x15f7b4: 0x14600068  bnez        $v1, . + 4 + (0x68 << 2)
label_15f7b8:
    if (ctx->pc == 0x15F7B8u) {
        ctx->pc = 0x15F7BCu;
        goto label_15f7bc;
    }
    ctx->pc = 0x15F7B4u;
    {
        const bool branch_taken_0x15f7b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f7b4) {
            ctx->pc = 0x15F958u;
            goto label_15f958;
        }
    }
    ctx->pc = 0x15F7BCu;
label_15f7bc:
    // 0x15f7bc: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f7bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f7c0:
    // 0x15f7c0: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f7c4:
    // 0x15f7c4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f7c8:
    // 0x15f7c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f7cc:
    // 0x15f7cc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f7d0:
    // 0x15f7d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f7d4:
    // 0x15f7d4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f7d8:
    // 0x15f7d8: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x15f7d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_15f7dc:
    // 0x15f7dc: 0x320f809  jalr        $t9
label_15f7e0:
    if (ctx->pc == 0x15F7E0u) {
        ctx->pc = 0x15F7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7DCu;
        // 0x15f7e0: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F7E4u;
        goto label_15f7e4;
    }
    ctx->pc = 0x15F7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F7E4u);
        ctx->pc = 0x15F7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7DCu;
        // 0x15f7e0: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F7DCu, 0x15F7E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F7E4u;
label_15f7e4:
    // 0x15f7e4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f7e8:
    // 0x15f7e8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x15f7e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f7ec:
    // 0x15f7ec: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x15f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f7f0:
    // 0x15f7f0: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f7f4:
    // 0x15f7f4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f7f8:
    // 0x15f7f8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f7fc:
    // 0x15f7fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f800:
    // 0x15f800: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f804:
    // 0x15f804: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f808:
    // 0x15f808: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f80c:
    // 0x15f80c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f80cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f810:
    // 0x15f810: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x15f810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_15f814:
    // 0x15f814: 0x320f809  jalr        $t9
label_15f818:
    if (ctx->pc == 0x15F818u) {
        ctx->pc = 0x15F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F814u;
        // 0x15f818: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F81Cu;
        goto label_15f81c;
    }
    ctx->pc = 0x15F814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F81Cu);
        ctx->pc = 0x15F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F814u;
        // 0x15f818: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F814u, 0x15F81Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F81Cu;
label_15f81c:
    // 0x15f81c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15f81cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15f820:
    // 0x15f820: 0x14200034  bnez        $at, . + 4 + (0x34 << 2)
label_15f824:
    if (ctx->pc == 0x15F824u) {
        ctx->pc = 0x15F828u;
        goto label_15f828;
    }
    ctx->pc = 0x15F820u;
    {
        const bool branch_taken_0x15f820 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f820) {
            ctx->pc = 0x15F8F4u;
            goto label_15f8f4;
        }
    }
    ctx->pc = 0x15F828u;
label_15f828:
    // 0x15f828: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f82c:
    // 0x15f82c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15f830:
    // 0x15f830: 0x531823  subu        $v1, $v0, $s3
    ctx->pc = 0x15f830u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f834:
    // 0x15f834: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f838:
    // 0x15f838: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f83c:
    // 0x15f83c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f840:
    // 0x15f840: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f844:
    // 0x15f844: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f848:
    // 0x15f848: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f84c:
    // 0x15f84c: 0xa4640236  sh          $a0, 0x236($v1)
    ctx->pc = 0x15f84cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 566), (uint16_t)GPR_U32(ctx, 4));
label_15f850:
    // 0x15f850: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15f850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f854:
    // 0x15f854: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f858:
    // 0x15f858: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15f858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15f85c:
    // 0x15f85c: 0x320f809  jalr        $t9
label_15f860:
    if (ctx->pc == 0x15F860u) {
        ctx->pc = 0x15F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F85Cu;
        // 0x15f860: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F864u;
        goto label_15f864;
    }
    ctx->pc = 0x15F85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F864u);
        ctx->pc = 0x15F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F85Cu;
        // 0x15f860: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F85Cu, 0x15F864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F864u;
label_15f864:
    // 0x15f864: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15f864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_15f868:
    // 0x15f868: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_15f86c:
    if (ctx->pc == 0x15F86Cu) {
        ctx->pc = 0x15F870u;
        goto label_15f870;
    }
    ctx->pc = 0x15F868u;
    {
        const bool branch_taken_0x15f868 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f868) {
            ctx->pc = 0x15F8F4u;
            goto label_15f8f4;
        }
    }
    ctx->pc = 0x15F870u;
label_15f870:
    // 0x15f870: 0x601000a  bgez        $s0, . + 4 + (0xA << 2)
label_15f874:
    if (ctx->pc == 0x15F874u) {
        ctx->pc = 0x15F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F870u;
        // 0x15f874: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F878u;
        goto label_15f878;
    }
    ctx->pc = 0x15F870u;
    {
        const bool branch_taken_0x15f870 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x15F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F870u;
        // 0x15f874: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f870) {
            ctx->pc = 0x15F89Cu;
            goto label_15f89c;
        }
    }
    ctx->pc = 0x15F878u;
label_15f878:
    // 0x15f878: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x15f878u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f87c:
    // 0x15f87c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f880:
    // 0x15f880: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f884:
    // 0x15f884: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f888:
    // 0x15f888: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x15f888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f88c:
    // 0x15f88c: 0x8483022c  lh          $v1, 0x22C($a0)
    ctx->pc = 0x15f88cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_15f890:
    // 0x15f890: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
label_15f894:
    if (ctx->pc == 0x15F894u) {
        ctx->pc = 0x15F898u;
        goto label_15f898;
    }
    ctx->pc = 0x15F890u;
    {
        const bool branch_taken_0x15f890 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x15f890) {
            ctx->pc = 0x15F89Cu;
            goto label_15f89c;
        }
    }
    ctx->pc = 0x15F898u;
label_15f898:
    // 0x15f898: 0xa483022e  sh          $v1, 0x22E($a0)
    ctx->pc = 0x15f898u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 558), (uint16_t)GPR_U32(ctx, 3));
label_15f89c:
    // 0x15f89c: 0x0  nop
    ctx->pc = 0x15f89cu;
    // NOP
label_15f8a0:
    // 0x15f8a0: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x15f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f8a4:
    // 0x15f8a4: 0x732023  subu        $a0, $v1, $s3
    ctx->pc = 0x15f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f8a8:
    // 0x15f8a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15f8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15f8ac:
    // 0x15f8ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15f8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f8b0:
    // 0x15f8b0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x15f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_15f8b4:
    // 0x15f8b4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15f8b8:
    // 0x15f8b8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x15f8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_15f8bc:
    // 0x15f8bc: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_15f8c0:
    if (ctx->pc == 0x15F8C0u) {
        ctx->pc = 0x15F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8BCu;
        // 0x15f8c0: 0xa490022c  sh          $s0, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F8C4u;
        goto label_15f8c4;
    }
    ctx->pc = 0x15F8BCu;
    {
        const bool branch_taken_0x15f8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8BCu;
        // 0x15f8c0: 0xa490022c  sh          $s0, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f8bc) {
            ctx->pc = 0x15F8DCu;
            goto label_15f8dc;
        }
    }
    ctx->pc = 0x15F8C4u;
label_15f8c4:
    // 0x15f8c4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f8c8:
    // 0x15f8c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f8cc:
    // 0x15f8cc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f8d0:
    // 0x15f8d0: 0x8c452cd8  lw          $a1, 0x2CD8($v0)
    ctx->pc = 0x15f8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f8d4:
    // 0x15f8d4: 0xc05b698  jal         func_16DA60
label_15f8d8:
    if (ctx->pc == 0x15F8D8u) {
        ctx->pc = 0x15F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8D4u;
        // 0x15f8d8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F8DCu;
        goto label_15f8dc;
    }
    ctx->pc = 0x15F8D4u;
    SET_GPR_U32(ctx, 31, 0x15F8DCu);
    ctx->pc = 0x15F8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F8D4u;
    // 0x15f8d8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA60u, 0x15F8D4u, 0x15F8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F8DCu;
label_15f8dc:
    // 0x15f8dc: 0x0  nop
    ctx->pc = 0x15f8dcu;
    // NOP
label_15f8e0:
    // 0x15f8e0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f8e4:
    // 0x15f8e4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f8e8:
    // 0x15f8e8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x15f8e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f8ec:
    // 0x15f8ec: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x15f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f8f0:
    // 0x15f8f0: 0xa05301d1  sb          $s3, 0x1D1($v0)
    ctx->pc = 0x15f8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 465), (uint8_t)GPR_U32(ctx, 19));
label_15f8f4:
    // 0x15f8f4: 0x0  nop
    ctx->pc = 0x15f8f4u;
    // NOP
label_15f8f8:
    // 0x15f8f8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f8fc:
    // 0x15f8fc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f900:
    // 0x15f900: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f904:
    // 0x15f904: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f908:
    // 0x15f908: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f908u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f90c:
    // 0x15f90c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f910:
    // 0x15f910: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x15f910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15f914:
    // 0x15f914: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f918:
    // 0x15f918: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f91c:
    // 0x15f91c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f920:
    // 0x15f920: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f924:
    // 0x15f924: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x15f924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_15f928:
    // 0x15f928: 0x320f809  jalr        $t9
label_15f92c:
    if (ctx->pc == 0x15F92Cu) {
        ctx->pc = 0x15F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F928u;
        // 0x15f92c: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F930u;
        goto label_15f930;
    }
    ctx->pc = 0x15F928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F930u);
        ctx->pc = 0x15F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F928u;
        // 0x15f92c: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F928u, 0x15F930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F930u;
label_15f930:
    // 0x15f930: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x15f930u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f934:
    // 0x15f934: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15f934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15f938:
    // 0x15f938: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x15f938u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_15f93c:
    // 0x15f93c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15f93cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15f940:
    // 0x15f940: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x15f940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_15f944:
    // 0x15f944: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15f948:
    // 0x15f948: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x15f948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_15f94c:
    // 0x15f94c: 0x84840228  lh          $a0, 0x228($a0)
    ctx->pc = 0x15f94cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 552)));
label_15f950:
    // 0x15f950: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_15f954:
    if (ctx->pc == 0x15F954u) {
        ctx->pc = 0x15F958u;
        goto label_15f958;
    }
    ctx->pc = 0x15F950u;
    {
        const bool branch_taken_0x15f950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15f950) {
            ctx->pc = 0x15F96Cu;
            goto label_15f96c;
        }
    }
    ctx->pc = 0x15F958u;
label_15f958:
    // 0x15f958: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15f958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15f95c:
    // 0x15f95c: 0x0  nop
    ctx->pc = 0x15f95cu;
    // NOP
label_15f960:
    // 0x15f960: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x15f960u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15f964:
    // 0x15f964: 0x1460ff8a  bnez        $v1, . + 4 + (-0x76 << 2)
label_15f968:
    if (ctx->pc == 0x15F968u) {
        ctx->pc = 0x15F96Cu;
        goto label_15f96c;
    }
    ctx->pc = 0x15F964u;
    {
        const bool branch_taken_0x15f964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f964) {
            ctx->pc = 0x15F790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f790;
        }
    }
    ctx->pc = 0x15F96Cu;
label_15f96c:
    // 0x15f96c: 0x0  nop
    ctx->pc = 0x15f96cu;
    // NOP
label_15f970:
    // 0x15f970: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x15f970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f974:
    // 0x15f974: 0x732023  subu        $a0, $v1, $s3
    ctx->pc = 0x15f974u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f978:
    // 0x15f978: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15f978u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15f97c:
    // 0x15f97c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15f97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15f980:
    // 0x15f980: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x15f980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_15f984:
    // 0x15f984: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f984u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15f988:
    // 0x15f988: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x15f988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_15f98c:
    // 0x15f98c: 0x84840228  lh          $a0, 0x228($a0)
    ctx->pc = 0x15f98cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 552)));
label_15f990:
    // 0x15f990: 0x10830056  beq         $a0, $v1, . + 4 + (0x56 << 2)
label_15f994:
    if (ctx->pc == 0x15F994u) {
        ctx->pc = 0x15F998u;
        goto label_15f998;
    }
    ctx->pc = 0x15F990u;
    {
        const bool branch_taken_0x15f990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15f990) {
            ctx->pc = 0x15FAECu;
            goto label_15faec;
        }
    }
    ctx->pc = 0x15F998u;
label_15f998:
    // 0x15f998: 0x8e442c1c  lw          $a0, 0x2C1C($s2)
    ctx->pc = 0x15f998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11292)));
label_15f99c:
    // 0x15f99c: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x15f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_15f9a0:
    // 0x15f9a0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x15f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_15f9a4:
    // 0x15f9a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f9a8:
    // 0x15f9a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f9ac:
    // 0x15f9ac: 0x8465000a  lh          $a1, 0xA($v1)
    ctx->pc = 0x15f9acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_15f9b0:
    // 0x15f9b0: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x15f9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_15f9b4:
    // 0x15f9b4: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x15f9b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_15f9b8:
    // 0x15f9b8: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x15f9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15f9bc:
    // 0x15f9bc: 0x1000003b  b           . + 4 + (0x3B << 2)
label_15f9c0:
    if (ctx->pc == 0x15F9C0u) {
        ctx->pc = 0x15F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9BCu;
        // 0x15f9c0: 0x708821  addu        $s1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F9C4u;
        goto label_15f9c4;
    }
    ctx->pc = 0x15F9BCu;
    {
        const bool branch_taken_0x15f9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9BCu;
        // 0x15f9c0: 0x708821  addu        $s1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f9bc) {
            ctx->pc = 0x15FAACu;
            goto label_15faac;
        }
    }
    ctx->pc = 0x15F9C4u;
label_15f9c4:
    // 0x15f9c4: 0x0  nop
    ctx->pc = 0x15f9c4u;
    // NOP
label_15f9c8:
    // 0x15f9c8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f9cc:
    // 0x15f9cc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f9d0:
    // 0x15f9d0: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f9d4:
    // 0x15f9d4: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15f9d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15f9d8:
    // 0x15f9d8: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
label_15f9dc:
    if (ctx->pc == 0x15F9DCu) {
        ctx->pc = 0x15F9E0u;
        goto label_15f9e0;
    }
    ctx->pc = 0x15F9D8u;
    {
        const bool branch_taken_0x15f9d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f9d8) {
            ctx->pc = 0x15FAA4u;
            goto label_15faa4;
        }
    }
    ctx->pc = 0x15F9E0u;
label_15f9e0:
    // 0x15f9e0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f9e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f9e4:
    // 0x15f9e4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f9e8:
    // 0x15f9e8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f9ec:
    // 0x15f9ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f9f0:
    // 0x15f9f0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f9f4:
    // 0x15f9f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f9f8:
    // 0x15f9f8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f9fc:
    // 0x15f9fc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x15f9fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_15fa00:
    // 0x15fa00: 0x320f809  jalr        $t9
label_15fa04:
    if (ctx->pc == 0x15FA04u) {
        ctx->pc = 0x15FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA00u;
        // 0x15fa04: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA08u;
        goto label_15fa08;
    }
    ctx->pc = 0x15FA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15FA08u);
        ctx->pc = 0x15FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA00u;
        // 0x15fa04: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FA00u, 0x15FA08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FA08u;
label_15fa08:
    // 0x15fa08: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15fa08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15fa0c:
    // 0x15fa0c: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
label_15fa10:
    if (ctx->pc == 0x15FA10u) {
        ctx->pc = 0x15FA14u;
        goto label_15fa14;
    }
    ctx->pc = 0x15FA0Cu;
    {
        const bool branch_taken_0x15fa0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fa0c) {
            ctx->pc = 0x15FAA4u;
            goto label_15faa4;
        }
    }
    ctx->pc = 0x15FA14u;
label_15fa14:
    // 0x15fa14: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15fa18:
    // 0x15fa18: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15fa1c:
    // 0x15fa1c: 0x531823  subu        $v1, $v0, $s3
    ctx->pc = 0x15fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15fa20:
    // 0x15fa20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15fa24:
    // 0x15fa24: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15fa28:
    // 0x15fa28: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15fa2c:
    // 0x15fa2c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15fa30:
    // 0x15fa30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15fa34:
    // 0x15fa34: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15fa38:
    // 0x15fa38: 0xa4640236  sh          $a0, 0x236($v1)
    ctx->pc = 0x15fa38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 566), (uint16_t)GPR_U32(ctx, 4));
label_15fa3c:
    // 0x15fa3c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15fa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15fa40:
    // 0x15fa40: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15fa40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15fa44:
    // 0x15fa44: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15fa44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15fa48:
    // 0x15fa48: 0x320f809  jalr        $t9
label_15fa4c:
    if (ctx->pc == 0x15FA4Cu) {
        ctx->pc = 0x15FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA48u;
        // 0x15fa4c: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA50u;
        goto label_15fa50;
    }
    ctx->pc = 0x15FA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15FA50u);
        ctx->pc = 0x15FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA48u;
        // 0x15fa4c: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FA48u, 0x15FA50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FA50u;
label_15fa50:
    // 0x15fa50: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15fa50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_15fa54:
    // 0x15fa54: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
label_15fa58:
    if (ctx->pc == 0x15FA58u) {
        ctx->pc = 0x15FA5Cu;
        goto label_15fa5c;
    }
    ctx->pc = 0x15FA54u;
    {
        const bool branch_taken_0x15fa54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fa54) {
            ctx->pc = 0x15FAA4u;
            goto label_15faa4;
        }
    }
    ctx->pc = 0x15FA5Cu;
label_15fa5c:
    // 0x15fa5c: 0x601000a  bgez        $s0, . + 4 + (0xA << 2)
label_15fa60:
    if (ctx->pc == 0x15FA60u) {
        ctx->pc = 0x15FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA5Cu;
        // 0x15fa60: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA64u;
        goto label_15fa64;
    }
    ctx->pc = 0x15FA5Cu;
    {
        const bool branch_taken_0x15fa5c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x15FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA5Cu;
        // 0x15fa60: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa5c) {
            ctx->pc = 0x15FA88u;
            goto label_15fa88;
        }
    }
    ctx->pc = 0x15FA64u;
label_15fa64:
    // 0x15fa64: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x15fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15fa68:
    // 0x15fa68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15fa6c:
    // 0x15fa6c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15fa70:
    // 0x15fa70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15fa74:
    // 0x15fa74: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x15fa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15fa78:
    // 0x15fa78: 0x8483022c  lh          $v1, 0x22C($a0)
    ctx->pc = 0x15fa78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_15fa7c:
    // 0x15fa7c: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
label_15fa80:
    if (ctx->pc == 0x15FA80u) {
        ctx->pc = 0x15FA84u;
        goto label_15fa84;
    }
    ctx->pc = 0x15FA7Cu;
    {
        const bool branch_taken_0x15fa7c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x15fa7c) {
            ctx->pc = 0x15FA88u;
            goto label_15fa88;
        }
    }
    ctx->pc = 0x15FA84u;
label_15fa84:
    // 0x15fa84: 0xa483022e  sh          $v1, 0x22E($a0)
    ctx->pc = 0x15fa84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 558), (uint16_t)GPR_U32(ctx, 3));
label_15fa88:
    // 0x15fa88: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x15fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15fa8c:
    // 0x15fa8c: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x15fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15fa90:
    // 0x15fa90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15fa94:
    // 0x15fa94: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15fa98:
    // 0x15fa98: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15fa9c:
    // 0x15fa9c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15faa0:
    // 0x15faa0: 0xa470022c  sh          $s0, 0x22C($v1)
    ctx->pc = 0x15faa0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 556), (uint16_t)GPR_U32(ctx, 16));
label_15faa4:
    // 0x15faa4: 0x0  nop
    ctx->pc = 0x15faa4u;
    // NOP
label_15faa8:
    // 0x15faa8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15faa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15faac:
    // 0x15faac: 0x0  nop
    ctx->pc = 0x15faacu;
    // NOP
label_15fab0:
    // 0x15fab0: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x15fab0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15fab4:
    // 0x15fab4: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
label_15fab8:
    if (ctx->pc == 0x15FAB8u) {
        ctx->pc = 0x15FABCu;
        goto label_15fabc;
    }
    ctx->pc = 0x15FAB4u;
    {
        const bool branch_taken_0x15fab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fab4) {
            ctx->pc = 0x15F9C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f9c4;
        }
    }
    ctx->pc = 0x15FABCu;
label_15fabc:
    // 0x15fabc: 0x0  nop
    ctx->pc = 0x15fabcu;
    // NOP
label_15fac0:
    // 0x15fac0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15fac0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_15fac4:
    // 0x15fac4: 0x0  nop
    ctx->pc = 0x15fac4u;
    // NOP
label_15fac8:
    // 0x15fac8: 0x2a830009  slti        $v1, $s4, 0x9
    ctx->pc = 0x15fac8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
label_15facc:
    // 0x15facc: 0x1460fd90  bnez        $v1, . + 4 + (-0x270 << 2)
label_15fad0:
    if (ctx->pc == 0x15FAD0u) {
        ctx->pc = 0x15FAD4u;
        goto label_15fad4;
    }
    ctx->pc = 0x15FACCu;
    {
        const bool branch_taken_0x15facc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15facc) {
            ctx->pc = 0x15F110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f110;
        }
    }
    ctx->pc = 0x15FAD4u;
label_15fad4:
    // 0x15fad4: 0x10000005  b           . + 4 + (0x5 << 2)
label_15fad8:
    if (ctx->pc == 0x15FAD8u) {
        ctx->pc = 0x15FADCu;
        goto label_15fadc;
    }
    ctx->pc = 0x15FAD4u;
    {
        const bool branch_taken_0x15fad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fad4) {
            ctx->pc = 0x15FAECu;
            goto label_15faec;
        }
    }
    ctx->pc = 0x15FADCu;
label_15fadc:
    // 0x15fadc: 0x0  nop
    ctx->pc = 0x15fadcu;
    // NOP
label_15fae0:
    // 0x15fae0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15fae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15fae4:
    // 0x15fae4: 0xc057a68  jal         func_15E9A0
label_15fae8:
    if (ctx->pc == 0x15FAE8u) {
        ctx->pc = 0x15FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAE4u;
        // 0x15fae8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FAECu;
        goto label_15faec;
    }
    ctx->pc = 0x15FAE4u;
    SET_GPR_U32(ctx, 31, 0x15FAECu);
    ctx->pc = 0x15FAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FAE4u;
    // 0x15fae8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E9A0u, 0x15FAE4u, 0x15FAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FAECu;
label_15faec:
    // 0x15faec: 0x0  nop
    ctx->pc = 0x15faecu;
    // NOP
label_15faf0:
    // 0x15faf0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15faf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15faf4:
    // 0x15faf4: 0x0  nop
    ctx->pc = 0x15faf4u;
    // NOP
label_15faf8:
    // 0x15faf8: 0x2a63000a  slti        $v1, $s3, 0xA
    ctx->pc = 0x15faf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
label_15fafc:
    // 0x15fafc: 0x1460fd73  bnez        $v1, . + 4 + (-0x28D << 2)
label_15fb00:
    if (ctx->pc == 0x15FB00u) {
        ctx->pc = 0x15FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAFCu;
        // 0x15fb00: 0x132100  sll         $a0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB04u;
        goto label_15fb04;
    }
    ctx->pc = 0x15FAFCu;
    {
        const bool branch_taken_0x15fafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAFCu;
        // 0x15fb00: 0x132100  sll         $a0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fafc) {
            ctx->pc = 0x15F0CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f0cc;
        }
    }
    ctx->pc = 0x15FB04u;
label_15fb04:
    // 0x15fb04: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x15fb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_15fb08:
    // 0x15fb08: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15fb08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15fb0c:
    // 0x15fb0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15fb0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15fb10:
    // 0x15fb10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15fb10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15fb14:
    // 0x15fb14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15fb14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15fb18:
    // 0x15fb18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15fb18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15fb1c:
    // 0x15fb1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15fb1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15fb20:
    // 0x15fb20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15fb20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15fb24:
    // 0x15fb24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15fb24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15fb28:
    // 0x15fb28: 0x3e00008  jr          $ra
label_15fb2c:
    if (ctx->pc == 0x15FB2Cu) {
        ctx->pc = 0x15FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB28u;
        // 0x15fb2c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB30u;
        goto label_fallthrough_0x15fb28;
    }
    ctx->pc = 0x15FB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB28u;
        // 0x15fb2c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15fb28:
    ctx->pc = 0x15FB30u;
}
