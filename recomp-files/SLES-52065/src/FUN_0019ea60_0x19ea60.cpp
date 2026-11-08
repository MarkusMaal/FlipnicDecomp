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

// Function: FUN_0019ea60
// Address: 0x19ea60 - 0x19f9fc
void FUN_0019ea60_0x19ea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019ea60_0x19ea60");
#endif

    switch (ctx->pc) {
        case 0x19ea60u: goto label_19ea60;
        case 0x19ea64u: goto label_19ea64;
        case 0x19ea68u: goto label_19ea68;
        case 0x19ea6cu: goto label_19ea6c;
        case 0x19ea70u: goto label_19ea70;
        case 0x19ea74u: goto label_19ea74;
        case 0x19ea78u: goto label_19ea78;
        case 0x19ea7cu: goto label_19ea7c;
        case 0x19ea80u: goto label_19ea80;
        case 0x19ea84u: goto label_19ea84;
        case 0x19ea88u: goto label_19ea88;
        case 0x19ea8cu: goto label_19ea8c;
        case 0x19ea90u: goto label_19ea90;
        case 0x19ea94u: goto label_19ea94;
        case 0x19ea98u: goto label_19ea98;
        case 0x19ea9cu: goto label_19ea9c;
        case 0x19eaa0u: goto label_19eaa0;
        case 0x19eaa4u: goto label_19eaa4;
        case 0x19eaa8u: goto label_19eaa8;
        case 0x19eaacu: goto label_19eaac;
        case 0x19eab0u: goto label_19eab0;
        case 0x19eab4u: goto label_19eab4;
        case 0x19eab8u: goto label_19eab8;
        case 0x19eabcu: goto label_19eabc;
        case 0x19eac0u: goto label_19eac0;
        case 0x19eac4u: goto label_19eac4;
        case 0x19eac8u: goto label_19eac8;
        case 0x19eaccu: goto label_19eacc;
        case 0x19ead0u: goto label_19ead0;
        case 0x19ead4u: goto label_19ead4;
        case 0x19ead8u: goto label_19ead8;
        case 0x19eadcu: goto label_19eadc;
        case 0x19eae0u: goto label_19eae0;
        case 0x19eae4u: goto label_19eae4;
        case 0x19eae8u: goto label_19eae8;
        case 0x19eaecu: goto label_19eaec;
        case 0x19eaf0u: goto label_19eaf0;
        case 0x19eaf4u: goto label_19eaf4;
        case 0x19eaf8u: goto label_19eaf8;
        case 0x19eafcu: goto label_19eafc;
        case 0x19eb00u: goto label_19eb00;
        case 0x19eb04u: goto label_19eb04;
        case 0x19eb08u: goto label_19eb08;
        case 0x19eb0cu: goto label_19eb0c;
        case 0x19eb10u: goto label_19eb10;
        case 0x19eb14u: goto label_19eb14;
        case 0x19eb18u: goto label_19eb18;
        case 0x19eb1cu: goto label_19eb1c;
        case 0x19eb20u: goto label_19eb20;
        case 0x19eb24u: goto label_19eb24;
        case 0x19eb28u: goto label_19eb28;
        case 0x19eb2cu: goto label_19eb2c;
        case 0x19eb30u: goto label_19eb30;
        case 0x19eb34u: goto label_19eb34;
        case 0x19eb38u: goto label_19eb38;
        case 0x19eb3cu: goto label_19eb3c;
        case 0x19eb40u: goto label_19eb40;
        case 0x19eb44u: goto label_19eb44;
        case 0x19eb48u: goto label_19eb48;
        case 0x19eb4cu: goto label_19eb4c;
        case 0x19eb50u: goto label_19eb50;
        case 0x19eb54u: goto label_19eb54;
        case 0x19eb58u: goto label_19eb58;
        case 0x19eb5cu: goto label_19eb5c;
        case 0x19eb60u: goto label_19eb60;
        case 0x19eb64u: goto label_19eb64;
        case 0x19eb68u: goto label_19eb68;
        case 0x19eb6cu: goto label_19eb6c;
        case 0x19eb70u: goto label_19eb70;
        case 0x19eb74u: goto label_19eb74;
        case 0x19eb78u: goto label_19eb78;
        case 0x19eb7cu: goto label_19eb7c;
        case 0x19eb80u: goto label_19eb80;
        case 0x19eb84u: goto label_19eb84;
        case 0x19eb88u: goto label_19eb88;
        case 0x19eb8cu: goto label_19eb8c;
        case 0x19eb90u: goto label_19eb90;
        case 0x19eb94u: goto label_19eb94;
        case 0x19eb98u: goto label_19eb98;
        case 0x19eb9cu: goto label_19eb9c;
        case 0x19eba0u: goto label_19eba0;
        case 0x19eba4u: goto label_19eba4;
        case 0x19eba8u: goto label_19eba8;
        case 0x19ebacu: goto label_19ebac;
        case 0x19ebb0u: goto label_19ebb0;
        case 0x19ebb4u: goto label_19ebb4;
        case 0x19ebb8u: goto label_19ebb8;
        case 0x19ebbcu: goto label_19ebbc;
        case 0x19ebc0u: goto label_19ebc0;
        case 0x19ebc4u: goto label_19ebc4;
        case 0x19ebc8u: goto label_19ebc8;
        case 0x19ebccu: goto label_19ebcc;
        case 0x19ebd0u: goto label_19ebd0;
        case 0x19ebd4u: goto label_19ebd4;
        case 0x19ebd8u: goto label_19ebd8;
        case 0x19ebdcu: goto label_19ebdc;
        case 0x19ebe0u: goto label_19ebe0;
        case 0x19ebe4u: goto label_19ebe4;
        case 0x19ebe8u: goto label_19ebe8;
        case 0x19ebecu: goto label_19ebec;
        case 0x19ebf0u: goto label_19ebf0;
        case 0x19ebf4u: goto label_19ebf4;
        case 0x19ebf8u: goto label_19ebf8;
        case 0x19ebfcu: goto label_19ebfc;
        case 0x19ec00u: goto label_19ec00;
        case 0x19ec04u: goto label_19ec04;
        case 0x19ec08u: goto label_19ec08;
        case 0x19ec0cu: goto label_19ec0c;
        case 0x19ec10u: goto label_19ec10;
        case 0x19ec14u: goto label_19ec14;
        case 0x19ec18u: goto label_19ec18;
        case 0x19ec1cu: goto label_19ec1c;
        case 0x19ec20u: goto label_19ec20;
        case 0x19ec24u: goto label_19ec24;
        case 0x19ec28u: goto label_19ec28;
        case 0x19ec2cu: goto label_19ec2c;
        case 0x19ec30u: goto label_19ec30;
        case 0x19ec34u: goto label_19ec34;
        case 0x19ec38u: goto label_19ec38;
        case 0x19ec3cu: goto label_19ec3c;
        case 0x19ec40u: goto label_19ec40;
        case 0x19ec44u: goto label_19ec44;
        case 0x19ec48u: goto label_19ec48;
        case 0x19ec4cu: goto label_19ec4c;
        case 0x19ec50u: goto label_19ec50;
        case 0x19ec54u: goto label_19ec54;
        case 0x19ec58u: goto label_19ec58;
        case 0x19ec5cu: goto label_19ec5c;
        case 0x19ec60u: goto label_19ec60;
        case 0x19ec64u: goto label_19ec64;
        case 0x19ec68u: goto label_19ec68;
        case 0x19ec6cu: goto label_19ec6c;
        case 0x19ec70u: goto label_19ec70;
        case 0x19ec74u: goto label_19ec74;
        case 0x19ec78u: goto label_19ec78;
        case 0x19ec7cu: goto label_19ec7c;
        case 0x19ec80u: goto label_19ec80;
        case 0x19ec84u: goto label_19ec84;
        case 0x19ec88u: goto label_19ec88;
        case 0x19ec8cu: goto label_19ec8c;
        case 0x19ec90u: goto label_19ec90;
        case 0x19ec94u: goto label_19ec94;
        case 0x19ec98u: goto label_19ec98;
        case 0x19ec9cu: goto label_19ec9c;
        case 0x19eca0u: goto label_19eca0;
        case 0x19eca4u: goto label_19eca4;
        case 0x19eca8u: goto label_19eca8;
        case 0x19ecacu: goto label_19ecac;
        case 0x19ecb0u: goto label_19ecb0;
        case 0x19ecb4u: goto label_19ecb4;
        case 0x19ecb8u: goto label_19ecb8;
        case 0x19ecbcu: goto label_19ecbc;
        case 0x19ecc0u: goto label_19ecc0;
        case 0x19ecc4u: goto label_19ecc4;
        case 0x19ecc8u: goto label_19ecc8;
        case 0x19ecccu: goto label_19eccc;
        case 0x19ecd0u: goto label_19ecd0;
        case 0x19ecd4u: goto label_19ecd4;
        case 0x19ecd8u: goto label_19ecd8;
        case 0x19ecdcu: goto label_19ecdc;
        case 0x19ece0u: goto label_19ece0;
        case 0x19ece4u: goto label_19ece4;
        case 0x19ece8u: goto label_19ece8;
        case 0x19ececu: goto label_19ecec;
        case 0x19ecf0u: goto label_19ecf0;
        case 0x19ecf4u: goto label_19ecf4;
        case 0x19ecf8u: goto label_19ecf8;
        case 0x19ecfcu: goto label_19ecfc;
        case 0x19ed00u: goto label_19ed00;
        case 0x19ed04u: goto label_19ed04;
        case 0x19ed08u: goto label_19ed08;
        case 0x19ed0cu: goto label_19ed0c;
        case 0x19ed10u: goto label_19ed10;
        case 0x19ed14u: goto label_19ed14;
        case 0x19ed18u: goto label_19ed18;
        case 0x19ed1cu: goto label_19ed1c;
        case 0x19ed20u: goto label_19ed20;
        case 0x19ed24u: goto label_19ed24;
        case 0x19ed28u: goto label_19ed28;
        case 0x19ed2cu: goto label_19ed2c;
        case 0x19ed30u: goto label_19ed30;
        case 0x19ed34u: goto label_19ed34;
        case 0x19ed38u: goto label_19ed38;
        case 0x19ed3cu: goto label_19ed3c;
        case 0x19ed40u: goto label_19ed40;
        case 0x19ed44u: goto label_19ed44;
        case 0x19ed48u: goto label_19ed48;
        case 0x19ed4cu: goto label_19ed4c;
        case 0x19ed50u: goto label_19ed50;
        case 0x19ed54u: goto label_19ed54;
        case 0x19ed58u: goto label_19ed58;
        case 0x19ed5cu: goto label_19ed5c;
        case 0x19ed60u: goto label_19ed60;
        case 0x19ed64u: goto label_19ed64;
        case 0x19ed68u: goto label_19ed68;
        case 0x19ed6cu: goto label_19ed6c;
        case 0x19ed70u: goto label_19ed70;
        case 0x19ed74u: goto label_19ed74;
        case 0x19ed78u: goto label_19ed78;
        case 0x19ed7cu: goto label_19ed7c;
        case 0x19ed80u: goto label_19ed80;
        case 0x19ed84u: goto label_19ed84;
        case 0x19ed88u: goto label_19ed88;
        case 0x19ed8cu: goto label_19ed8c;
        case 0x19ed90u: goto label_19ed90;
        case 0x19ed94u: goto label_19ed94;
        case 0x19ed98u: goto label_19ed98;
        case 0x19ed9cu: goto label_19ed9c;
        case 0x19eda0u: goto label_19eda0;
        case 0x19eda4u: goto label_19eda4;
        case 0x19eda8u: goto label_19eda8;
        case 0x19edacu: goto label_19edac;
        case 0x19edb0u: goto label_19edb0;
        case 0x19edb4u: goto label_19edb4;
        case 0x19edb8u: goto label_19edb8;
        case 0x19edbcu: goto label_19edbc;
        case 0x19edc0u: goto label_19edc0;
        case 0x19edc4u: goto label_19edc4;
        case 0x19edc8u: goto label_19edc8;
        case 0x19edccu: goto label_19edcc;
        case 0x19edd0u: goto label_19edd0;
        case 0x19edd4u: goto label_19edd4;
        case 0x19edd8u: goto label_19edd8;
        case 0x19eddcu: goto label_19eddc;
        case 0x19ede0u: goto label_19ede0;
        case 0x19ede4u: goto label_19ede4;
        case 0x19ede8u: goto label_19ede8;
        case 0x19edecu: goto label_19edec;
        case 0x19edf0u: goto label_19edf0;
        case 0x19edf4u: goto label_19edf4;
        case 0x19edf8u: goto label_19edf8;
        case 0x19edfcu: goto label_19edfc;
        case 0x19ee00u: goto label_19ee00;
        case 0x19ee04u: goto label_19ee04;
        case 0x19ee08u: goto label_19ee08;
        case 0x19ee0cu: goto label_19ee0c;
        case 0x19ee10u: goto label_19ee10;
        case 0x19ee14u: goto label_19ee14;
        case 0x19ee18u: goto label_19ee18;
        case 0x19ee1cu: goto label_19ee1c;
        case 0x19ee20u: goto label_19ee20;
        case 0x19ee24u: goto label_19ee24;
        case 0x19ee28u: goto label_19ee28;
        case 0x19ee2cu: goto label_19ee2c;
        case 0x19ee30u: goto label_19ee30;
        case 0x19ee34u: goto label_19ee34;
        case 0x19ee38u: goto label_19ee38;
        case 0x19ee3cu: goto label_19ee3c;
        case 0x19ee40u: goto label_19ee40;
        case 0x19ee44u: goto label_19ee44;
        case 0x19ee48u: goto label_19ee48;
        case 0x19ee4cu: goto label_19ee4c;
        case 0x19ee50u: goto label_19ee50;
        case 0x19ee54u: goto label_19ee54;
        case 0x19ee58u: goto label_19ee58;
        case 0x19ee5cu: goto label_19ee5c;
        case 0x19ee60u: goto label_19ee60;
        case 0x19ee64u: goto label_19ee64;
        case 0x19ee68u: goto label_19ee68;
        case 0x19ee6cu: goto label_19ee6c;
        case 0x19ee70u: goto label_19ee70;
        case 0x19ee74u: goto label_19ee74;
        case 0x19ee78u: goto label_19ee78;
        case 0x19ee7cu: goto label_19ee7c;
        case 0x19ee80u: goto label_19ee80;
        case 0x19ee84u: goto label_19ee84;
        case 0x19ee88u: goto label_19ee88;
        case 0x19ee8cu: goto label_19ee8c;
        case 0x19ee90u: goto label_19ee90;
        case 0x19ee94u: goto label_19ee94;
        case 0x19ee98u: goto label_19ee98;
        case 0x19ee9cu: goto label_19ee9c;
        case 0x19eea0u: goto label_19eea0;
        case 0x19eea4u: goto label_19eea4;
        case 0x19eea8u: goto label_19eea8;
        case 0x19eeacu: goto label_19eeac;
        case 0x19eeb0u: goto label_19eeb0;
        case 0x19eeb4u: goto label_19eeb4;
        case 0x19eeb8u: goto label_19eeb8;
        case 0x19eebcu: goto label_19eebc;
        case 0x19eec0u: goto label_19eec0;
        case 0x19eec4u: goto label_19eec4;
        case 0x19eec8u: goto label_19eec8;
        case 0x19eeccu: goto label_19eecc;
        case 0x19eed0u: goto label_19eed0;
        case 0x19eed4u: goto label_19eed4;
        case 0x19eed8u: goto label_19eed8;
        case 0x19eedcu: goto label_19eedc;
        case 0x19eee0u: goto label_19eee0;
        case 0x19eee4u: goto label_19eee4;
        case 0x19eee8u: goto label_19eee8;
        case 0x19eeecu: goto label_19eeec;
        case 0x19eef0u: goto label_19eef0;
        case 0x19eef4u: goto label_19eef4;
        case 0x19eef8u: goto label_19eef8;
        case 0x19eefcu: goto label_19eefc;
        case 0x19ef00u: goto label_19ef00;
        case 0x19ef04u: goto label_19ef04;
        case 0x19ef08u: goto label_19ef08;
        case 0x19ef0cu: goto label_19ef0c;
        case 0x19ef10u: goto label_19ef10;
        case 0x19ef14u: goto label_19ef14;
        case 0x19ef18u: goto label_19ef18;
        case 0x19ef1cu: goto label_19ef1c;
        case 0x19ef20u: goto label_19ef20;
        case 0x19ef24u: goto label_19ef24;
        case 0x19ef28u: goto label_19ef28;
        case 0x19ef2cu: goto label_19ef2c;
        case 0x19ef30u: goto label_19ef30;
        case 0x19ef34u: goto label_19ef34;
        case 0x19ef38u: goto label_19ef38;
        case 0x19ef3cu: goto label_19ef3c;
        case 0x19ef40u: goto label_19ef40;
        case 0x19ef44u: goto label_19ef44;
        case 0x19ef48u: goto label_19ef48;
        case 0x19ef4cu: goto label_19ef4c;
        case 0x19ef50u: goto label_19ef50;
        case 0x19ef54u: goto label_19ef54;
        case 0x19ef58u: goto label_19ef58;
        case 0x19ef5cu: goto label_19ef5c;
        case 0x19ef60u: goto label_19ef60;
        case 0x19ef64u: goto label_19ef64;
        case 0x19ef68u: goto label_19ef68;
        case 0x19ef6cu: goto label_19ef6c;
        case 0x19ef70u: goto label_19ef70;
        case 0x19ef74u: goto label_19ef74;
        case 0x19ef78u: goto label_19ef78;
        case 0x19ef7cu: goto label_19ef7c;
        case 0x19ef80u: goto label_19ef80;
        case 0x19ef84u: goto label_19ef84;
        case 0x19ef88u: goto label_19ef88;
        case 0x19ef8cu: goto label_19ef8c;
        case 0x19ef90u: goto label_19ef90;
        case 0x19ef94u: goto label_19ef94;
        case 0x19ef98u: goto label_19ef98;
        case 0x19ef9cu: goto label_19ef9c;
        case 0x19efa0u: goto label_19efa0;
        case 0x19efa4u: goto label_19efa4;
        case 0x19efa8u: goto label_19efa8;
        case 0x19efacu: goto label_19efac;
        case 0x19efb0u: goto label_19efb0;
        case 0x19efb4u: goto label_19efb4;
        case 0x19efb8u: goto label_19efb8;
        case 0x19efbcu: goto label_19efbc;
        case 0x19efc0u: goto label_19efc0;
        case 0x19efc4u: goto label_19efc4;
        case 0x19efc8u: goto label_19efc8;
        case 0x19efccu: goto label_19efcc;
        case 0x19efd0u: goto label_19efd0;
        case 0x19efd4u: goto label_19efd4;
        case 0x19efd8u: goto label_19efd8;
        case 0x19efdcu: goto label_19efdc;
        case 0x19efe0u: goto label_19efe0;
        case 0x19efe4u: goto label_19efe4;
        case 0x19efe8u: goto label_19efe8;
        case 0x19efecu: goto label_19efec;
        case 0x19eff0u: goto label_19eff0;
        case 0x19eff4u: goto label_19eff4;
        case 0x19eff8u: goto label_19eff8;
        case 0x19effcu: goto label_19effc;
        case 0x19f000u: goto label_19f000;
        case 0x19f004u: goto label_19f004;
        case 0x19f008u: goto label_19f008;
        case 0x19f00cu: goto label_19f00c;
        case 0x19f010u: goto label_19f010;
        case 0x19f014u: goto label_19f014;
        case 0x19f018u: goto label_19f018;
        case 0x19f01cu: goto label_19f01c;
        case 0x19f020u: goto label_19f020;
        case 0x19f024u: goto label_19f024;
        case 0x19f028u: goto label_19f028;
        case 0x19f02cu: goto label_19f02c;
        case 0x19f030u: goto label_19f030;
        case 0x19f034u: goto label_19f034;
        case 0x19f038u: goto label_19f038;
        case 0x19f03cu: goto label_19f03c;
        case 0x19f040u: goto label_19f040;
        case 0x19f044u: goto label_19f044;
        case 0x19f048u: goto label_19f048;
        case 0x19f04cu: goto label_19f04c;
        case 0x19f050u: goto label_19f050;
        case 0x19f054u: goto label_19f054;
        case 0x19f058u: goto label_19f058;
        case 0x19f05cu: goto label_19f05c;
        case 0x19f060u: goto label_19f060;
        case 0x19f064u: goto label_19f064;
        case 0x19f068u: goto label_19f068;
        case 0x19f06cu: goto label_19f06c;
        case 0x19f070u: goto label_19f070;
        case 0x19f074u: goto label_19f074;
        case 0x19f078u: goto label_19f078;
        case 0x19f07cu: goto label_19f07c;
        case 0x19f080u: goto label_19f080;
        case 0x19f084u: goto label_19f084;
        case 0x19f088u: goto label_19f088;
        case 0x19f08cu: goto label_19f08c;
        case 0x19f090u: goto label_19f090;
        case 0x19f094u: goto label_19f094;
        case 0x19f098u: goto label_19f098;
        case 0x19f09cu: goto label_19f09c;
        case 0x19f0a0u: goto label_19f0a0;
        case 0x19f0a4u: goto label_19f0a4;
        case 0x19f0a8u: goto label_19f0a8;
        case 0x19f0acu: goto label_19f0ac;
        case 0x19f0b0u: goto label_19f0b0;
        case 0x19f0b4u: goto label_19f0b4;
        case 0x19f0b8u: goto label_19f0b8;
        case 0x19f0bcu: goto label_19f0bc;
        case 0x19f0c0u: goto label_19f0c0;
        case 0x19f0c4u: goto label_19f0c4;
        case 0x19f0c8u: goto label_19f0c8;
        case 0x19f0ccu: goto label_19f0cc;
        case 0x19f0d0u: goto label_19f0d0;
        case 0x19f0d4u: goto label_19f0d4;
        case 0x19f0d8u: goto label_19f0d8;
        case 0x19f0dcu: goto label_19f0dc;
        case 0x19f0e0u: goto label_19f0e0;
        case 0x19f0e4u: goto label_19f0e4;
        case 0x19f0e8u: goto label_19f0e8;
        case 0x19f0ecu: goto label_19f0ec;
        case 0x19f0f0u: goto label_19f0f0;
        case 0x19f0f4u: goto label_19f0f4;
        case 0x19f0f8u: goto label_19f0f8;
        case 0x19f0fcu: goto label_19f0fc;
        case 0x19f100u: goto label_19f100;
        case 0x19f104u: goto label_19f104;
        case 0x19f108u: goto label_19f108;
        case 0x19f10cu: goto label_19f10c;
        case 0x19f110u: goto label_19f110;
        case 0x19f114u: goto label_19f114;
        case 0x19f118u: goto label_19f118;
        case 0x19f11cu: goto label_19f11c;
        case 0x19f120u: goto label_19f120;
        case 0x19f124u: goto label_19f124;
        case 0x19f128u: goto label_19f128;
        case 0x19f12cu: goto label_19f12c;
        case 0x19f130u: goto label_19f130;
        case 0x19f134u: goto label_19f134;
        case 0x19f138u: goto label_19f138;
        case 0x19f13cu: goto label_19f13c;
        case 0x19f140u: goto label_19f140;
        case 0x19f144u: goto label_19f144;
        case 0x19f148u: goto label_19f148;
        case 0x19f14cu: goto label_19f14c;
        case 0x19f150u: goto label_19f150;
        case 0x19f154u: goto label_19f154;
        case 0x19f158u: goto label_19f158;
        case 0x19f15cu: goto label_19f15c;
        case 0x19f160u: goto label_19f160;
        case 0x19f164u: goto label_19f164;
        case 0x19f168u: goto label_19f168;
        case 0x19f16cu: goto label_19f16c;
        case 0x19f170u: goto label_19f170;
        case 0x19f174u: goto label_19f174;
        case 0x19f178u: goto label_19f178;
        case 0x19f17cu: goto label_19f17c;
        case 0x19f180u: goto label_19f180;
        case 0x19f184u: goto label_19f184;
        case 0x19f188u: goto label_19f188;
        case 0x19f18cu: goto label_19f18c;
        case 0x19f190u: goto label_19f190;
        case 0x19f194u: goto label_19f194;
        case 0x19f198u: goto label_19f198;
        case 0x19f19cu: goto label_19f19c;
        case 0x19f1a0u: goto label_19f1a0;
        case 0x19f1a4u: goto label_19f1a4;
        case 0x19f1a8u: goto label_19f1a8;
        case 0x19f1acu: goto label_19f1ac;
        case 0x19f1b0u: goto label_19f1b0;
        case 0x19f1b4u: goto label_19f1b4;
        case 0x19f1b8u: goto label_19f1b8;
        case 0x19f1bcu: goto label_19f1bc;
        case 0x19f1c0u: goto label_19f1c0;
        case 0x19f1c4u: goto label_19f1c4;
        case 0x19f1c8u: goto label_19f1c8;
        case 0x19f1ccu: goto label_19f1cc;
        case 0x19f1d0u: goto label_19f1d0;
        case 0x19f1d4u: goto label_19f1d4;
        case 0x19f1d8u: goto label_19f1d8;
        case 0x19f1dcu: goto label_19f1dc;
        case 0x19f1e0u: goto label_19f1e0;
        case 0x19f1e4u: goto label_19f1e4;
        case 0x19f1e8u: goto label_19f1e8;
        case 0x19f1ecu: goto label_19f1ec;
        case 0x19f1f0u: goto label_19f1f0;
        case 0x19f1f4u: goto label_19f1f4;
        case 0x19f1f8u: goto label_19f1f8;
        case 0x19f1fcu: goto label_19f1fc;
        case 0x19f200u: goto label_19f200;
        case 0x19f204u: goto label_19f204;
        case 0x19f208u: goto label_19f208;
        case 0x19f20cu: goto label_19f20c;
        case 0x19f210u: goto label_19f210;
        case 0x19f214u: goto label_19f214;
        case 0x19f218u: goto label_19f218;
        case 0x19f21cu: goto label_19f21c;
        case 0x19f220u: goto label_19f220;
        case 0x19f224u: goto label_19f224;
        case 0x19f228u: goto label_19f228;
        case 0x19f22cu: goto label_19f22c;
        case 0x19f230u: goto label_19f230;
        case 0x19f234u: goto label_19f234;
        case 0x19f238u: goto label_19f238;
        case 0x19f23cu: goto label_19f23c;
        case 0x19f240u: goto label_19f240;
        case 0x19f244u: goto label_19f244;
        case 0x19f248u: goto label_19f248;
        case 0x19f24cu: goto label_19f24c;
        case 0x19f250u: goto label_19f250;
        case 0x19f254u: goto label_19f254;
        case 0x19f258u: goto label_19f258;
        case 0x19f25cu: goto label_19f25c;
        case 0x19f260u: goto label_19f260;
        case 0x19f264u: goto label_19f264;
        case 0x19f268u: goto label_19f268;
        case 0x19f26cu: goto label_19f26c;
        case 0x19f270u: goto label_19f270;
        case 0x19f274u: goto label_19f274;
        case 0x19f278u: goto label_19f278;
        case 0x19f27cu: goto label_19f27c;
        case 0x19f280u: goto label_19f280;
        case 0x19f284u: goto label_19f284;
        case 0x19f288u: goto label_19f288;
        case 0x19f28cu: goto label_19f28c;
        case 0x19f290u: goto label_19f290;
        case 0x19f294u: goto label_19f294;
        case 0x19f298u: goto label_19f298;
        case 0x19f29cu: goto label_19f29c;
        case 0x19f2a0u: goto label_19f2a0;
        case 0x19f2a4u: goto label_19f2a4;
        case 0x19f2a8u: goto label_19f2a8;
        case 0x19f2acu: goto label_19f2ac;
        case 0x19f2b0u: goto label_19f2b0;
        case 0x19f2b4u: goto label_19f2b4;
        case 0x19f2b8u: goto label_19f2b8;
        case 0x19f2bcu: goto label_19f2bc;
        case 0x19f2c0u: goto label_19f2c0;
        case 0x19f2c4u: goto label_19f2c4;
        case 0x19f2c8u: goto label_19f2c8;
        case 0x19f2ccu: goto label_19f2cc;
        case 0x19f2d0u: goto label_19f2d0;
        case 0x19f2d4u: goto label_19f2d4;
        case 0x19f2d8u: goto label_19f2d8;
        case 0x19f2dcu: goto label_19f2dc;
        case 0x19f2e0u: goto label_19f2e0;
        case 0x19f2e4u: goto label_19f2e4;
        case 0x19f2e8u: goto label_19f2e8;
        case 0x19f2ecu: goto label_19f2ec;
        case 0x19f2f0u: goto label_19f2f0;
        case 0x19f2f4u: goto label_19f2f4;
        case 0x19f2f8u: goto label_19f2f8;
        case 0x19f2fcu: goto label_19f2fc;
        case 0x19f300u: goto label_19f300;
        case 0x19f304u: goto label_19f304;
        case 0x19f308u: goto label_19f308;
        case 0x19f30cu: goto label_19f30c;
        case 0x19f310u: goto label_19f310;
        case 0x19f314u: goto label_19f314;
        case 0x19f318u: goto label_19f318;
        case 0x19f31cu: goto label_19f31c;
        case 0x19f320u: goto label_19f320;
        case 0x19f324u: goto label_19f324;
        case 0x19f328u: goto label_19f328;
        case 0x19f32cu: goto label_19f32c;
        case 0x19f330u: goto label_19f330;
        case 0x19f334u: goto label_19f334;
        case 0x19f338u: goto label_19f338;
        case 0x19f33cu: goto label_19f33c;
        case 0x19f340u: goto label_19f340;
        case 0x19f344u: goto label_19f344;
        case 0x19f348u: goto label_19f348;
        case 0x19f34cu: goto label_19f34c;
        case 0x19f350u: goto label_19f350;
        case 0x19f354u: goto label_19f354;
        case 0x19f358u: goto label_19f358;
        case 0x19f35cu: goto label_19f35c;
        case 0x19f360u: goto label_19f360;
        case 0x19f364u: goto label_19f364;
        case 0x19f368u: goto label_19f368;
        case 0x19f36cu: goto label_19f36c;
        case 0x19f370u: goto label_19f370;
        case 0x19f374u: goto label_19f374;
        case 0x19f378u: goto label_19f378;
        case 0x19f37cu: goto label_19f37c;
        case 0x19f380u: goto label_19f380;
        case 0x19f384u: goto label_19f384;
        case 0x19f388u: goto label_19f388;
        case 0x19f38cu: goto label_19f38c;
        case 0x19f390u: goto label_19f390;
        case 0x19f394u: goto label_19f394;
        case 0x19f398u: goto label_19f398;
        case 0x19f39cu: goto label_19f39c;
        case 0x19f3a0u: goto label_19f3a0;
        case 0x19f3a4u: goto label_19f3a4;
        case 0x19f3a8u: goto label_19f3a8;
        case 0x19f3acu: goto label_19f3ac;
        case 0x19f3b0u: goto label_19f3b0;
        case 0x19f3b4u: goto label_19f3b4;
        case 0x19f3b8u: goto label_19f3b8;
        case 0x19f3bcu: goto label_19f3bc;
        case 0x19f3c0u: goto label_19f3c0;
        case 0x19f3c4u: goto label_19f3c4;
        case 0x19f3c8u: goto label_19f3c8;
        case 0x19f3ccu: goto label_19f3cc;
        case 0x19f3d0u: goto label_19f3d0;
        case 0x19f3d4u: goto label_19f3d4;
        case 0x19f3d8u: goto label_19f3d8;
        case 0x19f3dcu: goto label_19f3dc;
        case 0x19f3e0u: goto label_19f3e0;
        case 0x19f3e4u: goto label_19f3e4;
        case 0x19f3e8u: goto label_19f3e8;
        case 0x19f3ecu: goto label_19f3ec;
        case 0x19f3f0u: goto label_19f3f0;
        case 0x19f3f4u: goto label_19f3f4;
        case 0x19f3f8u: goto label_19f3f8;
        case 0x19f3fcu: goto label_19f3fc;
        case 0x19f400u: goto label_19f400;
        case 0x19f404u: goto label_19f404;
        case 0x19f408u: goto label_19f408;
        case 0x19f40cu: goto label_19f40c;
        case 0x19f410u: goto label_19f410;
        case 0x19f414u: goto label_19f414;
        case 0x19f418u: goto label_19f418;
        case 0x19f41cu: goto label_19f41c;
        case 0x19f420u: goto label_19f420;
        case 0x19f424u: goto label_19f424;
        case 0x19f428u: goto label_19f428;
        case 0x19f42cu: goto label_19f42c;
        case 0x19f430u: goto label_19f430;
        case 0x19f434u: goto label_19f434;
        case 0x19f438u: goto label_19f438;
        case 0x19f43cu: goto label_19f43c;
        case 0x19f440u: goto label_19f440;
        case 0x19f444u: goto label_19f444;
        case 0x19f448u: goto label_19f448;
        case 0x19f44cu: goto label_19f44c;
        case 0x19f450u: goto label_19f450;
        case 0x19f454u: goto label_19f454;
        case 0x19f458u: goto label_19f458;
        case 0x19f45cu: goto label_19f45c;
        case 0x19f460u: goto label_19f460;
        case 0x19f464u: goto label_19f464;
        case 0x19f468u: goto label_19f468;
        case 0x19f46cu: goto label_19f46c;
        case 0x19f470u: goto label_19f470;
        case 0x19f474u: goto label_19f474;
        case 0x19f478u: goto label_19f478;
        case 0x19f47cu: goto label_19f47c;
        case 0x19f480u: goto label_19f480;
        case 0x19f484u: goto label_19f484;
        case 0x19f488u: goto label_19f488;
        case 0x19f48cu: goto label_19f48c;
        case 0x19f490u: goto label_19f490;
        case 0x19f494u: goto label_19f494;
        case 0x19f498u: goto label_19f498;
        case 0x19f49cu: goto label_19f49c;
        case 0x19f4a0u: goto label_19f4a0;
        case 0x19f4a4u: goto label_19f4a4;
        case 0x19f4a8u: goto label_19f4a8;
        case 0x19f4acu: goto label_19f4ac;
        case 0x19f4b0u: goto label_19f4b0;
        case 0x19f4b4u: goto label_19f4b4;
        case 0x19f4b8u: goto label_19f4b8;
        case 0x19f4bcu: goto label_19f4bc;
        case 0x19f4c0u: goto label_19f4c0;
        case 0x19f4c4u: goto label_19f4c4;
        case 0x19f4c8u: goto label_19f4c8;
        case 0x19f4ccu: goto label_19f4cc;
        case 0x19f4d0u: goto label_19f4d0;
        case 0x19f4d4u: goto label_19f4d4;
        case 0x19f4d8u: goto label_19f4d8;
        case 0x19f4dcu: goto label_19f4dc;
        case 0x19f4e0u: goto label_19f4e0;
        case 0x19f4e4u: goto label_19f4e4;
        case 0x19f4e8u: goto label_19f4e8;
        case 0x19f4ecu: goto label_19f4ec;
        case 0x19f4f0u: goto label_19f4f0;
        case 0x19f4f4u: goto label_19f4f4;
        case 0x19f4f8u: goto label_19f4f8;
        case 0x19f4fcu: goto label_19f4fc;
        case 0x19f500u: goto label_19f500;
        case 0x19f504u: goto label_19f504;
        case 0x19f508u: goto label_19f508;
        case 0x19f50cu: goto label_19f50c;
        case 0x19f510u: goto label_19f510;
        case 0x19f514u: goto label_19f514;
        case 0x19f518u: goto label_19f518;
        case 0x19f51cu: goto label_19f51c;
        case 0x19f520u: goto label_19f520;
        case 0x19f524u: goto label_19f524;
        case 0x19f528u: goto label_19f528;
        case 0x19f52cu: goto label_19f52c;
        case 0x19f530u: goto label_19f530;
        case 0x19f534u: goto label_19f534;
        case 0x19f538u: goto label_19f538;
        case 0x19f53cu: goto label_19f53c;
        case 0x19f540u: goto label_19f540;
        case 0x19f544u: goto label_19f544;
        case 0x19f548u: goto label_19f548;
        case 0x19f54cu: goto label_19f54c;
        case 0x19f550u: goto label_19f550;
        case 0x19f554u: goto label_19f554;
        case 0x19f558u: goto label_19f558;
        case 0x19f55cu: goto label_19f55c;
        case 0x19f560u: goto label_19f560;
        case 0x19f564u: goto label_19f564;
        case 0x19f568u: goto label_19f568;
        case 0x19f56cu: goto label_19f56c;
        case 0x19f570u: goto label_19f570;
        case 0x19f574u: goto label_19f574;
        case 0x19f578u: goto label_19f578;
        case 0x19f57cu: goto label_19f57c;
        case 0x19f580u: goto label_19f580;
        case 0x19f584u: goto label_19f584;
        case 0x19f588u: goto label_19f588;
        case 0x19f58cu: goto label_19f58c;
        case 0x19f590u: goto label_19f590;
        case 0x19f594u: goto label_19f594;
        case 0x19f598u: goto label_19f598;
        case 0x19f59cu: goto label_19f59c;
        case 0x19f5a0u: goto label_19f5a0;
        case 0x19f5a4u: goto label_19f5a4;
        case 0x19f5a8u: goto label_19f5a8;
        case 0x19f5acu: goto label_19f5ac;
        case 0x19f5b0u: goto label_19f5b0;
        case 0x19f5b4u: goto label_19f5b4;
        case 0x19f5b8u: goto label_19f5b8;
        case 0x19f5bcu: goto label_19f5bc;
        case 0x19f5c0u: goto label_19f5c0;
        case 0x19f5c4u: goto label_19f5c4;
        case 0x19f5c8u: goto label_19f5c8;
        case 0x19f5ccu: goto label_19f5cc;
        case 0x19f5d0u: goto label_19f5d0;
        case 0x19f5d4u: goto label_19f5d4;
        case 0x19f5d8u: goto label_19f5d8;
        case 0x19f5dcu: goto label_19f5dc;
        case 0x19f5e0u: goto label_19f5e0;
        case 0x19f5e4u: goto label_19f5e4;
        case 0x19f5e8u: goto label_19f5e8;
        case 0x19f5ecu: goto label_19f5ec;
        case 0x19f5f0u: goto label_19f5f0;
        case 0x19f5f4u: goto label_19f5f4;
        case 0x19f5f8u: goto label_19f5f8;
        case 0x19f5fcu: goto label_19f5fc;
        case 0x19f600u: goto label_19f600;
        case 0x19f604u: goto label_19f604;
        case 0x19f608u: goto label_19f608;
        case 0x19f60cu: goto label_19f60c;
        case 0x19f610u: goto label_19f610;
        case 0x19f614u: goto label_19f614;
        case 0x19f618u: goto label_19f618;
        case 0x19f61cu: goto label_19f61c;
        case 0x19f620u: goto label_19f620;
        case 0x19f624u: goto label_19f624;
        case 0x19f628u: goto label_19f628;
        case 0x19f62cu: goto label_19f62c;
        case 0x19f630u: goto label_19f630;
        case 0x19f634u: goto label_19f634;
        case 0x19f638u: goto label_19f638;
        case 0x19f63cu: goto label_19f63c;
        case 0x19f640u: goto label_19f640;
        case 0x19f644u: goto label_19f644;
        case 0x19f648u: goto label_19f648;
        case 0x19f64cu: goto label_19f64c;
        case 0x19f650u: goto label_19f650;
        case 0x19f654u: goto label_19f654;
        case 0x19f658u: goto label_19f658;
        case 0x19f65cu: goto label_19f65c;
        case 0x19f660u: goto label_19f660;
        case 0x19f664u: goto label_19f664;
        case 0x19f668u: goto label_19f668;
        case 0x19f66cu: goto label_19f66c;
        case 0x19f670u: goto label_19f670;
        case 0x19f674u: goto label_19f674;
        case 0x19f678u: goto label_19f678;
        case 0x19f67cu: goto label_19f67c;
        case 0x19f680u: goto label_19f680;
        case 0x19f684u: goto label_19f684;
        case 0x19f688u: goto label_19f688;
        case 0x19f68cu: goto label_19f68c;
        case 0x19f690u: goto label_19f690;
        case 0x19f694u: goto label_19f694;
        case 0x19f698u: goto label_19f698;
        case 0x19f69cu: goto label_19f69c;
        case 0x19f6a0u: goto label_19f6a0;
        case 0x19f6a4u: goto label_19f6a4;
        case 0x19f6a8u: goto label_19f6a8;
        case 0x19f6acu: goto label_19f6ac;
        case 0x19f6b0u: goto label_19f6b0;
        case 0x19f6b4u: goto label_19f6b4;
        case 0x19f6b8u: goto label_19f6b8;
        case 0x19f6bcu: goto label_19f6bc;
        case 0x19f6c0u: goto label_19f6c0;
        case 0x19f6c4u: goto label_19f6c4;
        case 0x19f6c8u: goto label_19f6c8;
        case 0x19f6ccu: goto label_19f6cc;
        case 0x19f6d0u: goto label_19f6d0;
        case 0x19f6d4u: goto label_19f6d4;
        case 0x19f6d8u: goto label_19f6d8;
        case 0x19f6dcu: goto label_19f6dc;
        case 0x19f6e0u: goto label_19f6e0;
        case 0x19f6e4u: goto label_19f6e4;
        case 0x19f6e8u: goto label_19f6e8;
        case 0x19f6ecu: goto label_19f6ec;
        case 0x19f6f0u: goto label_19f6f0;
        case 0x19f6f4u: goto label_19f6f4;
        case 0x19f6f8u: goto label_19f6f8;
        case 0x19f6fcu: goto label_19f6fc;
        case 0x19f700u: goto label_19f700;
        case 0x19f704u: goto label_19f704;
        case 0x19f708u: goto label_19f708;
        case 0x19f70cu: goto label_19f70c;
        case 0x19f710u: goto label_19f710;
        case 0x19f714u: goto label_19f714;
        case 0x19f718u: goto label_19f718;
        case 0x19f71cu: goto label_19f71c;
        case 0x19f720u: goto label_19f720;
        case 0x19f724u: goto label_19f724;
        case 0x19f728u: goto label_19f728;
        case 0x19f72cu: goto label_19f72c;
        case 0x19f730u: goto label_19f730;
        case 0x19f734u: goto label_19f734;
        case 0x19f738u: goto label_19f738;
        case 0x19f73cu: goto label_19f73c;
        case 0x19f740u: goto label_19f740;
        case 0x19f744u: goto label_19f744;
        case 0x19f748u: goto label_19f748;
        case 0x19f74cu: goto label_19f74c;
        case 0x19f750u: goto label_19f750;
        case 0x19f754u: goto label_19f754;
        case 0x19f758u: goto label_19f758;
        case 0x19f75cu: goto label_19f75c;
        case 0x19f760u: goto label_19f760;
        case 0x19f764u: goto label_19f764;
        case 0x19f768u: goto label_19f768;
        case 0x19f76cu: goto label_19f76c;
        case 0x19f770u: goto label_19f770;
        case 0x19f774u: goto label_19f774;
        case 0x19f778u: goto label_19f778;
        case 0x19f77cu: goto label_19f77c;
        case 0x19f780u: goto label_19f780;
        case 0x19f784u: goto label_19f784;
        case 0x19f788u: goto label_19f788;
        case 0x19f78cu: goto label_19f78c;
        case 0x19f790u: goto label_19f790;
        case 0x19f794u: goto label_19f794;
        case 0x19f798u: goto label_19f798;
        case 0x19f79cu: goto label_19f79c;
        case 0x19f7a0u: goto label_19f7a0;
        case 0x19f7a4u: goto label_19f7a4;
        case 0x19f7a8u: goto label_19f7a8;
        case 0x19f7acu: goto label_19f7ac;
        case 0x19f7b0u: goto label_19f7b0;
        case 0x19f7b4u: goto label_19f7b4;
        case 0x19f7b8u: goto label_19f7b8;
        case 0x19f7bcu: goto label_19f7bc;
        case 0x19f7c0u: goto label_19f7c0;
        case 0x19f7c4u: goto label_19f7c4;
        case 0x19f7c8u: goto label_19f7c8;
        case 0x19f7ccu: goto label_19f7cc;
        case 0x19f7d0u: goto label_19f7d0;
        case 0x19f7d4u: goto label_19f7d4;
        case 0x19f7d8u: goto label_19f7d8;
        case 0x19f7dcu: goto label_19f7dc;
        case 0x19f7e0u: goto label_19f7e0;
        case 0x19f7e4u: goto label_19f7e4;
        case 0x19f7e8u: goto label_19f7e8;
        case 0x19f7ecu: goto label_19f7ec;
        case 0x19f7f0u: goto label_19f7f0;
        case 0x19f7f4u: goto label_19f7f4;
        case 0x19f7f8u: goto label_19f7f8;
        case 0x19f7fcu: goto label_19f7fc;
        case 0x19f800u: goto label_19f800;
        case 0x19f804u: goto label_19f804;
        case 0x19f808u: goto label_19f808;
        case 0x19f80cu: goto label_19f80c;
        case 0x19f810u: goto label_19f810;
        case 0x19f814u: goto label_19f814;
        case 0x19f818u: goto label_19f818;
        case 0x19f81cu: goto label_19f81c;
        case 0x19f820u: goto label_19f820;
        case 0x19f824u: goto label_19f824;
        case 0x19f828u: goto label_19f828;
        case 0x19f82cu: goto label_19f82c;
        case 0x19f830u: goto label_19f830;
        case 0x19f834u: goto label_19f834;
        case 0x19f838u: goto label_19f838;
        case 0x19f83cu: goto label_19f83c;
        case 0x19f840u: goto label_19f840;
        case 0x19f844u: goto label_19f844;
        case 0x19f848u: goto label_19f848;
        case 0x19f84cu: goto label_19f84c;
        case 0x19f850u: goto label_19f850;
        case 0x19f854u: goto label_19f854;
        case 0x19f858u: goto label_19f858;
        case 0x19f85cu: goto label_19f85c;
        case 0x19f860u: goto label_19f860;
        case 0x19f864u: goto label_19f864;
        case 0x19f868u: goto label_19f868;
        case 0x19f86cu: goto label_19f86c;
        case 0x19f870u: goto label_19f870;
        case 0x19f874u: goto label_19f874;
        case 0x19f878u: goto label_19f878;
        case 0x19f87cu: goto label_19f87c;
        case 0x19f880u: goto label_19f880;
        case 0x19f884u: goto label_19f884;
        case 0x19f888u: goto label_19f888;
        case 0x19f88cu: goto label_19f88c;
        case 0x19f890u: goto label_19f890;
        case 0x19f894u: goto label_19f894;
        case 0x19f898u: goto label_19f898;
        case 0x19f89cu: goto label_19f89c;
        case 0x19f8a0u: goto label_19f8a0;
        case 0x19f8a4u: goto label_19f8a4;
        case 0x19f8a8u: goto label_19f8a8;
        case 0x19f8acu: goto label_19f8ac;
        case 0x19f8b0u: goto label_19f8b0;
        case 0x19f8b4u: goto label_19f8b4;
        case 0x19f8b8u: goto label_19f8b8;
        case 0x19f8bcu: goto label_19f8bc;
        case 0x19f8c0u: goto label_19f8c0;
        case 0x19f8c4u: goto label_19f8c4;
        case 0x19f8c8u: goto label_19f8c8;
        case 0x19f8ccu: goto label_19f8cc;
        case 0x19f8d0u: goto label_19f8d0;
        case 0x19f8d4u: goto label_19f8d4;
        case 0x19f8d8u: goto label_19f8d8;
        case 0x19f8dcu: goto label_19f8dc;
        case 0x19f8e0u: goto label_19f8e0;
        case 0x19f8e4u: goto label_19f8e4;
        case 0x19f8e8u: goto label_19f8e8;
        case 0x19f8ecu: goto label_19f8ec;
        case 0x19f8f0u: goto label_19f8f0;
        case 0x19f8f4u: goto label_19f8f4;
        case 0x19f8f8u: goto label_19f8f8;
        case 0x19f8fcu: goto label_19f8fc;
        case 0x19f900u: goto label_19f900;
        case 0x19f904u: goto label_19f904;
        case 0x19f908u: goto label_19f908;
        case 0x19f90cu: goto label_19f90c;
        case 0x19f910u: goto label_19f910;
        case 0x19f914u: goto label_19f914;
        case 0x19f918u: goto label_19f918;
        case 0x19f91cu: goto label_19f91c;
        case 0x19f920u: goto label_19f920;
        case 0x19f924u: goto label_19f924;
        case 0x19f928u: goto label_19f928;
        case 0x19f92cu: goto label_19f92c;
        case 0x19f930u: goto label_19f930;
        case 0x19f934u: goto label_19f934;
        case 0x19f938u: goto label_19f938;
        case 0x19f93cu: goto label_19f93c;
        case 0x19f940u: goto label_19f940;
        case 0x19f944u: goto label_19f944;
        case 0x19f948u: goto label_19f948;
        case 0x19f94cu: goto label_19f94c;
        case 0x19f950u: goto label_19f950;
        case 0x19f954u: goto label_19f954;
        case 0x19f958u: goto label_19f958;
        case 0x19f95cu: goto label_19f95c;
        case 0x19f960u: goto label_19f960;
        case 0x19f964u: goto label_19f964;
        case 0x19f968u: goto label_19f968;
        case 0x19f96cu: goto label_19f96c;
        case 0x19f970u: goto label_19f970;
        case 0x19f974u: goto label_19f974;
        case 0x19f978u: goto label_19f978;
        case 0x19f97cu: goto label_19f97c;
        case 0x19f980u: goto label_19f980;
        case 0x19f984u: goto label_19f984;
        case 0x19f988u: goto label_19f988;
        case 0x19f98cu: goto label_19f98c;
        case 0x19f990u: goto label_19f990;
        case 0x19f994u: goto label_19f994;
        case 0x19f998u: goto label_19f998;
        case 0x19f99cu: goto label_19f99c;
        case 0x19f9a0u: goto label_19f9a0;
        case 0x19f9a4u: goto label_19f9a4;
        case 0x19f9a8u: goto label_19f9a8;
        case 0x19f9acu: goto label_19f9ac;
        case 0x19f9b0u: goto label_19f9b0;
        case 0x19f9b4u: goto label_19f9b4;
        case 0x19f9b8u: goto label_19f9b8;
        case 0x19f9bcu: goto label_19f9bc;
        case 0x19f9c0u: goto label_19f9c0;
        case 0x19f9c4u: goto label_19f9c4;
        case 0x19f9c8u: goto label_19f9c8;
        case 0x19f9ccu: goto label_19f9cc;
        case 0x19f9d0u: goto label_19f9d0;
        case 0x19f9d4u: goto label_19f9d4;
        case 0x19f9d8u: goto label_19f9d8;
        case 0x19f9dcu: goto label_19f9dc;
        case 0x19f9e0u: goto label_19f9e0;
        case 0x19f9e4u: goto label_19f9e4;
        case 0x19f9e8u: goto label_19f9e8;
        case 0x19f9ecu: goto label_19f9ec;
        case 0x19f9f0u: goto label_19f9f0;
        case 0x19f9f4u: goto label_19f9f4;
        case 0x19f9f8u: goto label_19f9f8;
        default: break;
    }

    ctx->pc = 0x19ea60u;

label_19ea60:
    // 0x19ea60: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x19ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_19ea64:
    // 0x19ea64: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x19ea64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_19ea68:
    // 0x19ea68: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19ea68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_19ea6c:
    // 0x19ea6c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19ea6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_19ea70:
    // 0x19ea70: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19ea70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_19ea74:
    // 0x19ea74: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19ea74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_19ea78:
    // 0x19ea78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19ea78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_19ea7c:
    // 0x19ea7c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x19ea7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ea80:
    // 0x19ea80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19ea80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19ea84:
    // 0x19ea84: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19ea84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19ea88:
    // 0x19ea88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ea88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19ea8c:
    // 0x19ea8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19ea8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19ea90:
    // 0x19ea90: 0xc063dd4  jal         func_18F750
label_19ea94:
    if (ctx->pc == 0x19EA94u) {
        ctx->pc = 0x19EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA90u;
        // 0x19ea94: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EA98u;
        goto label_19ea98;
    }
    ctx->pc = 0x19EA90u;
    SET_GPR_U32(ctx, 31, 0x19EA98u);
    ctx->pc = 0x19EA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA90u;
    // 0x19ea94: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19EA90u, 0x19EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA98u;
label_19ea98:
    // 0x19ea98: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x19ea98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_19ea9c:
    // 0x19ea9c: 0x34a30002  ori         $v1, $a1, 0x2
    ctx->pc = 0x19ea9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
label_19eaa0:
    // 0x19eaa0: 0x104303c9  beq         $v0, $v1, . + 4 + (0x3C9 << 2)
label_19eaa4:
    if (ctx->pc == 0x19EAA4u) {
        ctx->pc = 0x19EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAA0u;
        // 0x19eaa4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAA8u;
        goto label_19eaa8;
    }
    ctx->pc = 0x19EAA0u;
    {
        const bool branch_taken_0x19eaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAA0u;
        // 0x19eaa4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eaa0) {
            ctx->pc = 0x19F9C8u;
            goto label_19f9c8;
        }
    }
    ctx->pc = 0x19EAA8u;
label_19eaa8:
    // 0x19eaa8: 0x104503c6  beq         $v0, $a1, . + 4 + (0x3C6 << 2)
label_19eaac:
    if (ctx->pc == 0x19EAACu) {
        ctx->pc = 0x19EAB0u;
        goto label_19eab0;
    }
    ctx->pc = 0x19EAA8u;
    {
        const bool branch_taken_0x19eaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x19eaa8) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19EAB0u;
label_19eab0:
    // 0x19eab0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x19eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_19eab4:
    // 0x19eab4: 0x104303b7  beq         $v0, $v1, . + 4 + (0x3B7 << 2)
label_19eab8:
    if (ctx->pc == 0x19EAB8u) {
        ctx->pc = 0x19EABCu;
        goto label_19eabc;
    }
    ctx->pc = 0x19EAB4u;
    {
        const bool branch_taken_0x19eab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19eab4) {
            ctx->pc = 0x19F994u;
            goto label_19f994;
        }
    }
    ctx->pc = 0x19EABCu;
label_19eabc:
    // 0x19eabc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x19eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_19eac0:
    // 0x19eac0: 0x10430374  beq         $v0, $v1, . + 4 + (0x374 << 2)
label_19eac4:
    if (ctx->pc == 0x19EAC4u) {
        ctx->pc = 0x19EAC8u;
        goto label_19eac8;
    }
    ctx->pc = 0x19EAC0u;
    {
        const bool branch_taken_0x19eac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19eac0) {
            ctx->pc = 0x19F894u;
            goto label_19f894;
        }
    }
    ctx->pc = 0x19EAC8u;
label_19eac8:
    // 0x19eac8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x19eac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19eacc:
    // 0x19eacc: 0x1046030c  beq         $v0, $a2, . + 4 + (0x30C << 2)
label_19ead0:
    if (ctx->pc == 0x19EAD0u) {
        ctx->pc = 0x19EAD4u;
        goto label_19ead4;
    }
    ctx->pc = 0x19EACCu;
    {
        const bool branch_taken_0x19eacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x19eacc) {
            ctx->pc = 0x19F700u;
            goto label_19f700;
        }
    }
    ctx->pc = 0x19EAD4u;
label_19ead4:
    // 0x19ead4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x19ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_19ead8:
    // 0x19ead8: 0x10430301  beq         $v0, $v1, . + 4 + (0x301 << 2)
label_19eadc:
    if (ctx->pc == 0x19EADCu) {
        ctx->pc = 0x19EAE0u;
        goto label_19eae0;
    }
    ctx->pc = 0x19EAD8u;
    {
        const bool branch_taken_0x19ead8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ead8) {
            ctx->pc = 0x19F6E0u;
            goto label_19f6e0;
        }
    }
    ctx->pc = 0x19EAE0u;
label_19eae0:
    // 0x19eae0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x19eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_19eae4:
    // 0x19eae4: 0x104302e1  beq         $v0, $v1, . + 4 + (0x2E1 << 2)
label_19eae8:
    if (ctx->pc == 0x19EAE8u) {
        ctx->pc = 0x19EAECu;
        goto label_19eaec;
    }
    ctx->pc = 0x19EAE4u;
    {
        const bool branch_taken_0x19eae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19eae4) {
            ctx->pc = 0x19F66Cu;
            goto label_19f66c;
        }
    }
    ctx->pc = 0x19EAECu;
label_19eaec:
    // 0x19eaec: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x19eaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_19eaf0:
    // 0x19eaf0: 0x104302d7  beq         $v0, $v1, . + 4 + (0x2D7 << 2)
label_19eaf4:
    if (ctx->pc == 0x19EAF4u) {
        ctx->pc = 0x19EAF8u;
        goto label_19eaf8;
    }
    ctx->pc = 0x19EAF0u;
    {
        const bool branch_taken_0x19eaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19eaf0) {
            ctx->pc = 0x19F650u;
            goto label_19f650;
        }
    }
    ctx->pc = 0x19EAF8u;
label_19eaf8:
    // 0x19eaf8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x19eaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_19eafc:
    // 0x19eafc: 0x104302bd  beq         $v0, $v1, . + 4 + (0x2BD << 2)
label_19eb00:
    if (ctx->pc == 0x19EB00u) {
        ctx->pc = 0x19EB04u;
        goto label_19eb04;
    }
    ctx->pc = 0x19EAFCu;
    {
        const bool branch_taken_0x19eafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19eafc) {
            ctx->pc = 0x19F5F4u;
            goto label_19f5f4;
        }
    }
    ctx->pc = 0x19EB04u;
label_19eb04:
    // 0x19eb04: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x19eb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_19eb08:
    // 0x19eb08: 0x104302af  beq         $v0, $v1, . + 4 + (0x2AF << 2)
label_19eb0c:
    if (ctx->pc == 0x19EB0Cu) {
        ctx->pc = 0x19EB10u;
        goto label_19eb10;
    }
    ctx->pc = 0x19EB08u;
    {
        const bool branch_taken_0x19eb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19eb08) {
            ctx->pc = 0x19F5C8u;
            goto label_19f5c8;
        }
    }
    ctx->pc = 0x19EB10u;
label_19eb10:
    // 0x19eb10: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x19eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_19eb14:
    // 0x19eb14: 0x10430295  beq         $v0, $v1, . + 4 + (0x295 << 2)
label_19eb18:
    if (ctx->pc == 0x19EB18u) {
        ctx->pc = 0x19EB1Cu;
        goto label_19eb1c;
    }
    ctx->pc = 0x19EB14u;
    {
        const bool branch_taken_0x19eb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19eb14) {
            ctx->pc = 0x19F56Cu;
            goto label_19f56c;
        }
    }
    ctx->pc = 0x19EB1Cu;
label_19eb1c:
    // 0x19eb1c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x19eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_19eb20:
    // 0x19eb20: 0x10430269  beq         $v0, $v1, . + 4 + (0x269 << 2)
label_19eb24:
    if (ctx->pc == 0x19EB24u) {
        ctx->pc = 0x19EB28u;
        goto label_19eb28;
    }
    ctx->pc = 0x19EB20u;
    {
        const bool branch_taken_0x19eb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19eb20) {
            ctx->pc = 0x19F4C8u;
            goto label_19f4c8;
        }
    }
    ctx->pc = 0x19EB28u;
label_19eb28:
    // 0x19eb28: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19eb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19eb2c:
    // 0x19eb2c: 0x10430237  beq         $v0, $v1, . + 4 + (0x237 << 2)
label_19eb30:
    if (ctx->pc == 0x19EB30u) {
        ctx->pc = 0x19EB34u;
        goto label_19eb34;
    }
    ctx->pc = 0x19EB2Cu;
    {
        const bool branch_taken_0x19eb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19eb2c) {
            ctx->pc = 0x19F40Cu;
            goto label_19f40c;
        }
    }
    ctx->pc = 0x19EB34u;
label_19eb34:
    // 0x19eb34: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_19eb38:
    // 0x19eb38: 0x10430219  beq         $v0, $v1, . + 4 + (0x219 << 2)
label_19eb3c:
    if (ctx->pc == 0x19EB3Cu) {
        ctx->pc = 0x19EB40u;
        goto label_19eb40;
    }
    ctx->pc = 0x19EB38u;
    {
        const bool branch_taken_0x19eb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19eb38) {
            ctx->pc = 0x19F3A0u;
            goto label_19f3a0;
        }
    }
    ctx->pc = 0x19EB40u;
label_19eb40:
    // 0x19eb40: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19eb44:
    // 0x19eb44: 0x104301d8  beq         $v0, $v1, . + 4 + (0x1D8 << 2)
label_19eb48:
    if (ctx->pc == 0x19EB48u) {
        ctx->pc = 0x19EB4Cu;
        goto label_19eb4c;
    }
    ctx->pc = 0x19EB44u;
    {
        const bool branch_taken_0x19eb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19eb44) {
            ctx->pc = 0x19F2A8u;
            goto label_19f2a8;
        }
    }
    ctx->pc = 0x19EB4Cu;
label_19eb4c:
    // 0x19eb4c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x19eb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19eb50:
    // 0x19eb50: 0x104301ca  beq         $v0, $v1, . + 4 + (0x1CA << 2)
label_19eb54:
    if (ctx->pc == 0x19EB54u) {
        ctx->pc = 0x19EB58u;
        goto label_19eb58;
    }
    ctx->pc = 0x19EB50u;
    {
        const bool branch_taken_0x19eb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19eb50) {
            ctx->pc = 0x19F27Cu;
            goto label_19f27c;
        }
    }
    ctx->pc = 0x19EB58u;
label_19eb58:
    // 0x19eb58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19eb5c:
    // 0x19eb5c: 0x104301a5  beq         $v0, $v1, . + 4 + (0x1A5 << 2)
label_19eb60:
    if (ctx->pc == 0x19EB60u) {
        ctx->pc = 0x19EB64u;
        goto label_19eb64;
    }
    ctx->pc = 0x19EB5Cu;
    {
        const bool branch_taken_0x19eb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19eb5c) {
            ctx->pc = 0x19F1F4u;
            goto label_19f1f4;
        }
    }
    ctx->pc = 0x19EB64u;
label_19eb64:
    // 0x19eb64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19eb68:
    // 0x19eb68: 0x1043017a  beq         $v0, $v1, . + 4 + (0x17A << 2)
label_19eb6c:
    if (ctx->pc == 0x19EB6Cu) {
        ctx->pc = 0x19EB70u;
        goto label_19eb70;
    }
    ctx->pc = 0x19EB68u;
    {
        const bool branch_taken_0x19eb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19eb68) {
            ctx->pc = 0x19F154u;
            goto label_19f154;
        }
    }
    ctx->pc = 0x19EB70u;
label_19eb70:
    // 0x19eb70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19eb74:
    // 0x19eb74: 0x1043015e  beq         $v0, $v1, . + 4 + (0x15E << 2)
label_19eb78:
    if (ctx->pc == 0x19EB78u) {
        ctx->pc = 0x19EB7Cu;
        goto label_19eb7c;
    }
    ctx->pc = 0x19EB74u;
    {
        const bool branch_taken_0x19eb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19eb74) {
            ctx->pc = 0x19F0F0u;
            goto label_19f0f0;
        }
    }
    ctx->pc = 0x19EB7Cu;
label_19eb7c:
    // 0x19eb7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19eb80:
    // 0x19eb80: 0x104300e9  beq         $v0, $v1, . + 4 + (0xE9 << 2)
label_19eb84:
    if (ctx->pc == 0x19EB84u) {
        ctx->pc = 0x19EB88u;
        goto label_19eb88;
    }
    ctx->pc = 0x19EB80u;
    {
        const bool branch_taken_0x19eb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19eb80) {
            ctx->pc = 0x19EF28u;
            goto label_19ef28;
        }
    }
    ctx->pc = 0x19EB88u;
label_19eb88:
    // 0x19eb88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19eb8c:
    if (ctx->pc == 0x19EB8Cu) {
        ctx->pc = 0x19EB90u;
        goto label_19eb90;
    }
    ctx->pc = 0x19EB88u;
    {
        const bool branch_taken_0x19eb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eb88) {
            ctx->pc = 0x19EB98u;
            goto label_19eb98;
        }
    }
    ctx->pc = 0x19EB90u;
label_19eb90:
    // 0x19eb90: 0x1000038c  b           . + 4 + (0x38C << 2)
label_19eb94:
    if (ctx->pc == 0x19EB94u) {
        ctx->pc = 0x19EB98u;
        goto label_19eb98;
    }
    ctx->pc = 0x19EB90u;
    {
        const bool branch_taken_0x19eb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eb90) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19EB98u;
label_19eb98:
    // 0x19eb98: 0xae800320  sw          $zero, 0x320($s4)
    ctx->pc = 0x19eb98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 0));
label_19eb9c:
    // 0x19eb9c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19eb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19eba0:
    // 0x19eba0: 0xaf9486f8  sw          $s4, -0x7908($gp)
    ctx->pc = 0x19eba0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U32(ctx, 20));
label_19eba4:
    // 0x19eba4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19eba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19eba8:
    // 0x19eba8: 0xae800688  sw          $zero, 0x688($s4)
    ctx->pc = 0x19eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1672), GPR_U32(ctx, 0));
label_19ebac:
    // 0x19ebac: 0x24a50288  addiu       $a1, $a1, 0x288
    ctx->pc = 0x19ebacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 648));
label_19ebb0:
    // 0x19ebb0: 0xae80068c  sw          $zero, 0x68C($s4)
    ctx->pc = 0x19ebb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1676), GPR_U32(ctx, 0));
label_19ebb4:
    // 0x19ebb4: 0xae800690  sw          $zero, 0x690($s4)
    ctx->pc = 0x19ebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 0));
label_19ebb8:
    // 0x19ebb8: 0xae800694  sw          $zero, 0x694($s4)
    ctx->pc = 0x19ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1684), GPR_U32(ctx, 0));
label_19ebbc:
    // 0x19ebbc: 0xae800698  sw          $zero, 0x698($s4)
    ctx->pc = 0x19ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1688), GPR_U32(ctx, 0));
label_19ebc0:
    // 0x19ebc0: 0xae80069c  sw          $zero, 0x69C($s4)
    ctx->pc = 0x19ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1692), GPR_U32(ctx, 0));
label_19ebc4:
    // 0x19ebc4: 0xc064918  jal         func_192460
label_19ebc8:
    if (ctx->pc == 0x19EBC8u) {
        ctx->pc = 0x19EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBC4u;
        // 0x19ebc8: 0xae8306a0  sw          $v1, 0x6A0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1696), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBCCu;
        goto label_19ebcc;
    }
    ctx->pc = 0x19EBC4u;
    SET_GPR_U32(ctx, 31, 0x19EBCCu);
    ctx->pc = 0x19EBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBC4u;
    // 0x19ebc8: 0xae8306a0  sw          $v1, 0x6A0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1696), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x19EBC4u, 0x19EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBCCu;
label_19ebcc:
    // 0x19ebcc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19ebccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19ebd0:
    // 0x19ebd0: 0xae820678  sw          $v0, 0x678($s4)
    ctx->pc = 0x19ebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1656), GPR_U32(ctx, 2));
label_19ebd4:
    // 0x19ebd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19ebd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19ebd8:
    // 0x19ebd8: 0xc064918  jal         func_192460
label_19ebdc:
    if (ctx->pc == 0x19EBDCu) {
        ctx->pc = 0x19EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBD8u;
        // 0x19ebdc: 0x24a50298  addiu       $a1, $a1, 0x298 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBE0u;
        goto label_19ebe0;
    }
    ctx->pc = 0x19EBD8u;
    SET_GPR_U32(ctx, 31, 0x19EBE0u);
    ctx->pc = 0x19EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBD8u;
    // 0x19ebdc: 0x24a50298  addiu       $a1, $a1, 0x298 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x19EBD8u, 0x19EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBE0u;
label_19ebe0:
    // 0x19ebe0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19ebe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19ebe4:
    // 0x19ebe4: 0xae820670  sw          $v0, 0x670($s4)
    ctx->pc = 0x19ebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1648), GPR_U32(ctx, 2));
label_19ebe8:
    // 0x19ebe8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19ebe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19ebec:
    // 0x19ebec: 0xc064918  jal         func_192460
label_19ebf0:
    if (ctx->pc == 0x19EBF0u) {
        ctx->pc = 0x19EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBECu;
        // 0x19ebf0: 0x24a502a8  addiu       $a1, $a1, 0x2A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBF4u;
        goto label_19ebf4;
    }
    ctx->pc = 0x19EBECu;
    SET_GPR_U32(ctx, 31, 0x19EBF4u);
    ctx->pc = 0x19EBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBECu;
    // 0x19ebf0: 0x24a502a8  addiu       $a1, $a1, 0x2A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x19EBECu, 0x19EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBF4u;
label_19ebf4:
    // 0x19ebf4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19ebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19ebf8:
    // 0x19ebf8: 0xae82067c  sw          $v0, 0x67C($s4)
    ctx->pc = 0x19ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1660), GPR_U32(ctx, 2));
label_19ebfc:
    // 0x19ebfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19ebfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19ec00:
    // 0x19ec00: 0xc064918  jal         func_192460
label_19ec04:
    if (ctx->pc == 0x19EC04u) {
        ctx->pc = 0x19EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC00u;
        // 0x19ec04: 0x24a502b0  addiu       $a1, $a1, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC08u;
        goto label_19ec08;
    }
    ctx->pc = 0x19EC00u;
    SET_GPR_U32(ctx, 31, 0x19EC08u);
    ctx->pc = 0x19EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC00u;
    // 0x19ec04: 0x24a502b0  addiu       $a1, $a1, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x19EC00u, 0x19EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC08u;
label_19ec08:
    // 0x19ec08: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19ec08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19ec0c:
    // 0x19ec0c: 0xae820680  sw          $v0, 0x680($s4)
    ctx->pc = 0x19ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1664), GPR_U32(ctx, 2));
label_19ec10:
    // 0x19ec10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19ec10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19ec14:
    // 0x19ec14: 0xc064918  jal         func_192460
label_19ec18:
    if (ctx->pc == 0x19EC18u) {
        ctx->pc = 0x19EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC14u;
        // 0x19ec18: 0x24a502c0  addiu       $a1, $a1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC1Cu;
        goto label_19ec1c;
    }
    ctx->pc = 0x19EC14u;
    SET_GPR_U32(ctx, 31, 0x19EC1Cu);
    ctx->pc = 0x19EC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC14u;
    // 0x19ec18: 0x24a502c0  addiu       $a1, $a1, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x19EC14u, 0x19EC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC1Cu;
label_19ec1c:
    // 0x19ec1c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19ec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19ec20:
    // 0x19ec20: 0xae820684  sw          $v0, 0x684($s4)
    ctx->pc = 0x19ec20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1668), GPR_U32(ctx, 2));
label_19ec24:
    // 0x19ec24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19ec24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19ec28:
    // 0x19ec28: 0xc064918  jal         func_192460
label_19ec2c:
    if (ctx->pc == 0x19EC2Cu) {
        ctx->pc = 0x19EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC28u;
        // 0x19ec2c: 0x24a502d0  addiu       $a1, $a1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC30u;
        goto label_19ec30;
    }
    ctx->pc = 0x19EC28u;
    SET_GPR_U32(ctx, 31, 0x19EC30u);
    ctx->pc = 0x19EC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC28u;
    // 0x19ec2c: 0x24a502d0  addiu       $a1, $a1, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x19EC28u, 0x19EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC30u;
label_19ec30:
    // 0x19ec30: 0xae820674  sw          $v0, 0x674($s4)
    ctx->pc = 0x19ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1652), GPR_U32(ctx, 2));
label_19ec34:
    // 0x19ec34: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x19ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_19ec38:
    // 0x19ec38: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x19ec38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_19ec3c:
    // 0x19ec3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ec40:
    // 0x19ec40: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19ec44:
    // 0x19ec44: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_19ec48:
    if (ctx->pc == 0x19EC48u) {
        ctx->pc = 0x19EC4Cu;
        goto label_19ec4c;
    }
    ctx->pc = 0x19EC44u;
    {
        const bool branch_taken_0x19ec44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19ec44) {
            ctx->pc = 0x19EC64u;
            goto label_19ec64;
        }
    }
    ctx->pc = 0x19EC4Cu;
label_19ec4c:
    // 0x19ec4c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x19ec4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19ec50:
    // 0x19ec50: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x19ec50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_19ec54:
    // 0x19ec54: 0xc067f68  jal         func_19FDA0
label_19ec58:
    if (ctx->pc == 0x19EC58u) {
        ctx->pc = 0x19EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC54u;
        // 0x19ec58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC5Cu;
        goto label_19ec5c;
    }
    ctx->pc = 0x19EC54u;
    SET_GPR_U32(ctx, 31, 0x19EC5Cu);
    ctx->pc = 0x19EC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC54u;
    // 0x19ec58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x19EC54u, 0x19EC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC5Cu;
label_19ec5c:
    // 0x19ec5c: 0x1000fff7  b           . + 4 + (-0x9 << 2)
label_19ec60:
    if (ctx->pc == 0x19EC60u) {
        ctx->pc = 0x19EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC5Cu;
        // 0x19ec60: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC64u;
        goto label_19ec64;
    }
    ctx->pc = 0x19EC5Cu;
    {
        const bool branch_taken_0x19ec5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC5Cu;
        // 0x19ec60: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec5c) {
            ctx->pc = 0x19EC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ec3c;
        }
    }
    ctx->pc = 0x19EC64u;
label_19ec64:
    // 0x19ec64: 0x0  nop
    ctx->pc = 0x19ec64u;
    // NOP
label_19ec68:
    // 0x19ec68: 0x8f848714  lw          $a0, -0x78EC($gp)
    ctx->pc = 0x19ec68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19ec6c:
    // 0x19ec6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19ec70:
    // 0x19ec70: 0x8c832830  lw          $v1, 0x2830($a0)
    ctx->pc = 0x19ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10288)));
label_19ec74:
    // 0x19ec74: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
label_19ec78:
    if (ctx->pc == 0x19EC78u) {
        ctx->pc = 0x19EC7Cu;
        goto label_19ec7c;
    }
    ctx->pc = 0x19EC74u;
    {
        const bool branch_taken_0x19ec74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ec74) {
            ctx->pc = 0x19ECE0u;
            goto label_19ece0;
        }
    }
    ctx->pc = 0x19EC7Cu;
label_19ec7c:
    // 0x19ec7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ec80:
    // 0x19ec80: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_19ec84:
    if (ctx->pc == 0x19EC84u) {
        ctx->pc = 0x19EC88u;
        goto label_19ec88;
    }
    ctx->pc = 0x19EC80u;
    {
        const bool branch_taken_0x19ec80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ec80) {
            ctx->pc = 0x19ECBCu;
            goto label_19ecbc;
        }
    }
    ctx->pc = 0x19EC88u;
label_19ec88:
    // 0x19ec88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_19ec8c:
    if (ctx->pc == 0x19EC8Cu) {
        ctx->pc = 0x19EC90u;
        goto label_19ec90;
    }
    ctx->pc = 0x19EC88u;
    {
        const bool branch_taken_0x19ec88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ec88) {
            ctx->pc = 0x19EC98u;
            goto label_19ec98;
        }
    }
    ctx->pc = 0x19EC90u;
label_19ec90:
    // 0x19ec90: 0x1000001c  b           . + 4 + (0x1C << 2)
label_19ec94:
    if (ctx->pc == 0x19EC94u) {
        ctx->pc = 0x19EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC90u;
        // 0x19ec94: 0x8f828714  lw          $v0, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC98u;
        goto label_19ec98;
    }
    ctx->pc = 0x19EC90u;
    {
        const bool branch_taken_0x19ec90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC90u;
        // 0x19ec94: 0x8f828714  lw          $v0, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec90) {
            ctx->pc = 0x19ED04u;
            goto label_19ed04;
        }
    }
    ctx->pc = 0x19EC98u;
label_19ec98:
    // 0x19ec98: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x19ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_19ec9c:
    // 0x19ec9c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x19ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_19eca0:
    // 0x19eca0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19eca4:
    // 0x19eca4: 0xac8228e4  sw          $v0, 0x28E4($a0)
    ctx->pc = 0x19eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10468), GPR_U32(ctx, 2));
label_19eca8:
    // 0x19eca8: 0x8e830664  lw          $v1, 0x664($s4)
    ctx->pc = 0x19eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_19ecac:
    // 0x19ecac: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19ecb0:
    // 0x19ecb0: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x19ecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_19ecb4:
    // 0x19ecb4: 0x10000012  b           . + 4 + (0x12 << 2)
label_19ecb8:
    if (ctx->pc == 0x19ECB8u) {
        ctx->pc = 0x19ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECB4u;
        // 0x19ecb8: 0xac4328f0  sw          $v1, 0x28F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 10480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECBCu;
        goto label_19ecbc;
    }
    ctx->pc = 0x19ECB4u;
    {
        const bool branch_taken_0x19ecb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECB4u;
        // 0x19ecb8: 0xac4328f0  sw          $v1, 0x28F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 10480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ecb4) {
            ctx->pc = 0x19ED00u;
            goto label_19ed00;
        }
    }
    ctx->pc = 0x19ECBCu;
label_19ecbc:
    // 0x19ecbc: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x19ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_19ecc0:
    // 0x19ecc0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x19ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_19ecc4:
    // 0x19ecc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19ecc8:
    // 0x19ecc8: 0xac8228e4  sw          $v0, 0x28E4($a0)
    ctx->pc = 0x19ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10468), GPR_U32(ctx, 2));
label_19eccc:
    // 0x19eccc: 0x8e830664  lw          $v1, 0x664($s4)
    ctx->pc = 0x19ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_19ecd0:
    // 0x19ecd0: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19ecd4:
    // 0x19ecd4: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x19ecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19ecd8:
    // 0x19ecd8: 0x10000009  b           . + 4 + (0x9 << 2)
label_19ecdc:
    if (ctx->pc == 0x19ECDCu) {
        ctx->pc = 0x19ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECD8u;
        // 0x19ecdc: 0xac4328f0  sw          $v1, 0x28F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 10480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECE0u;
        goto label_19ece0;
    }
    ctx->pc = 0x19ECD8u;
    {
        const bool branch_taken_0x19ecd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECD8u;
        // 0x19ecdc: 0xac4328f0  sw          $v1, 0x28F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 10480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ecd8) {
            ctx->pc = 0x19ED00u;
            goto label_19ed00;
        }
    }
    ctx->pc = 0x19ECE0u;
label_19ece0:
    // 0x19ece0: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x19ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_19ece4:
    // 0x19ece4: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x19ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_19ece8:
    // 0x19ece8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19ecec:
    // 0x19ecec: 0xac8228e4  sw          $v0, 0x28E4($a0)
    ctx->pc = 0x19ececu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10468), GPR_U32(ctx, 2));
label_19ecf0:
    // 0x19ecf0: 0x8e830664  lw          $v1, 0x664($s4)
    ctx->pc = 0x19ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_19ecf4:
    // 0x19ecf4: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19ecf8:
    // 0x19ecf8: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x19ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_19ecfc:
    // 0x19ecfc: 0xac4328f0  sw          $v1, 0x28F0($v0)
    ctx->pc = 0x19ecfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10480), GPR_U32(ctx, 3));
label_19ed00:
    // 0x19ed00: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19ed04:
    // 0x19ed04: 0x9043282a  lbu         $v1, 0x282A($v0)
    ctx->pc = 0x19ed04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10282)));
label_19ed08:
    // 0x19ed08: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_19ed0c:
    if (ctx->pc == 0x19ED0Cu) {
        ctx->pc = 0x19ED10u;
        goto label_19ed10;
    }
    ctx->pc = 0x19ED08u;
    {
        const bool branch_taken_0x19ed08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ed08) {
            ctx->pc = 0x19ED1Cu;
            goto label_19ed1c;
        }
    }
    ctx->pc = 0x19ED10u;
label_19ed10:
    // 0x19ed10: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x19ed10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
label_19ed14:
    // 0x19ed14: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_19ed18:
    if (ctx->pc == 0x19ED18u) {
        ctx->pc = 0x19ED1Cu;
        goto label_19ed1c;
    }
    ctx->pc = 0x19ED14u;
    {
        const bool branch_taken_0x19ed14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed14) {
            ctx->pc = 0x19EE6Cu;
            goto label_19ee6c;
        }
    }
    ctx->pc = 0x19ED1Cu;
label_19ed1c:
    // 0x19ed1c: 0x8e8206a0  lw          $v0, 0x6A0($s4)
    ctx->pc = 0x19ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1696)));
label_19ed20:
    // 0x19ed20: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_19ed24:
    if (ctx->pc == 0x19ED24u) {
        ctx->pc = 0x19ED28u;
        goto label_19ed28;
    }
    ctx->pc = 0x19ED20u;
    {
        const bool branch_taken_0x19ed20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed20) {
            ctx->pc = 0x19EE6Cu;
            goto label_19ee6c;
        }
    }
    ctx->pc = 0x19ED28u;
label_19ed28:
    // 0x19ed28: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_19ed2c:
    if (ctx->pc == 0x19ED2Cu) {
        ctx->pc = 0x19ED30u;
        goto label_19ed30;
    }
    ctx->pc = 0x19ED28u;
    {
        const bool branch_taken_0x19ed28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed28) {
            ctx->pc = 0x19ED6Cu;
            goto label_19ed6c;
        }
    }
    ctx->pc = 0x19ED30u;
label_19ed30:
    // 0x19ed30: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19ed30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ed34:
    // 0x19ed34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19ed38:
    // 0x19ed38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19ed38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19ed3c:
    // 0x19ed3c: 0x0  nop
    ctx->pc = 0x19ed3cu;
    // NOP
label_19ed40:
    // 0x19ed40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ed40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ed44:
    // 0x19ed44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19ed44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19ed48:
    // 0x19ed48: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19ed48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19ed4c:
    // 0x19ed4c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19ed4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19ed50:
    // 0x19ed50: 0x0  nop
    ctx->pc = 0x19ed50u;
    // NOP
label_19ed54:
    // 0x19ed54: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19ed58:
    // 0x19ed58: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x19ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19ed5c:
    // 0x19ed5c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19ed60:
    // 0x19ed60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19ed64:
    // 0x19ed64: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_19ed68:
    // 0x19ed68: 0xae82069c  sw          $v0, 0x69C($s4)
    ctx->pc = 0x19ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1692), GPR_U32(ctx, 2));
label_19ed6c:
    // 0x19ed6c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19ed70:
    // 0x19ed70: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x19ed70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
label_19ed74:
    // 0x19ed74: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_19ed78:
    if (ctx->pc == 0x19ED78u) {
        ctx->pc = 0x19ED7Cu;
        goto label_19ed7c;
    }
    ctx->pc = 0x19ED74u;
    {
        const bool branch_taken_0x19ed74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed74) {
            ctx->pc = 0x19EDB8u;
            goto label_19edb8;
        }
    }
    ctx->pc = 0x19ED7Cu;
label_19ed7c:
    // 0x19ed7c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19ed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ed80:
    // 0x19ed80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19ed84:
    // 0x19ed84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19ed84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19ed88:
    // 0x19ed88: 0x0  nop
    ctx->pc = 0x19ed88u;
    // NOP
label_19ed8c:
    // 0x19ed8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ed8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ed90:
    // 0x19ed90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19ed90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19ed94:
    // 0x19ed94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19ed94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19ed98:
    // 0x19ed98: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19ed98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19ed9c:
    // 0x19ed9c: 0x0  nop
    ctx->pc = 0x19ed9cu;
    // NOP
label_19eda0:
    // 0x19eda0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19eda4:
    // 0x19eda4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x19eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19eda8:
    // 0x19eda8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19edac:
    // 0x19edac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19edacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19edb0:
    // 0x19edb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19edb4:
    // 0x19edb4: 0xae82069c  sw          $v0, 0x69C($s4)
    ctx->pc = 0x19edb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1692), GPR_U32(ctx, 2));
label_19edb8:
    // 0x19edb8: 0x8f838214  lw          $v1, -0x7DEC($gp)
    ctx->pc = 0x19edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_19edbc:
    // 0x19edbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19edc0:
    // 0x19edc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19edc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19edc4:
    // 0x19edc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19edc8:
    // 0x19edc8: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x19edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_19edcc:
    // 0x19edcc: 0xa04402f2  sb          $a0, 0x2F2($v0)
    ctx->pc = 0x19edccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 754), (uint8_t)GPR_U32(ctx, 4));
label_19edd0:
    // 0x19edd0: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19edd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19edd4:
    // 0x19edd4: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x19edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_19edd8:
    // 0x19edd8: 0x8e85069c  lw          $a1, 0x69C($s4)
    ctx->pc = 0x19edd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
label_19eddc:
    // 0x19eddc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19eddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ede0:
    // 0x19ede0: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x19ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_19ede4:
    // 0x19ede4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19ede4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19ede8:
    // 0x19ede8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19ede8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19edec:
    // 0x19edec: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19edecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_19edf0:
    // 0x19edf0: 0x0  nop
    ctx->pc = 0x19edf0u;
    // NOP
label_19edf4:
    // 0x19edf4: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x19edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_19edf8:
    // 0x19edf8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x19edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_19edfc:
    // 0x19edfc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19ee00:
    // 0x19ee00: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x19ee00u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19ee04:
    // 0x19ee04: 0x0  nop
    ctx->pc = 0x19ee04u;
    // NOP
label_19ee08:
    // 0x19ee08: 0x0  nop
    ctx->pc = 0x19ee08u;
    // NOP
label_19ee0c:
    // 0x19ee0c: 0x1012  mflo        $v0
    ctx->pc = 0x19ee0cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_19ee10:
    // 0x19ee10: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x19ee10u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19ee14:
    // 0x19ee14: 0xac8202e0  sw          $v0, 0x2E0($a0)
    ctx->pc = 0x19ee14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 736), GPR_U32(ctx, 2));
label_19ee18:
    // 0x19ee18: 0x0  nop
    ctx->pc = 0x19ee18u;
    // NOP
label_19ee1c:
    // 0x19ee1c: 0x1010  mfhi        $v0
    ctx->pc = 0x19ee1cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19ee20:
    // 0x19ee20: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x19ee20u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19ee24:
    // 0x19ee24: 0x7046001a  div1        $zero, $v0, $a2
    ctx->pc = 0x19ee24u;
    { int32_t divisor = GPR_S32(ctx, 6); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
label_19ee28:
    // 0x19ee28: 0x0  nop
    ctx->pc = 0x19ee28u;
    // NOP
label_19ee2c:
    // 0x19ee2c: 0x0  nop
    ctx->pc = 0x19ee2cu;
    // NOP
label_19ee30:
    // 0x19ee30: 0x1810  mfhi        $v1
    ctx->pc = 0x19ee30u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_19ee34:
    // 0x19ee34: 0x70001012  mflo1       $v0
    ctx->pc = 0x19ee34u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_19ee38:
    // 0x19ee38: 0xac8202e4  sw          $v0, 0x2E4($a0)
    ctx->pc = 0x19ee38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 740), GPR_U32(ctx, 2));
label_19ee3c:
    // 0x19ee3c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19ee40:
    // 0x19ee40: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19ee44:
    // 0x19ee44: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19ee48:
    // 0x19ee48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19ee4c:
    // 0x19ee4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19ee50:
    // 0x19ee50: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x19ee50u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19ee54:
    // 0x19ee54: 0x0  nop
    ctx->pc = 0x19ee54u;
    // NOP
label_19ee58:
    // 0x19ee58: 0x0  nop
    ctx->pc = 0x19ee58u;
    // NOP
label_19ee5c:
    // 0x19ee5c: 0x1012  mflo        $v0
    ctx->pc = 0x19ee5cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_19ee60:
    // 0x19ee60: 0xac8202e8  sw          $v0, 0x2E8($a0)
    ctx->pc = 0x19ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 744), GPR_U32(ctx, 2));
label_19ee64:
    // 0x19ee64: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19ee68:
    // 0x19ee68: 0xac4028f0  sw          $zero, 0x28F0($v0)
    ctx->pc = 0x19ee68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10480), GPR_U32(ctx, 0));
label_19ee6c:
    // 0x19ee6c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19ee70:
    // 0x19ee70: 0x9062282b  lbu         $v0, 0x282B($v1)
    ctx->pc = 0x19ee70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10283)));
label_19ee74:
    // 0x19ee74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_19ee78:
    if (ctx->pc == 0x19EE78u) {
        ctx->pc = 0x19EE7Cu;
        goto label_19ee7c;
    }
    ctx->pc = 0x19EE74u;
    {
        const bool branch_taken_0x19ee74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ee74) {
            ctx->pc = 0x19EE80u;
            goto label_19ee80;
        }
    }
    ctx->pc = 0x19EE7Cu;
label_19ee7c:
    // 0x19ee7c: 0xac6028f0  sw          $zero, 0x28F0($v1)
    ctx->pc = 0x19ee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10480), GPR_U32(ctx, 0));
label_19ee80:
    // 0x19ee80: 0x8f878714  lw          $a3, -0x78EC($gp)
    ctx->pc = 0x19ee80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19ee84:
    // 0x19ee84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19ee84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ee88:
    // 0x19ee88: 0x24e510c8  addiu       $a1, $a3, 0x10C8
    ctx->pc = 0x19ee88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4296));
label_19ee8c:
    // 0x19ee8c: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x19ee8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19ee90:
    // 0x19ee90: 0x10000008  b           . + 4 + (0x8 << 2)
label_19ee94:
    if (ctx->pc == 0x19EE94u) {
        ctx->pc = 0x19EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE90u;
        // 0x19ee94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE98u;
        goto label_19ee98;
    }
    ctx->pc = 0x19EE90u;
    {
        const bool branch_taken_0x19ee90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE90u;
        // 0x19ee94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee90) {
            ctx->pc = 0x19EEB4u;
            goto label_19eeb4;
        }
    }
    ctx->pc = 0x19EE98u;
label_19ee98:
    // 0x19ee98: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x19ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_19ee9c:
    // 0x19ee9c: 0x84e32828  lh          $v1, 0x2828($a3)
    ctx->pc = 0x19ee9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10280)));
label_19eea0:
    // 0x19eea0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x19eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_19eea4:
    // 0x19eea4: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_19eea8:
    if (ctx->pc == 0x19EEA8u) {
        ctx->pc = 0x19EEACu;
        goto label_19eeac;
    }
    ctx->pc = 0x19EEA4u;
    {
        const bool branch_taken_0x19eea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19eea4) {
            ctx->pc = 0x19EEC4u;
            goto label_19eec4;
        }
    }
    ctx->pc = 0x19EEACu;
label_19eeac:
    // 0x19eeac: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x19eeacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_19eeb0:
    // 0x19eeb0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19eeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19eeb4:
    // 0x19eeb4: 0x0  nop
    ctx->pc = 0x19eeb4u;
    // NOP
label_19eeb8:
    // 0x19eeb8: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x19eeb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_19eebc:
    // 0x19eebc: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_19eec0:
    if (ctx->pc == 0x19EEC0u) {
        ctx->pc = 0x19EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EEBCu;
        // 0x19eec0: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EEC4u;
        goto label_19eec4;
    }
    ctx->pc = 0x19EEBCu;
    {
        const bool branch_taken_0x19eebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EEBCu;
        // 0x19eec0: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eebc) {
            ctx->pc = 0x19EE9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ee9c;
        }
    }
    ctx->pc = 0x19EEC4u;
label_19eec4:
    // 0x19eec4: 0x0  nop
    ctx->pc = 0x19eec4u;
    // NOP
label_19eec8:
    // 0x19eec8: 0x10880013  beq         $a0, $t0, . + 4 + (0x13 << 2)
label_19eecc:
    if (ctx->pc == 0x19EECCu) {
        ctx->pc = 0x19EED0u;
        goto label_19eed0;
    }
    ctx->pc = 0x19EEC8u;
    {
        const bool branch_taken_0x19eec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        if (branch_taken_0x19eec8) {
            ctx->pc = 0x19EF18u;
            goto label_19ef18;
        }
    }
    ctx->pc = 0x19EED0u;
label_19eed0:
    // 0x19eed0: 0x90e2282b  lbu         $v0, 0x282B($a3)
    ctx->pc = 0x19eed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10283)));
label_19eed4:
    // 0x19eed4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_19eed8:
    if (ctx->pc == 0x19EED8u) {
        ctx->pc = 0x19EEDCu;
        goto label_19eedc;
    }
    ctx->pc = 0x19EED4u;
    {
        const bool branch_taken_0x19eed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19eed4) {
            ctx->pc = 0x19EF18u;
            goto label_19ef18;
        }
    }
    ctx->pc = 0x19EEDCu;
label_19eedc:
    // 0x19eedc: 0x90e2282c  lbu         $v0, 0x282C($a3)
    ctx->pc = 0x19eedcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10284)));
label_19eee0:
    // 0x19eee0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_19eee4:
    if (ctx->pc == 0x19EEE4u) {
        ctx->pc = 0x19EEE8u;
        goto label_19eee8;
    }
    ctx->pc = 0x19EEE0u;
    {
        const bool branch_taken_0x19eee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19eee0) {
            ctx->pc = 0x19EF18u;
            goto label_19ef18;
        }
    }
    ctx->pc = 0x19EEE8u;
label_19eee8:
    // 0x19eee8: 0x90e2282a  lbu         $v0, 0x282A($a3)
    ctx->pc = 0x19eee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10282)));
label_19eeec:
    // 0x19eeec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_19eef0:
    if (ctx->pc == 0x19EEF0u) {
        ctx->pc = 0x19EEF4u;
        goto label_19eef4;
    }
    ctx->pc = 0x19EEECu;
    {
        const bool branch_taken_0x19eeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19eeec) {
            ctx->pc = 0x19EF18u;
            goto label_19ef18;
        }
    }
    ctx->pc = 0x19EEF4u;
label_19eef4:
    // 0x19eef4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x19eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_19eef8:
    // 0x19eef8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19eefc:
    // 0x19eefc: 0x90631684  lbu         $v1, 0x1684($v1)
    ctx->pc = 0x19eefcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5764)));
label_19ef00:
    // 0x19ef00: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_19ef04:
    if (ctx->pc == 0x19EF04u) {
        ctx->pc = 0x19EF08u;
        goto label_19ef08;
    }
    ctx->pc = 0x19EF00u;
    {
        const bool branch_taken_0x19ef00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19ef00) {
            ctx->pc = 0x19EF18u;
            goto label_19ef18;
        }
    }
    ctx->pc = 0x19EF08u;
label_19ef08:
    // 0x19ef08: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x19ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_19ef0c:
    // 0x19ef0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ef10:
    // 0x19ef10: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x19ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_19ef14:
    // 0x19ef14: 0xa04302f0  sb          $v1, 0x2F0($v0)
    ctx->pc = 0x19ef14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 752), (uint8_t)GPR_U32(ctx, 3));
label_19ef18:
    // 0x19ef18: 0xc063e14  jal         func_18F850
label_19ef1c:
    if (ctx->pc == 0x19EF1Cu) {
        ctx->pc = 0x19EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF18u;
        // 0x19ef1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EF20u;
        goto label_19ef20;
    }
    ctx->pc = 0x19EF18u;
    SET_GPR_U32(ctx, 31, 0x19EF20u);
    ctx->pc = 0x19EF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EF18u;
    // 0x19ef1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19EF18u, 0x19EF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF20u;
label_19ef20:
    // 0x19ef20: 0x100002a8  b           . + 4 + (0x2A8 << 2)
label_19ef24:
    if (ctx->pc == 0x19EF24u) {
        ctx->pc = 0x19EF28u;
        goto label_19ef28;
    }
    ctx->pc = 0x19EF20u;
    {
        const bool branch_taken_0x19ef20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef20) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19EF28u;
label_19ef28:
    // 0x19ef28: 0xae800320  sw          $zero, 0x320($s4)
    ctx->pc = 0x19ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 0));
label_19ef2c:
    // 0x19ef2c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19ef30:
    // 0x19ef30: 0x9062282c  lbu         $v0, 0x282C($v1)
    ctx->pc = 0x19ef30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10284)));
label_19ef34:
    // 0x19ef34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19ef38:
    if (ctx->pc == 0x19EF38u) {
        ctx->pc = 0x19EF3Cu;
        goto label_19ef3c;
    }
    ctx->pc = 0x19EF34u;
    {
        const bool branch_taken_0x19ef34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ef34) {
            ctx->pc = 0x19EF48u;
            goto label_19ef48;
        }
    }
    ctx->pc = 0x19EF3Cu;
label_19ef3c:
    // 0x19ef3c: 0x9062282a  lbu         $v0, 0x282A($v1)
    ctx->pc = 0x19ef3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10282)));
label_19ef40:
    // 0x19ef40: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_19ef44:
    if (ctx->pc == 0x19EF44u) {
        ctx->pc = 0x19EF48u;
        goto label_19ef48;
    }
    ctx->pc = 0x19EF40u;
    {
        const bool branch_taken_0x19ef40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef40) {
            ctx->pc = 0x19F034u;
            goto label_19f034;
        }
    }
    ctx->pc = 0x19EF48u;
label_19ef48:
    // 0x19ef48: 0x8e8206a0  lw          $v0, 0x6A0($s4)
    ctx->pc = 0x19ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1696)));
label_19ef4c:
    // 0x19ef4c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_19ef50:
    if (ctx->pc == 0x19EF50u) {
        ctx->pc = 0x19EF54u;
        goto label_19ef54;
    }
    ctx->pc = 0x19EF4Cu;
    {
        const bool branch_taken_0x19ef4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef4c) {
            ctx->pc = 0x19F034u;
            goto label_19f034;
        }
    }
    ctx->pc = 0x19EF54u;
label_19ef54:
    // 0x19ef54: 0x8e82069c  lw          $v0, 0x69C($s4)
    ctx->pc = 0x19ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
label_19ef58:
    // 0x19ef58: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_19ef5c:
    if (ctx->pc == 0x19EF5Cu) {
        ctx->pc = 0x19EF60u;
        goto label_19ef60;
    }
    ctx->pc = 0x19EF58u;
    {
        const bool branch_taken_0x19ef58 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x19ef58) {
            ctx->pc = 0x19EF74u;
            goto label_19ef74;
        }
    }
    ctx->pc = 0x19EF60u;
label_19ef60:
    // 0x19ef60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19ef60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19ef64:
    // 0x19ef64: 0xc063e08  jal         func_18F820
label_19ef68:
    if (ctx->pc == 0x19EF68u) {
        ctx->pc = 0x19EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF64u;
        // 0x19ef68: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EF6Cu;
        goto label_19ef6c;
    }
    ctx->pc = 0x19EF64u;
    SET_GPR_U32(ctx, 31, 0x19EF6Cu);
    ctx->pc = 0x19EF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EF64u;
    // 0x19ef68: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19EF64u, 0x19EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF6Cu;
label_19ef6c:
    // 0x19ef6c: 0x10000295  b           . + 4 + (0x295 << 2)
label_19ef70:
    if (ctx->pc == 0x19EF70u) {
        ctx->pc = 0x19EF74u;
        goto label_19ef74;
    }
    ctx->pc = 0x19EF6Cu;
    {
        const bool branch_taken_0x19ef6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef6c) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19EF74u;
label_19ef74:
    // 0x19ef74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19ef78:
    // 0x19ef78: 0xae82069c  sw          $v0, 0x69C($s4)
    ctx->pc = 0x19ef78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1692), GPR_U32(ctx, 2));
label_19ef7c:
    // 0x19ef7c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19ef80:
    // 0x19ef80: 0x9062282a  lbu         $v0, 0x282A($v1)
    ctx->pc = 0x19ef80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10282)));
label_19ef84:
    // 0x19ef84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19ef88:
    if (ctx->pc == 0x19EF88u) {
        ctx->pc = 0x19EF8Cu;
        goto label_19ef8c;
    }
    ctx->pc = 0x19EF84u;
    {
        const bool branch_taken_0x19ef84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ef84) {
            ctx->pc = 0x19EF98u;
            goto label_19ef98;
        }
    }
    ctx->pc = 0x19EF8Cu;
label_19ef8c:
    // 0x19ef8c: 0x9062282c  lbu         $v0, 0x282C($v1)
    ctx->pc = 0x19ef8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10284)));
label_19ef90:
    // 0x19ef90: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_19ef94:
    if (ctx->pc == 0x19EF94u) {
        ctx->pc = 0x19EF98u;
        goto label_19ef98;
    }
    ctx->pc = 0x19EF90u;
    {
        const bool branch_taken_0x19ef90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef90) {
            ctx->pc = 0x19F034u;
            goto label_19f034;
        }
    }
    ctx->pc = 0x19EF98u;
label_19ef98:
    // 0x19ef98: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19ef98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ef9c:
    // 0x19ef9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19efa0:
    // 0x19efa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19efa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19efa4:
    // 0x19efa4: 0x8e83069c  lw          $v1, 0x69C($s4)
    ctx->pc = 0x19efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
label_19efa8:
    // 0x19efa8: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x19efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_19efac:
    // 0x19efac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19efacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19efb0:
    // 0x19efb0: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x19efb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_19efb4:
    // 0x19efb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19efb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19efb8:
    // 0x19efb8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19efb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19efbc:
    // 0x19efbc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x19efbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_19efc0:
    // 0x19efc0: 0x0  nop
    ctx->pc = 0x19efc0u;
    // NOP
label_19efc4:
    // 0x19efc4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x19efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_19efc8:
    // 0x19efc8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x19efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19efcc:
    // 0x19efcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19efccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19efd0:
    // 0x19efd0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19efd0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19efd4:
    // 0x19efd4: 0x0  nop
    ctx->pc = 0x19efd4u;
    // NOP
label_19efd8:
    // 0x19efd8: 0x0  nop
    ctx->pc = 0x19efd8u;
    // NOP
label_19efdc:
    // 0x19efdc: 0x3012  mflo        $a2
    ctx->pc = 0x19efdcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_19efe0:
    // 0x19efe0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19efe0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19efe4:
    // 0x19efe4: 0xac8602e0  sw          $a2, 0x2E0($a0)
    ctx->pc = 0x19efe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 736), GPR_U32(ctx, 6));
label_19efe8:
    // 0x19efe8: 0x0  nop
    ctx->pc = 0x19efe8u;
    // NOP
label_19efec:
    // 0x19efec: 0x1010  mfhi        $v0
    ctx->pc = 0x19efecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19eff0:
    // 0x19eff0: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x19eff0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19eff4:
    // 0x19eff4: 0x7045001a  div1        $zero, $v0, $a1
    ctx->pc = 0x19eff4u;
    { int32_t divisor = GPR_S32(ctx, 5); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
label_19eff8:
    // 0x19eff8: 0x0  nop
    ctx->pc = 0x19eff8u;
    // NOP
label_19effc:
    // 0x19effc: 0x0  nop
    ctx->pc = 0x19effcu;
    // NOP
label_19f000:
    // 0x19f000: 0x1810  mfhi        $v1
    ctx->pc = 0x19f000u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_19f004:
    // 0x19f004: 0x70001012  mflo1       $v0
    ctx->pc = 0x19f004u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_19f008:
    // 0x19f008: 0xac8202e4  sw          $v0, 0x2E4($a0)
    ctx->pc = 0x19f008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 740), GPR_U32(ctx, 2));
label_19f00c:
    // 0x19f00c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19f010:
    // 0x19f010: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19f010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19f014:
    // 0x19f014: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19f014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19f018:
    // 0x19f018: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19f018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19f01c:
    // 0x19f01c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19f020:
    // 0x19f020: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x19f020u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19f024:
    // 0x19f024: 0x0  nop
    ctx->pc = 0x19f024u;
    // NOP
label_19f028:
    // 0x19f028: 0x0  nop
    ctx->pc = 0x19f028u;
    // NOP
label_19f02c:
    // 0x19f02c: 0x1012  mflo        $v0
    ctx->pc = 0x19f02cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_19f030:
    // 0x19f030: 0xac8202e8  sw          $v0, 0x2E8($a0)
    ctx->pc = 0x19f030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 744), GPR_U32(ctx, 2));
label_19f034:
    // 0x19f034: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f038:
    // 0x19f038: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f03c:
    // 0x19f03c: 0x8c422798  lw          $v0, 0x2798($v0)
    ctx->pc = 0x19f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10136)));
label_19f040:
    // 0x19f040: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
label_19f044:
    if (ctx->pc == 0x19F044u) {
        ctx->pc = 0x19F048u;
        goto label_19f048;
    }
    ctx->pc = 0x19F040u;
    {
        const bool branch_taken_0x19f040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19f040) {
            ctx->pc = 0x19F088u;
            goto label_19f088;
        }
    }
    ctx->pc = 0x19F048u;
label_19f048:
    // 0x19f048: 0x8e820690  lw          $v0, 0x690($s4)
    ctx->pc = 0x19f048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
label_19f04c:
    // 0x19f04c: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_19f050:
    if (ctx->pc == 0x19F050u) {
        ctx->pc = 0x19F054u;
        goto label_19f054;
    }
    ctx->pc = 0x19F04Cu;
    {
        const bool branch_taken_0x19f04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19f04c) {
            ctx->pc = 0x19F088u;
            goto label_19f088;
        }
    }
    ctx->pc = 0x19F054u;
label_19f054:
    // 0x19f054: 0xc0424e4  jal         func_109390
label_19f058:
    if (ctx->pc == 0x19F058u) {
        ctx->pc = 0x19F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F054u;
        // 0x19f058: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F05Cu;
        goto label_19f05c;
    }
    ctx->pc = 0x19F054u;
    SET_GPR_U32(ctx, 31, 0x19F05Cu);
    ctx->pc = 0x19F058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F054u;
    // 0x19f058: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109390u, 0x19F054u, 0x19F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F05Cu;
label_19f05c:
    // 0x19f05c: 0xc058118  jal         func_160460
label_19f060:
    if (ctx->pc == 0x19F060u) {
        ctx->pc = 0x19F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F05Cu;
        // 0x19f060: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F064u;
        goto label_19f064;
    }
    ctx->pc = 0x19F05Cu;
    SET_GPR_U32(ctx, 31, 0x19F064u);
    ctx->pc = 0x19F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F05Cu;
    // 0x19f060: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160460u, 0x19F05Cu, 0x19F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F064u;
label_19f064:
    // 0x19f064: 0xc058018  jal         func_160060
label_19f068:
    if (ctx->pc == 0x19F068u) {
        ctx->pc = 0x19F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F064u;
        // 0x19f068: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F06Cu;
        goto label_19f06c;
    }
    ctx->pc = 0x19F064u;
    SET_GPR_U32(ctx, 31, 0x19F06Cu);
    ctx->pc = 0x19F068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F064u;
    // 0x19f068: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x19F064u, 0x19F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F06Cu;
label_19f06c:
    // 0x19f06c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19f070:
    // 0x19f070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f074:
    // 0x19f074: 0xaf83831c  sw          $v1, -0x7CE4($gp)
    ctx->pc = 0x19f074u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 3));
label_19f078:
    // 0x19f078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f07c:
    // 0x19f07c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x19f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19f080:
    // 0x19f080: 0xc063e08  jal         func_18F820
label_19f084:
    if (ctx->pc == 0x19F084u) {
        ctx->pc = 0x19F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F080u;
        // 0x19f084: 0xa043002e  sb          $v1, 0x2E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F088u;
        goto label_19f088;
    }
    ctx->pc = 0x19F080u;
    SET_GPR_U32(ctx, 31, 0x19F088u);
    ctx->pc = 0x19F084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F080u;
    // 0x19f084: 0xa043002e  sb          $v1, 0x2E($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F080u, 0x19F088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F088u;
label_19f088:
    // 0x19f088: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f08c:
    // 0x19f08c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f090:
    // 0x19f090: 0x8c4227a4  lw          $v0, 0x27A4($v0)
    ctx->pc = 0x19f090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10148)));
label_19f094:
    // 0x19f094: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_19f098:
    if (ctx->pc == 0x19F098u) {
        ctx->pc = 0x19F09Cu;
        goto label_19f09c;
    }
    ctx->pc = 0x19F094u;
    {
        const bool branch_taken_0x19f094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19f094) {
            ctx->pc = 0x19F0C0u;
            goto label_19f0c0;
        }
    }
    ctx->pc = 0x19F09Cu;
label_19f09c:
    // 0x19f09c: 0x8e820688  lw          $v0, 0x688($s4)
    ctx->pc = 0x19f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_19f0a0:
    // 0x19f0a0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_19f0a4:
    if (ctx->pc == 0x19F0A4u) {
        ctx->pc = 0x19F0A8u;
        goto label_19f0a8;
    }
    ctx->pc = 0x19F0A0u;
    {
        const bool branch_taken_0x19f0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19f0a0) {
            ctx->pc = 0x19F0C0u;
            goto label_19f0c0;
        }
    }
    ctx->pc = 0x19F0A8u;
label_19f0a8:
    // 0x19f0a8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19f0ac:
    // 0x19f0ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f0b0:
    // 0x19f0b0: 0xaf83831c  sw          $v1, -0x7CE4($gp)
    ctx->pc = 0x19f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 3));
label_19f0b4:
    // 0x19f0b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19f0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19f0b8:
    // 0x19f0b8: 0xc063e08  jal         func_18F820
label_19f0bc:
    if (ctx->pc == 0x19F0BCu) {
        ctx->pc = 0x19F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0B8u;
        // 0x19f0bc: 0xa043002e  sb          $v1, 0x2E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F0C0u;
        goto label_19f0c0;
    }
    ctx->pc = 0x19F0B8u;
    SET_GPR_U32(ctx, 31, 0x19F0C0u);
    ctx->pc = 0x19F0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0B8u;
    // 0x19f0bc: 0xa043002e  sb          $v1, 0x2E($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F0B8u, 0x19F0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F0C0u;
label_19f0c0:
    // 0x19f0c0: 0x8e82068c  lw          $v0, 0x68C($s4)
    ctx->pc = 0x19f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
label_19f0c4:
    // 0x19f0c4: 0x1040023f  beqz        $v0, . + 4 + (0x23F << 2)
label_19f0c8:
    if (ctx->pc == 0x19F0C8u) {
        ctx->pc = 0x19F0CCu;
        goto label_19f0cc;
    }
    ctx->pc = 0x19F0C4u;
    {
        const bool branch_taken_0x19f0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f0c4) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F0CCu;
label_19f0cc:
    // 0x19f0cc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19f0d0:
    // 0x19f0d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f0d4:
    // 0x19f0d4: 0xaf83831c  sw          $v1, -0x7CE4($gp)
    ctx->pc = 0x19f0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 3));
label_19f0d8:
    // 0x19f0d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f0dc:
    // 0x19f0dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19f0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19f0e0:
    // 0x19f0e0: 0xc063e08  jal         func_18F820
label_19f0e4:
    if (ctx->pc == 0x19F0E4u) {
        ctx->pc = 0x19F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0E0u;
        // 0x19f0e4: 0xa043002e  sb          $v1, 0x2E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F0E8u;
        goto label_19f0e8;
    }
    ctx->pc = 0x19F0E0u;
    SET_GPR_U32(ctx, 31, 0x19F0E8u);
    ctx->pc = 0x19F0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0E0u;
    // 0x19f0e4: 0xa043002e  sb          $v1, 0x2E($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F0E0u, 0x19F0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F0E8u;
label_19f0e8:
    // 0x19f0e8: 0x10000236  b           . + 4 + (0x236 << 2)
label_19f0ec:
    if (ctx->pc == 0x19F0ECu) {
        ctx->pc = 0x19F0F0u;
        goto label_19f0f0;
    }
    ctx->pc = 0x19F0E8u;
    {
        const bool branch_taken_0x19f0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f0e8) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F0F0u;
label_19f0f0:
    // 0x19f0f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f0f4:
    // 0x19f0f4: 0xae820320  sw          $v0, 0x320($s4)
    ctx->pc = 0x19f0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 2));
label_19f0f8:
    // 0x19f0f8: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x19f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_19f0fc:
    // 0x19f0fc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_19f100:
    if (ctx->pc == 0x19F100u) {
        ctx->pc = 0x19F104u;
        goto label_19f104;
    }
    ctx->pc = 0x19F0FCu;
    {
        const bool branch_taken_0x19f0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f0fc) {
            ctx->pc = 0x19F128u;
            goto label_19f128;
        }
    }
    ctx->pc = 0x19F104u;
label_19f104:
    // 0x19f104: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f108:
    // 0x19f108: 0x8c4228e4  lw          $v0, 0x28E4($v0)
    ctx->pc = 0x19f108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10468)));
label_19f10c:
    // 0x19f10c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19f110:
    // 0x19f110: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_19f114:
    if (ctx->pc == 0x19F114u) {
        ctx->pc = 0x19F118u;
        goto label_19f118;
    }
    ctx->pc = 0x19F110u;
    {
        const bool branch_taken_0x19f110 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x19f110) {
            ctx->pc = 0x19F124u;
            goto label_19f124;
        }
    }
    ctx->pc = 0x19F118u;
label_19f118:
    // 0x19f118: 0x8e820694  lw          $v0, 0x694($s4)
    ctx->pc = 0x19f118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
label_19f11c:
    // 0x19f11c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_19f120:
    if (ctx->pc == 0x19F120u) {
        ctx->pc = 0x19F124u;
        goto label_19f124;
    }
    ctx->pc = 0x19F11Cu;
    {
        const bool branch_taken_0x19f11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f11c) {
            ctx->pc = 0x19F128u;
            goto label_19f128;
        }
    }
    ctx->pc = 0x19F124u;
label_19f124:
    // 0x19f124: 0xac600320  sw          $zero, 0x320($v1)
    ctx->pc = 0x19f124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 800), GPR_U32(ctx, 0));
label_19f128:
    // 0x19f128: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x19f128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_19f12c:
    // 0x19f12c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19f130:
    // 0x19f130: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_19f134:
    if (ctx->pc == 0x19F134u) {
        ctx->pc = 0x19F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F130u;
        // 0x19f134: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F138u;
        goto label_19f138;
    }
    ctx->pc = 0x19F130u;
    {
        const bool branch_taken_0x19f130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F130u;
        // 0x19f134: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f130) {
            ctx->pc = 0x19F144u;
            goto label_19f144;
        }
    }
    ctx->pc = 0x19F138u;
label_19f138:
    // 0x19f138: 0xc0424e4  jal         func_109390
label_19f13c:
    if (ctx->pc == 0x19F13Cu) {
        ctx->pc = 0x19F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F138u;
        // 0x19f13c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F140u;
        goto label_19f140;
    }
    ctx->pc = 0x19F138u;
    SET_GPR_U32(ctx, 31, 0x19F140u);
    ctx->pc = 0x19F13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F138u;
    // 0x19f13c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109390u, 0x19F138u, 0x19F140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F140u;
label_19f140:
    // 0x19f140: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f144:
    // 0x19f144: 0xc063e14  jal         func_18F850
label_19f148:
    if (ctx->pc == 0x19F148u) {
        ctx->pc = 0x19F14Cu;
        goto label_19f14c;
    }
    ctx->pc = 0x19F144u;
    SET_GPR_U32(ctx, 31, 0x19F14Cu);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19F144u, 0x19F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F14Cu;
label_19f14c:
    // 0x19f14c: 0x1000021d  b           . + 4 + (0x21D << 2)
label_19f150:
    if (ctx->pc == 0x19F150u) {
        ctx->pc = 0x19F154u;
        goto label_19f154;
    }
    ctx->pc = 0x19F14Cu;
    {
        const bool branch_taken_0x19f14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f14c) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F154u;
label_19f154:
    // 0x19f154: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x19f154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_19f158:
    // 0x19f158: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_19f15c:
    if (ctx->pc == 0x19F15Cu) {
        ctx->pc = 0x19F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F158u;
        // 0x19f15c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F160u;
        goto label_19f160;
    }
    ctx->pc = 0x19F158u;
    {
        const bool branch_taken_0x19f158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F158u;
        // 0x19f15c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f158) {
            ctx->pc = 0x19F170u;
            goto label_19f170;
        }
    }
    ctx->pc = 0x19F160u;
label_19f160:
    // 0x19f160: 0x8c630320  lw          $v1, 0x320($v1)
    ctx->pc = 0x19f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
label_19f164:
    // 0x19f164: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_19f168:
    if (ctx->pc == 0x19F168u) {
        ctx->pc = 0x19F16Cu;
        goto label_19f16c;
    }
    ctx->pc = 0x19F164u;
    {
        const bool branch_taken_0x19f164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f164) {
            ctx->pc = 0x19F170u;
            goto label_19f170;
        }
    }
    ctx->pc = 0x19F16Cu;
label_19f16c:
    // 0x19f16c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19f16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f170:
    // 0x19f170: 0x10400214  beqz        $v0, . + 4 + (0x214 << 2)
label_19f174:
    if (ctx->pc == 0x19F174u) {
        ctx->pc = 0x19F178u;
        goto label_19f178;
    }
    ctx->pc = 0x19F170u;
    {
        const bool branch_taken_0x19f170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f170) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F178u;
label_19f178:
    // 0x19f178: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f17c:
    // 0x19f17c: 0x8c4228e4  lw          $v0, 0x28E4($v0)
    ctx->pc = 0x19f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10468)));
label_19f180:
    // 0x19f180: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19f180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19f184:
    // 0x19f184: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_19f188:
    if (ctx->pc == 0x19F188u) {
        ctx->pc = 0x19F18Cu;
        goto label_19f18c;
    }
    ctx->pc = 0x19F184u;
    {
        const bool branch_taken_0x19f184 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x19f184) {
            ctx->pc = 0x19F198u;
            goto label_19f198;
        }
    }
    ctx->pc = 0x19F18Cu;
label_19f18c:
    // 0x19f18c: 0x8e820694  lw          $v0, 0x694($s4)
    ctx->pc = 0x19f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
label_19f190:
    // 0x19f190: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_19f194:
    if (ctx->pc == 0x19F194u) {
        ctx->pc = 0x19F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F190u;
        // 0x19f194: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F198u;
        goto label_19f198;
    }
    ctx->pc = 0x19F190u;
    {
        const bool branch_taken_0x19f190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F190u;
        // 0x19f194: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f190) {
            ctx->pc = 0x19F1D4u;
            goto label_19f1d4;
        }
    }
    ctx->pc = 0x19F198u;
label_19f198:
    // 0x19f198: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x19f198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_19f19c:
    // 0x19f19c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19f1a0:
    // 0x19f1a0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_19f1a4:
    if (ctx->pc == 0x19F1A4u) {
        ctx->pc = 0x19F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1A0u;
        // 0x19f1a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1A8u;
        goto label_19f1a8;
    }
    ctx->pc = 0x19F1A0u;
    {
        const bool branch_taken_0x19f1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1A0u;
        // 0x19f1a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1a0) {
            ctx->pc = 0x19F1C0u;
            goto label_19f1c0;
        }
    }
    ctx->pc = 0x19F1A8u;
label_19f1a8:
    // 0x19f1a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f1ac:
    // 0x19f1ac: 0xc063e08  jal         func_18F820
label_19f1b0:
    if (ctx->pc == 0x19F1B0u) {
        ctx->pc = 0x19F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1ACu;
        // 0x19f1b0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1B4u;
        goto label_19f1b4;
    }
    ctx->pc = 0x19F1ACu;
    SET_GPR_U32(ctx, 31, 0x19F1B4u);
    ctx->pc = 0x19F1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1ACu;
    // 0x19f1b0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F1ACu, 0x19F1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1B4u;
label_19f1b4:
    // 0x19f1b4: 0x10000203  b           . + 4 + (0x203 << 2)
label_19f1b8:
    if (ctx->pc == 0x19F1B8u) {
        ctx->pc = 0x19F1BCu;
        goto label_19f1bc;
    }
    ctx->pc = 0x19F1B4u;
    {
        const bool branch_taken_0x19f1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f1b4) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F1BCu;
label_19f1bc:
    // 0x19f1bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f1c0:
    // 0x19f1c0: 0xc063e08  jal         func_18F820
label_19f1c4:
    if (ctx->pc == 0x19F1C4u) {
        ctx->pc = 0x19F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1C0u;
        // 0x19f1c4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1C8u;
        goto label_19f1c8;
    }
    ctx->pc = 0x19F1C0u;
    SET_GPR_U32(ctx, 31, 0x19F1C8u);
    ctx->pc = 0x19F1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1C0u;
    // 0x19f1c4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F1C0u, 0x19F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1C8u;
label_19f1c8:
    // 0x19f1c8: 0x100001fe  b           . + 4 + (0x1FE << 2)
label_19f1cc:
    if (ctx->pc == 0x19F1CCu) {
        ctx->pc = 0x19F1D0u;
        goto label_19f1d0;
    }
    ctx->pc = 0x19F1C8u;
    {
        const bool branch_taken_0x19f1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f1c8) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F1D0u;
label_19f1d0:
    // 0x19f1d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f1d4:
    // 0x19f1d4: 0xc063e08  jal         func_18F820
label_19f1d8:
    if (ctx->pc == 0x19F1D8u) {
        ctx->pc = 0x19F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1D4u;
        // 0x19f1d8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1DCu;
        goto label_19f1dc;
    }
    ctx->pc = 0x19F1D4u;
    SET_GPR_U32(ctx, 31, 0x19F1DCu);
    ctx->pc = 0x19F1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1D4u;
    // 0x19f1d8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F1D4u, 0x19F1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1DCu;
label_19f1dc:
    // 0x19f1dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f1e0:
    // 0x19f1e0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x19f1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_19f1e4:
    // 0x19f1e4: 0xc063de0  jal         func_18F780
label_19f1e8:
    if (ctx->pc == 0x19F1E8u) {
        ctx->pc = 0x19F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1E4u;
        // 0x19f1e8: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1ECu;
        goto label_19f1ec;
    }
    ctx->pc = 0x19F1E4u;
    SET_GPR_U32(ctx, 31, 0x19F1ECu);
    ctx->pc = 0x19F1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1E4u;
    // 0x19f1e8: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x19F1E4u, 0x19F1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1ECu;
label_19f1ec:
    // 0x19f1ec: 0x100001f5  b           . + 4 + (0x1F5 << 2)
label_19f1f0:
    if (ctx->pc == 0x19F1F0u) {
        ctx->pc = 0x19F1F4u;
        goto label_19f1f4;
    }
    ctx->pc = 0x19F1ECu;
    {
        const bool branch_taken_0x19f1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f1ec) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F1F4u;
label_19f1f4:
    // 0x19f1f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19f1f8:
    // 0x19f1f8: 0xae820320  sw          $v0, 0x320($s4)
    ctx->pc = 0x19f1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 2));
label_19f1fc:
    // 0x19f1fc: 0xc058018  jal         func_160060
label_19f200:
    if (ctx->pc == 0x19F200u) {
        ctx->pc = 0x19F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1FCu;
        // 0x19f200: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F204u;
        goto label_19f204;
    }
    ctx->pc = 0x19F1FCu;
    SET_GPR_U32(ctx, 31, 0x19F204u);
    ctx->pc = 0x19F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1FCu;
    // 0x19f200: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x19F1FCu, 0x19F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F204u;
label_19f204:
    // 0x19f204: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f208:
    // 0x19f208: 0x8c4228e4  lw          $v0, 0x28E4($v0)
    ctx->pc = 0x19f208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10468)));
label_19f20c:
    // 0x19f20c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19f210:
    // 0x19f210: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_19f214:
    if (ctx->pc == 0x19F214u) {
        ctx->pc = 0x19F218u;
        goto label_19f218;
    }
    ctx->pc = 0x19F210u;
    {
        const bool branch_taken_0x19f210 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x19f210) {
            ctx->pc = 0x19F224u;
            goto label_19f224;
        }
    }
    ctx->pc = 0x19F218u;
label_19f218:
    // 0x19f218: 0x8e820694  lw          $v0, 0x694($s4)
    ctx->pc = 0x19f218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
label_19f21c:
    // 0x19f21c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_19f220:
    if (ctx->pc == 0x19F220u) {
        ctx->pc = 0x19F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F21Cu;
        // 0x19f220: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F224u;
        goto label_19f224;
    }
    ctx->pc = 0x19F21Cu;
    {
        const bool branch_taken_0x19f21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F21Cu;
        // 0x19f220: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f21c) {
            ctx->pc = 0x19F26Cu;
            goto label_19f26c;
        }
    }
    ctx->pc = 0x19F224u;
label_19f224:
    // 0x19f224: 0x8e83068c  lw          $v1, 0x68C($s4)
    ctx->pc = 0x19f224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
label_19f228:
    // 0x19f228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f22c:
    // 0x19f22c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_19f230:
    if (ctx->pc == 0x19F230u) {
        ctx->pc = 0x19F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F22Cu;
        // 0x19f230: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F234u;
        goto label_19f234;
    }
    ctx->pc = 0x19F22Cu;
    {
        const bool branch_taken_0x19f22c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F22Cu;
        // 0x19f230: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f22c) {
            ctx->pc = 0x19F24Cu;
            goto label_19f24c;
        }
    }
    ctx->pc = 0x19F234u;
label_19f234:
    // 0x19f234: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f238:
    // 0x19f238: 0xc063e08  jal         func_18F820
label_19f23c:
    if (ctx->pc == 0x19F23Cu) {
        ctx->pc = 0x19F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F238u;
        // 0x19f23c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F240u;
        goto label_19f240;
    }
    ctx->pc = 0x19F238u;
    SET_GPR_U32(ctx, 31, 0x19F240u);
    ctx->pc = 0x19F23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F238u;
    // 0x19f23c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F238u, 0x19F240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F240u;
label_19f240:
    // 0x19f240: 0x100001e0  b           . + 4 + (0x1E0 << 2)
label_19f244:
    if (ctx->pc == 0x19F244u) {
        ctx->pc = 0x19F248u;
        goto label_19f248;
    }
    ctx->pc = 0x19F240u;
    {
        const bool branch_taken_0x19f240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f240) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F248u;
label_19f248:
    // 0x19f248: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19f248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19f24c:
    // 0x19f24c: 0x146201dd  bne         $v1, $v0, . + 4 + (0x1DD << 2)
label_19f250:
    if (ctx->pc == 0x19F250u) {
        ctx->pc = 0x19F254u;
        goto label_19f254;
    }
    ctx->pc = 0x19F24Cu;
    {
        const bool branch_taken_0x19f24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f24c) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F254u;
label_19f254:
    // 0x19f254: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f258:
    // 0x19f258: 0xc063e08  jal         func_18F820
label_19f25c:
    if (ctx->pc == 0x19F25Cu) {
        ctx->pc = 0x19F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F258u;
        // 0x19f25c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F260u;
        goto label_19f260;
    }
    ctx->pc = 0x19F258u;
    SET_GPR_U32(ctx, 31, 0x19F260u);
    ctx->pc = 0x19F25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F258u;
    // 0x19f25c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F258u, 0x19F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F260u;
label_19f260:
    // 0x19f260: 0x100001d8  b           . + 4 + (0x1D8 << 2)
label_19f264:
    if (ctx->pc == 0x19F264u) {
        ctx->pc = 0x19F268u;
        goto label_19f268;
    }
    ctx->pc = 0x19F260u;
    {
        const bool branch_taken_0x19f260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f260) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F268u;
label_19f268:
    // 0x19f268: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f26c:
    // 0x19f26c: 0xc063e08  jal         func_18F820
label_19f270:
    if (ctx->pc == 0x19F270u) {
        ctx->pc = 0x19F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F26Cu;
        // 0x19f270: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F274u;
        goto label_19f274;
    }
    ctx->pc = 0x19F26Cu;
    SET_GPR_U32(ctx, 31, 0x19F274u);
    ctx->pc = 0x19F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F26Cu;
    // 0x19f270: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F26Cu, 0x19F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F274u;
label_19f274:
    // 0x19f274: 0x100001d3  b           . + 4 + (0x1D3 << 2)
label_19f278:
    if (ctx->pc == 0x19F278u) {
        ctx->pc = 0x19F27Cu;
        goto label_19f27c;
    }
    ctx->pc = 0x19F274u;
    {
        const bool branch_taken_0x19f274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f274) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F27Cu;
label_19f27c:
    // 0x19f27c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19f280:
    // 0x19f280: 0xae820320  sw          $v0, 0x320($s4)
    ctx->pc = 0x19f280u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 2));
label_19f284:
    // 0x19f284: 0x8e82067c  lw          $v0, 0x67C($s4)
    ctx->pc = 0x19f284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1660)));
label_19f288:
    // 0x19f288: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19f28c:
    if (ctx->pc == 0x19F28Cu) {
        ctx->pc = 0x19F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F288u;
        // 0x19f28c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F290u;
        goto label_19f290;
    }
    ctx->pc = 0x19F288u;
    {
        const bool branch_taken_0x19f288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F288u;
        // 0x19f28c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f288) {
            ctx->pc = 0x19F298u;
            goto label_19f298;
        }
    }
    ctx->pc = 0x19F290u;
label_19f290:
    // 0x19f290: 0xac400320  sw          $zero, 0x320($v0)
    ctx->pc = 0x19f290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 800), GPR_U32(ctx, 0));
label_19f294:
    // 0x19f294: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f298:
    // 0x19f298: 0xc063e14  jal         func_18F850
label_19f29c:
    if (ctx->pc == 0x19F29Cu) {
        ctx->pc = 0x19F2A0u;
        goto label_19f2a0;
    }
    ctx->pc = 0x19F298u;
    SET_GPR_U32(ctx, 31, 0x19F2A0u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19F298u, 0x19F2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F2A0u;
label_19f2a0:
    // 0x19f2a0: 0x100001c8  b           . + 4 + (0x1C8 << 2)
label_19f2a4:
    if (ctx->pc == 0x19F2A4u) {
        ctx->pc = 0x19F2A8u;
        goto label_19f2a8;
    }
    ctx->pc = 0x19F2A0u;
    {
        const bool branch_taken_0x19f2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f2a0) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F2A8u;
label_19f2a8:
    // 0x19f2a8: 0x8e84067c  lw          $a0, 0x67C($s4)
    ctx->pc = 0x19f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1660)));
label_19f2ac:
    // 0x19f2ac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_19f2b0:
    if (ctx->pc == 0x19F2B0u) {
        ctx->pc = 0x19F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2ACu;
        // 0x19f2b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F2B4u;
        goto label_19f2b4;
    }
    ctx->pc = 0x19F2ACu;
    {
        const bool branch_taken_0x19f2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2ACu;
        // 0x19f2b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2ac) {
            ctx->pc = 0x19F2C4u;
            goto label_19f2c4;
        }
    }
    ctx->pc = 0x19F2B4u;
label_19f2b4:
    // 0x19f2b4: 0x8c820320  lw          $v0, 0x320($a0)
    ctx->pc = 0x19f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
label_19f2b8:
    // 0x19f2b8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_19f2bc:
    if (ctx->pc == 0x19F2BCu) {
        ctx->pc = 0x19F2C0u;
        goto label_19f2c0;
    }
    ctx->pc = 0x19F2B8u;
    {
        const bool branch_taken_0x19f2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f2b8) {
            ctx->pc = 0x19F2C4u;
            goto label_19f2c4;
        }
    }
    ctx->pc = 0x19F2C0u;
label_19f2c0:
    // 0x19f2c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19f2c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f2c4:
    // 0x19f2c4: 0x106001bf  beqz        $v1, . + 4 + (0x1BF << 2)
label_19f2c8:
    if (ctx->pc == 0x19F2C8u) {
        ctx->pc = 0x19F2CCu;
        goto label_19f2cc;
    }
    ctx->pc = 0x19F2C4u;
    {
        const bool branch_taken_0x19f2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f2c4) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F2CCu;
label_19f2cc:
    // 0x19f2cc: 0x8e830690  lw          $v1, 0x690($s4)
    ctx->pc = 0x19f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
label_19f2d0:
    // 0x19f2d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19f2d4:
    // 0x19f2d4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_19f2d8:
    if (ctx->pc == 0x19F2D8u) {
        ctx->pc = 0x19F2DCu;
        goto label_19f2dc;
    }
    ctx->pc = 0x19F2D4u;
    {
        const bool branch_taken_0x19f2d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f2d4) {
            ctx->pc = 0x19F310u;
            goto label_19f310;
        }
    }
    ctx->pc = 0x19F2DCu;
label_19f2dc:
    // 0x19f2dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_19f2e0:
    if (ctx->pc == 0x19F2E0u) {
        ctx->pc = 0x19F2E4u;
        goto label_19f2e4;
    }
    ctx->pc = 0x19F2DCu;
    {
        const bool branch_taken_0x19f2dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f2dc) {
            ctx->pc = 0x19F2F0u;
            goto label_19f2f0;
        }
    }
    ctx->pc = 0x19F2E4u;
label_19f2e4:
    // 0x19f2e4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19f2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19f2e8:
    // 0x19f2e8: 0xc064a30  jal         func_1928C0
label_19f2ec:
    if (ctx->pc == 0x19F2ECu) {
        ctx->pc = 0x19F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2E8u;
        // 0x19f2ec: 0x24a502e0  addiu       $a1, $a1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F2F0u;
        goto label_19f2f0;
    }
    ctx->pc = 0x19F2E8u;
    SET_GPR_U32(ctx, 31, 0x19F2F0u);
    ctx->pc = 0x19F2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F2E8u;
    // 0x19f2ec: 0x24a502e0  addiu       $a1, $a1, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928C0u, 0x19F2E8u, 0x19F2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F2F0u;
label_19f2f0:
    // 0x19f2f0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19f2f4:
    // 0x19f2f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f2f8:
    // 0x19f2f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f2fc:
    // 0x19f2fc: 0xa040002e  sb          $zero, 0x2E($v0)
    ctx->pc = 0x19f2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 0));
label_19f300:
    // 0x19f300: 0xc063e08  jal         func_18F820
label_19f304:
    if (ctx->pc == 0x19F304u) {
        ctx->pc = 0x19F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F300u;
        // 0x19f304: 0xaf80831c  sw          $zero, -0x7CE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F308u;
        goto label_19f308;
    }
    ctx->pc = 0x19F300u;
    SET_GPR_U32(ctx, 31, 0x19F308u);
    ctx->pc = 0x19F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F300u;
    // 0x19f304: 0xaf80831c  sw          $zero, -0x7CE4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F300u, 0x19F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F308u;
label_19f308:
    // 0x19f308: 0x100001ae  b           . + 4 + (0x1AE << 2)
label_19f30c:
    if (ctx->pc == 0x19F30Cu) {
        ctx->pc = 0x19F310u;
        goto label_19f310;
    }
    ctx->pc = 0x19F308u;
    {
        const bool branch_taken_0x19f308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f308) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F310u;
label_19f310:
    // 0x19f310: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f314:
    // 0x19f314: 0x8c4228e4  lw          $v0, 0x28E4($v0)
    ctx->pc = 0x19f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10468)));
label_19f318:
    // 0x19f318: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19f318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19f31c:
    // 0x19f31c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_19f320:
    if (ctx->pc == 0x19F320u) {
        ctx->pc = 0x19F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F31Cu;
        // 0x19f320: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F324u;
        goto label_19f324;
    }
    ctx->pc = 0x19F31Cu;
    {
        const bool branch_taken_0x19f31c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F31Cu;
        // 0x19f320: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f31c) {
            ctx->pc = 0x19F334u;
            goto label_19f334;
        }
    }
    ctx->pc = 0x19F324u;
label_19f324:
    // 0x19f324: 0x8e820694  lw          $v0, 0x694($s4)
    ctx->pc = 0x19f324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
label_19f328:
    // 0x19f328: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_19f32c:
    if (ctx->pc == 0x19F32Cu) {
        ctx->pc = 0x19F330u;
        goto label_19f330;
    }
    ctx->pc = 0x19F328u;
    {
        const bool branch_taken_0x19f328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f328) {
            ctx->pc = 0x19F378u;
            goto label_19f378;
        }
    }
    ctx->pc = 0x19F330u;
label_19f330:
    // 0x19f330: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19f330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19f334:
    // 0x19f334: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_19f338:
    if (ctx->pc == 0x19F338u) {
        ctx->pc = 0x19F33Cu;
        goto label_19f33c;
    }
    ctx->pc = 0x19F334u;
    {
        const bool branch_taken_0x19f334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f334) {
            ctx->pc = 0x19F358u;
            goto label_19f358;
        }
    }
    ctx->pc = 0x19F33Cu;
label_19f33c:
    // 0x19f33c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_19f340:
    if (ctx->pc == 0x19F340u) {
        ctx->pc = 0x19F344u;
        goto label_19f344;
    }
    ctx->pc = 0x19F33Cu;
    {
        const bool branch_taken_0x19f33c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f33c) {
            ctx->pc = 0x19F364u;
            goto label_19f364;
        }
    }
    ctx->pc = 0x19F344u;
label_19f344:
    // 0x19f344: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19f344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19f348:
    // 0x19f348: 0xc064a30  jal         func_1928C0
label_19f34c:
    if (ctx->pc == 0x19F34Cu) {
        ctx->pc = 0x19F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F348u;
        // 0x19f34c: 0x24a502e0  addiu       $a1, $a1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F350u;
        goto label_19f350;
    }
    ctx->pc = 0x19F348u;
    SET_GPR_U32(ctx, 31, 0x19F350u);
    ctx->pc = 0x19F34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F348u;
    // 0x19f34c: 0x24a502e0  addiu       $a1, $a1, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928C0u, 0x19F348u, 0x19F350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F350u;
label_19f350:
    // 0x19f350: 0x10000005  b           . + 4 + (0x5 << 2)
label_19f354:
    if (ctx->pc == 0x19F354u) {
        ctx->pc = 0x19F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F350u;
        // 0x19f354: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F358u;
        goto label_19f358;
    }
    ctx->pc = 0x19F350u;
    {
        const bool branch_taken_0x19f350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F350u;
        // 0x19f354: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f350) {
            ctx->pc = 0x19F368u;
            goto label_19f368;
        }
    }
    ctx->pc = 0x19F358u;
label_19f358:
    // 0x19f358: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_19f35c:
    if (ctx->pc == 0x19F35Cu) {
        ctx->pc = 0x19F360u;
        goto label_19f360;
    }
    ctx->pc = 0x19F358u;
    {
        const bool branch_taken_0x19f358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f358) {
            ctx->pc = 0x19F364u;
            goto label_19f364;
        }
    }
    ctx->pc = 0x19F360u;
label_19f360:
    // 0x19f360: 0xac800320  sw          $zero, 0x320($a0)
    ctx->pc = 0x19f360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 0));
label_19f364:
    // 0x19f364: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f368:
    // 0x19f368: 0xc063e08  jal         func_18F820
label_19f36c:
    if (ctx->pc == 0x19F36Cu) {
        ctx->pc = 0x19F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F368u;
        // 0x19f36c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F370u;
        goto label_19f370;
    }
    ctx->pc = 0x19F368u;
    SET_GPR_U32(ctx, 31, 0x19F370u);
    ctx->pc = 0x19F36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F368u;
    // 0x19f36c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F368u, 0x19F370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F370u;
label_19f370:
    // 0x19f370: 0x10000194  b           . + 4 + (0x194 << 2)
label_19f374:
    if (ctx->pc == 0x19F374u) {
        ctx->pc = 0x19F378u;
        goto label_19f378;
    }
    ctx->pc = 0x19F370u;
    {
        const bool branch_taken_0x19f370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f370) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F378u;
label_19f378:
    // 0x19f378: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_19f37c:
    if (ctx->pc == 0x19F37Cu) {
        ctx->pc = 0x19F380u;
        goto label_19f380;
    }
    ctx->pc = 0x19F378u;
    {
        const bool branch_taken_0x19f378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f378) {
            ctx->pc = 0x19F38Cu;
            goto label_19f38c;
        }
    }
    ctx->pc = 0x19F380u;
label_19f380:
    // 0x19f380: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19f380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19f384:
    // 0x19f384: 0xc064a30  jal         func_1928C0
label_19f388:
    if (ctx->pc == 0x19F388u) {
        ctx->pc = 0x19F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F384u;
        // 0x19f388: 0x24a502e0  addiu       $a1, $a1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F38Cu;
        goto label_19f38c;
    }
    ctx->pc = 0x19F384u;
    SET_GPR_U32(ctx, 31, 0x19F38Cu);
    ctx->pc = 0x19F388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F384u;
    // 0x19f388: 0x24a502e0  addiu       $a1, $a1, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928C0u, 0x19F384u, 0x19F38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F38Cu;
label_19f38c:
    // 0x19f38c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f390:
    // 0x19f390: 0xc063e08  jal         func_18F820
label_19f394:
    if (ctx->pc == 0x19F394u) {
        ctx->pc = 0x19F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F390u;
        // 0x19f394: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F398u;
        goto label_19f398;
    }
    ctx->pc = 0x19F390u;
    SET_GPR_U32(ctx, 31, 0x19F398u);
    ctx->pc = 0x19F394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F390u;
    // 0x19f394: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F390u, 0x19F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F398u;
label_19f398:
    // 0x19f398: 0x1000018a  b           . + 4 + (0x18A << 2)
label_19f39c:
    if (ctx->pc == 0x19F39Cu) {
        ctx->pc = 0x19F3A0u;
        goto label_19f3a0;
    }
    ctx->pc = 0x19F398u;
    {
        const bool branch_taken_0x19f398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f398) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F3A0u;
label_19f3a0:
    // 0x19f3a0: 0x8e82067c  lw          $v0, 0x67C($s4)
    ctx->pc = 0x19f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1660)));
label_19f3a4:
    // 0x19f3a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19f3a8:
    if (ctx->pc == 0x19F3A8u) {
        ctx->pc = 0x19F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3A4u;
        // 0x19f3a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F3ACu;
        goto label_19f3ac;
    }
    ctx->pc = 0x19F3A4u;
    {
        const bool branch_taken_0x19f3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3A4u;
        // 0x19f3a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3a4) {
            ctx->pc = 0x19F3BCu;
            goto label_19f3bc;
        }
    }
    ctx->pc = 0x19F3ACu;
label_19f3ac:
    // 0x19f3ac: 0x8c420320  lw          $v0, 0x320($v0)
    ctx->pc = 0x19f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
label_19f3b0:
    // 0x19f3b0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_19f3b4:
    if (ctx->pc == 0x19F3B4u) {
        ctx->pc = 0x19F3B8u;
        goto label_19f3b8;
    }
    ctx->pc = 0x19F3B0u;
    {
        const bool branch_taken_0x19f3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f3b0) {
            ctx->pc = 0x19F3BCu;
            goto label_19f3bc;
        }
    }
    ctx->pc = 0x19F3B8u;
label_19f3b8:
    // 0x19f3b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19f3b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f3bc:
    // 0x19f3bc: 0x10600181  beqz        $v1, . + 4 + (0x181 << 2)
label_19f3c0:
    if (ctx->pc == 0x19F3C0u) {
        ctx->pc = 0x19F3C4u;
        goto label_19f3c4;
    }
    ctx->pc = 0x19F3BCu;
    {
        const bool branch_taken_0x19f3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f3bc) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F3C4u;
label_19f3c4:
    // 0x19f3c4: 0x8e83068c  lw          $v1, 0x68C($s4)
    ctx->pc = 0x19f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
label_19f3c8:
    // 0x19f3c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19f3cc:
    // 0x19f3cc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_19f3d0:
    if (ctx->pc == 0x19F3D0u) {
        ctx->pc = 0x19F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3CCu;
        // 0x19f3d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F3D4u;
        goto label_19f3d4;
    }
    ctx->pc = 0x19F3CCu;
    {
        const bool branch_taken_0x19f3cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3CCu;
        // 0x19f3d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3cc) {
            ctx->pc = 0x19F3E8u;
            goto label_19f3e8;
        }
    }
    ctx->pc = 0x19F3D4u;
label_19f3d4:
    // 0x19f3d4: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x19f3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_19f3d8:
    // 0x19f3d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19f3dc:
    // 0x19f3dc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_19f3e0:
    if (ctx->pc == 0x19F3E0u) {
        ctx->pc = 0x19F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3DCu;
        // 0x19f3e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F3E4u;
        goto label_19f3e4;
    }
    ctx->pc = 0x19F3DCu;
    {
        const bool branch_taken_0x19f3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3DCu;
        // 0x19f3e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3dc) {
            ctx->pc = 0x19F3FCu;
            goto label_19f3fc;
        }
    }
    ctx->pc = 0x19F3E4u;
label_19f3e4:
    // 0x19f3e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f3e8:
    // 0x19f3e8: 0xc063e08  jal         func_18F820
label_19f3ec:
    if (ctx->pc == 0x19F3ECu) {
        ctx->pc = 0x19F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3E8u;
        // 0x19f3ec: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F3F0u;
        goto label_19f3f0;
    }
    ctx->pc = 0x19F3E8u;
    SET_GPR_U32(ctx, 31, 0x19F3F0u);
    ctx->pc = 0x19F3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F3E8u;
    // 0x19f3ec: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F3E8u, 0x19F3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F3F0u;
label_19f3f0:
    // 0x19f3f0: 0x10000174  b           . + 4 + (0x174 << 2)
label_19f3f4:
    if (ctx->pc == 0x19F3F4u) {
        ctx->pc = 0x19F3F8u;
        goto label_19f3f8;
    }
    ctx->pc = 0x19F3F0u;
    {
        const bool branch_taken_0x19f3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f3f0) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F3F8u;
label_19f3f8:
    // 0x19f3f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f3fc:
    // 0x19f3fc: 0xc063e08  jal         func_18F820
label_19f400:
    if (ctx->pc == 0x19F400u) {
        ctx->pc = 0x19F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3FCu;
        // 0x19f400: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F404u;
        goto label_19f404;
    }
    ctx->pc = 0x19F3FCu;
    SET_GPR_U32(ctx, 31, 0x19F404u);
    ctx->pc = 0x19F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F3FCu;
    // 0x19f400: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F3FCu, 0x19F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F404u;
label_19f404:
    // 0x19f404: 0x1000016f  b           . + 4 + (0x16F << 2)
label_19f408:
    if (ctx->pc == 0x19F408u) {
        ctx->pc = 0x19F40Cu;
        goto label_19f40c;
    }
    ctx->pc = 0x19F404u;
    {
        const bool branch_taken_0x19f404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f404) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F40Cu;
label_19f40c:
    // 0x19f40c: 0x8e820670  lw          $v0, 0x670($s4)
    ctx->pc = 0x19f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_19f410:
    // 0x19f410: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_19f414:
    if (ctx->pc == 0x19F414u) {
        ctx->pc = 0x19F418u;
        goto label_19f418;
    }
    ctx->pc = 0x19F410u;
    {
        const bool branch_taken_0x19f410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f410) {
            ctx->pc = 0x19F41Cu;
            goto label_19f41c;
        }
    }
    ctx->pc = 0x19F418u;
label_19f418:
    // 0x19f418: 0xac400320  sw          $zero, 0x320($v0)
    ctx->pc = 0x19f418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 800), GPR_U32(ctx, 0));
label_19f41c:
    // 0x19f41c: 0xc057548  jal         func_15D520
label_19f420:
    if (ctx->pc == 0x19F420u) {
        ctx->pc = 0x19F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F41Cu;
        // 0x19f420: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F424u;
        goto label_19f424;
    }
    ctx->pc = 0x19F41Cu;
    SET_GPR_U32(ctx, 31, 0x19F424u);
    ctx->pc = 0x19F420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F41Cu;
    // 0x19f420: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D520u, 0x19F41Cu, 0x19F424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F424u;
label_19f424:
    // 0x19f424: 0xc04d988  jal         func_136620
label_19f428:
    if (ctx->pc == 0x19F428u) {
        ctx->pc = 0x19F42Cu;
        goto label_19f42c;
    }
    ctx->pc = 0x19F424u;
    SET_GPR_U32(ctx, 31, 0x19F42Cu);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x19F424u, 0x19F42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F42Cu;
label_19f42c:
    // 0x19f42c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x19f42cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f430:
    // 0x19f430: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x19f430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_19f434:
    // 0x19f434: 0x320f809  jalr        $t9
label_19f438:
    if (ctx->pc == 0x19F438u) {
        ctx->pc = 0x19F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F434u;
        // 0x19f438: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F43Cu;
        goto label_19f43c;
    }
    ctx->pc = 0x19F434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19F43Cu);
        ctx->pc = 0x19F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F434u;
        // 0x19f438: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F434u, 0x19F43Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F43Cu;
label_19f43c:
    // 0x19f43c: 0x8e820694  lw          $v0, 0x694($s4)
    ctx->pc = 0x19f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
label_19f440:
    // 0x19f440: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_19f444:
    if (ctx->pc == 0x19F444u) {
        ctx->pc = 0x19F448u;
        goto label_19f448;
    }
    ctx->pc = 0x19F440u;
    {
        const bool branch_taken_0x19f440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f440) {
            ctx->pc = 0x19F46Cu;
            goto label_19f46c;
        }
    }
    ctx->pc = 0x19F448u;
label_19f448:
    // 0x19f448: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19f448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19f44c:
    // 0x19f44c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19f450:
    // 0x19f450: 0x24a502e0  addiu       $a1, $a1, 0x2E0
    ctx->pc = 0x19f450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
label_19f454:
    // 0x19f454: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x19f454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19f458:
    // 0x19f458: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f45c:
    // 0x19f45c: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x19f45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_19f460:
    // 0x19f460: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19f460u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f464:
    // 0x19f464: 0xc064b40  jal         func_192D00
label_19f468:
    if (ctx->pc == 0x19F468u) {
        ctx->pc = 0x19F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F464u;
        // 0x19f468: 0x240a0008  addiu       $t2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F46Cu;
        goto label_19f46c;
    }
    ctx->pc = 0x19F464u;
    SET_GPR_U32(ctx, 31, 0x19F46Cu);
    ctx->pc = 0x19F468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F464u;
    // 0x19f468: 0x240a0008  addiu       $t2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192D00u, 0x19F464u, 0x19F46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F46Cu;
label_19f46c:
    // 0x19f46c: 0xc042270  jal         func_1089C0
label_19f470:
    if (ctx->pc == 0x19F470u) {
        ctx->pc = 0x19F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F46Cu;
        // 0x19f470: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F474u;
        goto label_19f474;
    }
    ctx->pc = 0x19F46Cu;
    SET_GPR_U32(ctx, 31, 0x19F474u);
    ctx->pc = 0x19F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F46Cu;
    // 0x19f470: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1089C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1089C0u, 0x19F46Cu, 0x19F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F474u;
label_19f474:
    // 0x19f474: 0xae80068c  sw          $zero, 0x68C($s4)
    ctx->pc = 0x19f474u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1676), GPR_U32(ctx, 0));
label_19f478:
    // 0x19f478: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19f478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19f47c:
    // 0x19f47c: 0xae820320  sw          $v0, 0x320($s4)
    ctx->pc = 0x19f47cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 2));
label_19f480:
    // 0x19f480: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19f480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f484:
    // 0x19f484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f488:
    // 0x19f488: 0xac60284c  sw          $zero, 0x284C($v1)
    ctx->pc = 0x19f488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10316), GPR_U32(ctx, 0));
label_19f48c:
    // 0x19f48c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f490:
    // 0x19f490: 0xac602838  sw          $zero, 0x2838($v1)
    ctx->pc = 0x19f490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10296), GPR_U32(ctx, 0));
label_19f494:
    // 0x19f494: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19f494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f498:
    // 0x19f498: 0xa06228fe  sb          $v0, 0x28FE($v1)
    ctx->pc = 0x19f498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10494), (uint8_t)GPR_U32(ctx, 2));
label_19f49c:
    // 0x19f49c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f4a0:
    // 0x19f4a0: 0xac402840  sw          $zero, 0x2840($v0)
    ctx->pc = 0x19f4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10304), GPR_U32(ctx, 0));
label_19f4a4:
    // 0x19f4a4: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f4a8:
    // 0x19f4a8: 0xac40283c  sw          $zero, 0x283C($v0)
    ctx->pc = 0x19f4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10300), GPR_U32(ctx, 0));
label_19f4ac:
    // 0x19f4ac: 0xc06ce10  jal         func_1B3840
label_19f4b0:
    if (ctx->pc == 0x19F4B0u) {
        ctx->pc = 0x19F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4ACu;
        // 0x19f4b0: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F4B4u;
        goto label_19f4b4;
    }
    ctx->pc = 0x19F4ACu;
    SET_GPR_U32(ctx, 31, 0x19F4B4u);
    ctx->pc = 0x19F4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F4ACu;
    // 0x19f4b0: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3840u, 0x19F4ACu, 0x19F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F4B4u;
label_19f4b4:
    // 0x19f4b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f4b8:
    // 0x19f4b8: 0xc063e08  jal         func_18F820
label_19f4bc:
    if (ctx->pc == 0x19F4BCu) {
        ctx->pc = 0x19F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4B8u;
        // 0x19f4bc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F4C0u;
        goto label_19f4c0;
    }
    ctx->pc = 0x19F4B8u;
    SET_GPR_U32(ctx, 31, 0x19F4C0u);
    ctx->pc = 0x19F4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F4B8u;
    // 0x19f4bc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F4B8u, 0x19F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F4C0u;
label_19f4c0:
    // 0x19f4c0: 0x10000140  b           . + 4 + (0x140 << 2)
label_19f4c4:
    if (ctx->pc == 0x19F4C4u) {
        ctx->pc = 0x19F4C8u;
        goto label_19f4c8;
    }
    ctx->pc = 0x19F4C0u;
    {
        const bool branch_taken_0x19f4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f4c0) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F4C8u;
label_19f4c8:
    // 0x19f4c8: 0xc057548  jal         func_15D520
label_19f4cc:
    if (ctx->pc == 0x19F4CCu) {
        ctx->pc = 0x19F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4C8u;
        // 0x19f4cc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F4D0u;
        goto label_19f4d0;
    }
    ctx->pc = 0x19F4C8u;
    SET_GPR_U32(ctx, 31, 0x19F4D0u);
    ctx->pc = 0x19F4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F4C8u;
    // 0x19f4cc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D520u, 0x19F4C8u, 0x19F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F4D0u;
label_19f4d0:
    // 0x19f4d0: 0xc04d988  jal         func_136620
label_19f4d4:
    if (ctx->pc == 0x19F4D4u) {
        ctx->pc = 0x19F4D8u;
        goto label_19f4d8;
    }
    ctx->pc = 0x19F4D0u;
    SET_GPR_U32(ctx, 31, 0x19F4D8u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x19F4D0u, 0x19F4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F4D8u;
label_19f4d8:
    // 0x19f4d8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x19f4d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f4dc:
    // 0x19f4dc: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x19f4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_19f4e0:
    // 0x19f4e0: 0x320f809  jalr        $t9
label_19f4e4:
    if (ctx->pc == 0x19F4E4u) {
        ctx->pc = 0x19F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4E0u;
        // 0x19f4e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F4E8u;
        goto label_19f4e8;
    }
    ctx->pc = 0x19F4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19F4E8u);
        ctx->pc = 0x19F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4E0u;
        // 0x19f4e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F4E0u, 0x19F4E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F4E8u;
label_19f4e8:
    // 0x19f4e8: 0x8e820694  lw          $v0, 0x694($s4)
    ctx->pc = 0x19f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
label_19f4ec:
    // 0x19f4ec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_19f4f0:
    if (ctx->pc == 0x19F4F0u) {
        ctx->pc = 0x19F4F4u;
        goto label_19f4f4;
    }
    ctx->pc = 0x19F4ECu;
    {
        const bool branch_taken_0x19f4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f4ec) {
            ctx->pc = 0x19F518u;
            goto label_19f518;
        }
    }
    ctx->pc = 0x19F4F4u;
label_19f4f4:
    // 0x19f4f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19f4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19f4f8:
    // 0x19f4f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19f4fc:
    // 0x19f4fc: 0x24a502e0  addiu       $a1, $a1, 0x2E0
    ctx->pc = 0x19f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
label_19f500:
    // 0x19f500: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x19f500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19f504:
    // 0x19f504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f508:
    // 0x19f508: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x19f508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_19f50c:
    // 0x19f50c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19f50cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f510:
    // 0x19f510: 0xc064b40  jal         func_192D00
label_19f514:
    if (ctx->pc == 0x19F514u) {
        ctx->pc = 0x19F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F510u;
        // 0x19f514: 0x240a0008  addiu       $t2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F518u;
        goto label_19f518;
    }
    ctx->pc = 0x19F510u;
    SET_GPR_U32(ctx, 31, 0x19F518u);
    ctx->pc = 0x19F514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F510u;
    // 0x19f514: 0x240a0008  addiu       $t2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192D00u, 0x19F510u, 0x19F518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F518u;
label_19f518:
    // 0x19f518: 0xae80068c  sw          $zero, 0x68C($s4)
    ctx->pc = 0x19f518u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1676), GPR_U32(ctx, 0));
label_19f51c:
    // 0x19f51c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19f520:
    // 0x19f520: 0xae820320  sw          $v0, 0x320($s4)
    ctx->pc = 0x19f520u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 2));
label_19f524:
    // 0x19f524: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19f524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f528:
    // 0x19f528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f52c:
    // 0x19f52c: 0xac60284c  sw          $zero, 0x284C($v1)
    ctx->pc = 0x19f52cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10316), GPR_U32(ctx, 0));
label_19f530:
    // 0x19f530: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19f530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f534:
    // 0x19f534: 0xac602838  sw          $zero, 0x2838($v1)
    ctx->pc = 0x19f534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10296), GPR_U32(ctx, 0));
label_19f538:
    // 0x19f538: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19f538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f53c:
    // 0x19f53c: 0xa06228fe  sb          $v0, 0x28FE($v1)
    ctx->pc = 0x19f53cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10494), (uint8_t)GPR_U32(ctx, 2));
label_19f540:
    // 0x19f540: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f544:
    // 0x19f544: 0xac402840  sw          $zero, 0x2840($v0)
    ctx->pc = 0x19f544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10304), GPR_U32(ctx, 0));
label_19f548:
    // 0x19f548: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f54c:
    // 0x19f54c: 0xac40283c  sw          $zero, 0x283C($v0)
    ctx->pc = 0x19f54cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10300), GPR_U32(ctx, 0));
label_19f550:
    // 0x19f550: 0xc06ce10  jal         func_1B3840
label_19f554:
    if (ctx->pc == 0x19F554u) {
        ctx->pc = 0x19F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F550u;
        // 0x19f554: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F558u;
        goto label_19f558;
    }
    ctx->pc = 0x19F550u;
    SET_GPR_U32(ctx, 31, 0x19F558u);
    ctx->pc = 0x19F554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F550u;
    // 0x19f554: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3840u, 0x19F550u, 0x19F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F558u;
label_19f558:
    // 0x19f558: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f55c:
    // 0x19f55c: 0xc063e08  jal         func_18F820
label_19f560:
    if (ctx->pc == 0x19F560u) {
        ctx->pc = 0x19F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F55Cu;
        // 0x19f560: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F564u;
        goto label_19f564;
    }
    ctx->pc = 0x19F55Cu;
    SET_GPR_U32(ctx, 31, 0x19F564u);
    ctx->pc = 0x19F560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F55Cu;
    // 0x19f560: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F55Cu, 0x19F564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F564u;
label_19f564:
    // 0x19f564: 0x10000117  b           . + 4 + (0x117 << 2)
label_19f568:
    if (ctx->pc == 0x19F568u) {
        ctx->pc = 0x19F56Cu;
        goto label_19f56c;
    }
    ctx->pc = 0x19F564u;
    {
        const bool branch_taken_0x19f564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f564) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F56Cu;
label_19f56c:
    // 0x19f56c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19f570:
    // 0x19f570: 0xae820320  sw          $v0, 0x320($s4)
    ctx->pc = 0x19f570u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 2));
label_19f574:
    // 0x19f574: 0x8e820670  lw          $v0, 0x670($s4)
    ctx->pc = 0x19f574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_19f578:
    // 0x19f578: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19f57c:
    if (ctx->pc == 0x19F57Cu) {
        ctx->pc = 0x19F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F578u;
        // 0x19f57c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F580u;
        goto label_19f580;
    }
    ctx->pc = 0x19F578u;
    {
        const bool branch_taken_0x19f578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F578u;
        // 0x19f57c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f578) {
            ctx->pc = 0x19F590u;
            goto label_19f590;
        }
    }
    ctx->pc = 0x19F580u;
label_19f580:
    // 0x19f580: 0x8c420320  lw          $v0, 0x320($v0)
    ctx->pc = 0x19f580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
label_19f584:
    // 0x19f584: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_19f588:
    if (ctx->pc == 0x19F588u) {
        ctx->pc = 0x19F58Cu;
        goto label_19f58c;
    }
    ctx->pc = 0x19F584u;
    {
        const bool branch_taken_0x19f584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f584) {
            ctx->pc = 0x19F590u;
            goto label_19f590;
        }
    }
    ctx->pc = 0x19F58Cu;
label_19f58c:
    // 0x19f58c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19f58cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f590:
    // 0x19f590: 0x1060010c  beqz        $v1, . + 4 + (0x10C << 2)
label_19f594:
    if (ctx->pc == 0x19F594u) {
        ctx->pc = 0x19F598u;
        goto label_19f598;
    }
    ctx->pc = 0x19F590u;
    {
        const bool branch_taken_0x19f590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f590) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F598u;
label_19f598:
    // 0x19f598: 0x8e820694  lw          $v0, 0x694($s4)
    ctx->pc = 0x19f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
label_19f59c:
    // 0x19f59c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_19f5a0:
    if (ctx->pc == 0x19F5A0u) {
        ctx->pc = 0x19F5A4u;
        goto label_19f5a4;
    }
    ctx->pc = 0x19F59Cu;
    {
        const bool branch_taken_0x19f59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f59c) {
            ctx->pc = 0x19F5A8u;
            goto label_19f5a8;
        }
    }
    ctx->pc = 0x19F5A4u;
label_19f5a4:
    // 0x19f5a4: 0xae800694  sw          $zero, 0x694($s4)
    ctx->pc = 0x19f5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1684), GPR_U32(ctx, 0));
label_19f5a8:
    // 0x19f5a8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19f5ac:
    // 0x19f5ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f5b0:
    // 0x19f5b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f5b4:
    // 0x19f5b4: 0xa040002e  sb          $zero, 0x2E($v0)
    ctx->pc = 0x19f5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 0));
label_19f5b8:
    // 0x19f5b8: 0xc063e08  jal         func_18F820
label_19f5bc:
    if (ctx->pc == 0x19F5BCu) {
        ctx->pc = 0x19F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5B8u;
        // 0x19f5bc: 0xaf80831c  sw          $zero, -0x7CE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F5C0u;
        goto label_19f5c0;
    }
    ctx->pc = 0x19F5B8u;
    SET_GPR_U32(ctx, 31, 0x19F5C0u);
    ctx->pc = 0x19F5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5B8u;
    // 0x19f5bc: 0xaf80831c  sw          $zero, -0x7CE4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F5B8u, 0x19F5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5C0u;
label_19f5c0:
    // 0x19f5c0: 0x10000100  b           . + 4 + (0x100 << 2)
label_19f5c4:
    if (ctx->pc == 0x19F5C4u) {
        ctx->pc = 0x19F5C8u;
        goto label_19f5c8;
    }
    ctx->pc = 0x19F5C0u;
    {
        const bool branch_taken_0x19f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f5c0) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F5C8u;
label_19f5c8:
    // 0x19f5c8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x19f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19f5cc:
    // 0x19f5cc: 0xae820320  sw          $v0, 0x320($s4)
    ctx->pc = 0x19f5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 2));
label_19f5d0:
    // 0x19f5d0: 0x8e820674  lw          $v0, 0x674($s4)
    ctx->pc = 0x19f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1652)));
label_19f5d4:
    // 0x19f5d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19f5d8:
    if (ctx->pc == 0x19F5D8u) {
        ctx->pc = 0x19F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5D4u;
        // 0x19f5d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F5DCu;
        goto label_19f5dc;
    }
    ctx->pc = 0x19F5D4u;
    {
        const bool branch_taken_0x19f5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5D4u;
        // 0x19f5d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5d4) {
            ctx->pc = 0x19F5E4u;
            goto label_19f5e4;
        }
    }
    ctx->pc = 0x19F5DCu;
label_19f5dc:
    // 0x19f5dc: 0xac400320  sw          $zero, 0x320($v0)
    ctx->pc = 0x19f5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 800), GPR_U32(ctx, 0));
label_19f5e0:
    // 0x19f5e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f5e4:
    // 0x19f5e4: 0xc063e14  jal         func_18F850
label_19f5e8:
    if (ctx->pc == 0x19F5E8u) {
        ctx->pc = 0x19F5ECu;
        goto label_19f5ec;
    }
    ctx->pc = 0x19F5E4u;
    SET_GPR_U32(ctx, 31, 0x19F5ECu);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19F5E4u, 0x19F5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5ECu;
label_19f5ec:
    // 0x19f5ec: 0x100000f5  b           . + 4 + (0xF5 << 2)
label_19f5f0:
    if (ctx->pc == 0x19F5F0u) {
        ctx->pc = 0x19F5F4u;
        goto label_19f5f4;
    }
    ctx->pc = 0x19F5ECu;
    {
        const bool branch_taken_0x19f5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f5ec) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F5F4u;
label_19f5f4:
    // 0x19f5f4: 0x8e820674  lw          $v0, 0x674($s4)
    ctx->pc = 0x19f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1652)));
label_19f5f8:
    // 0x19f5f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19f5fc:
    if (ctx->pc == 0x19F5FCu) {
        ctx->pc = 0x19F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5F8u;
        // 0x19f5fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F600u;
        goto label_19f600;
    }
    ctx->pc = 0x19F5F8u;
    {
        const bool branch_taken_0x19f5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5F8u;
        // 0x19f5fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5f8) {
            ctx->pc = 0x19F610u;
            goto label_19f610;
        }
    }
    ctx->pc = 0x19F600u;
label_19f600:
    // 0x19f600: 0x8c420320  lw          $v0, 0x320($v0)
    ctx->pc = 0x19f600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
label_19f604:
    // 0x19f604: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_19f608:
    if (ctx->pc == 0x19F608u) {
        ctx->pc = 0x19F60Cu;
        goto label_19f60c;
    }
    ctx->pc = 0x19F604u;
    {
        const bool branch_taken_0x19f604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f604) {
            ctx->pc = 0x19F610u;
            goto label_19f610;
        }
    }
    ctx->pc = 0x19F60Cu;
label_19f60c:
    // 0x19f60c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19f60cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f610:
    // 0x19f610: 0x106000ec  beqz        $v1, . + 4 + (0xEC << 2)
label_19f614:
    if (ctx->pc == 0x19F614u) {
        ctx->pc = 0x19F618u;
        goto label_19f618;
    }
    ctx->pc = 0x19F610u;
    {
        const bool branch_taken_0x19f610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f610) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F618u;
label_19f618:
    // 0x19f618: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19f618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19f61c:
    // 0x19f61c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19f620:
    // 0x19f620: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f624:
    // 0x19f624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f628:
    // 0x19f628: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f62c:
    // 0x19f62c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19f62cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f630:
    // 0x19f630: 0xa040002e  sb          $zero, 0x2E($v0)
    ctx->pc = 0x19f630u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 0));
label_19f634:
    // 0x19f634: 0xc064f00  jal         func_193C00
label_19f638:
    if (ctx->pc == 0x19F638u) {
        ctx->pc = 0x19F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F634u;
        // 0x19f638: 0xaf80831c  sw          $zero, -0x7CE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F63Cu;
        goto label_19f63c;
    }
    ctx->pc = 0x19F634u;
    SET_GPR_U32(ctx, 31, 0x19F63Cu);
    ctx->pc = 0x19F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F634u;
    // 0x19f638: 0xaf80831c  sw          $zero, -0x7CE4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C00u, 0x19F634u, 0x19F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F63Cu;
label_19f63c:
    // 0x19f63c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f640:
    // 0x19f640: 0xc063e08  jal         func_18F820
label_19f644:
    if (ctx->pc == 0x19F644u) {
        ctx->pc = 0x19F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F640u;
        // 0x19f644: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F648u;
        goto label_19f648;
    }
    ctx->pc = 0x19F640u;
    SET_GPR_U32(ctx, 31, 0x19F648u);
    ctx->pc = 0x19F644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F640u;
    // 0x19f644: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F640u, 0x19F648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F648u;
label_19f648:
    // 0x19f648: 0x100000de  b           . + 4 + (0xDE << 2)
label_19f64c:
    if (ctx->pc == 0x19F64Cu) {
        ctx->pc = 0x19F650u;
        goto label_19f650;
    }
    ctx->pc = 0x19F648u;
    {
        const bool branch_taken_0x19f648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f648) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F650u;
label_19f650:
    // 0x19f650: 0x8f8283a0  lw          $v0, -0x7C60($gp)
    ctx->pc = 0x19f650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_19f654:
    // 0x19f654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f658:
    // 0x19f658: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f65c:
    // 0x19f65c: 0xc063e08  jal         func_18F820
label_19f660:
    if (ctx->pc == 0x19F660u) {
        ctx->pc = 0x19F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F65Cu;
        // 0x19f660: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F664u;
        goto label_19f664;
    }
    ctx->pc = 0x19F65Cu;
    SET_GPR_U32(ctx, 31, 0x19F664u);
    ctx->pc = 0x19F660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F65Cu;
    // 0x19f660: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F65Cu, 0x19F664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F664u;
label_19f664:
    // 0x19f664: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_19f668:
    if (ctx->pc == 0x19F668u) {
        ctx->pc = 0x19F66Cu;
        goto label_19f66c;
    }
    ctx->pc = 0x19F664u;
    {
        const bool branch_taken_0x19f664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f664) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F66Cu;
label_19f66c:
    // 0x19f66c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x19f66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_19f670:
    // 0x19f670: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f674:
    // 0x19f674: 0xac20dbd0  sw          $zero, -0x2430($at)
    ctx->pc = 0x19f674u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958032), GPR_U32(ctx, 0));
label_19f678:
    // 0x19f678: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x19f678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_19f67c:
    // 0x19f67c: 0xaf808708  sw          $zero, -0x78F8($gp)
    ctx->pc = 0x19f67cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936328), GPR_U32(ctx, 0));
label_19f680:
    // 0x19f680: 0xac20dbd4  sw          $zero, -0x242C($at)
    ctx->pc = 0x19f680u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958036), GPR_U32(ctx, 0));
label_19f684:
    // 0x19f684: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x19f684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_19f688:
    // 0x19f688: 0xac20dbd8  sw          $zero, -0x2428($at)
    ctx->pc = 0x19f688u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958040), GPR_U32(ctx, 0));
label_19f68c:
    // 0x19f68c: 0x8c4228f0  lw          $v0, 0x28F0($v0)
    ctx->pc = 0x19f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10480)));
label_19f690:
    // 0x19f690: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_19f694:
    if (ctx->pc == 0x19F694u) {
        ctx->pc = 0x19F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F690u;
        // 0x19f694: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F698u;
        goto label_19f698;
    }
    ctx->pc = 0x19F690u;
    {
        const bool branch_taken_0x19f690 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F690u;
        // 0x19f694: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f690) {
            ctx->pc = 0x19F6D0u;
            goto label_19f6d0;
        }
    }
    ctx->pc = 0x19F698u;
label_19f698:
    // 0x19f698: 0x8e820684  lw          $v0, 0x684($s4)
    ctx->pc = 0x19f698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1668)));
label_19f69c:
    // 0x19f69c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_19f6a0:
    if (ctx->pc == 0x19F6A0u) {
        ctx->pc = 0x19F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F69Cu;
        // 0x19f6a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F6A4u;
        goto label_19f6a4;
    }
    ctx->pc = 0x19F69Cu;
    {
        const bool branch_taken_0x19f69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F69Cu;
        // 0x19f6a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f69c) {
            ctx->pc = 0x19F6BCu;
            goto label_19f6bc;
        }
    }
    ctx->pc = 0x19F6A4u;
label_19f6a4:
    // 0x19f6a4: 0xac400320  sw          $zero, 0x320($v0)
    ctx->pc = 0x19f6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 800), GPR_U32(ctx, 0));
label_19f6a8:
    // 0x19f6a8: 0xc063e14  jal         func_18F850
label_19f6ac:
    if (ctx->pc == 0x19F6ACu) {
        ctx->pc = 0x19F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6A8u;
        // 0x19f6ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F6B0u;
        goto label_19f6b0;
    }
    ctx->pc = 0x19F6A8u;
    SET_GPR_U32(ctx, 31, 0x19F6B0u);
    ctx->pc = 0x19F6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F6A8u;
    // 0x19f6ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19F6A8u, 0x19F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6B0u;
label_19f6b0:
    // 0x19f6b0: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_19f6b4:
    if (ctx->pc == 0x19F6B4u) {
        ctx->pc = 0x19F6B8u;
        goto label_19f6b8;
    }
    ctx->pc = 0x19F6B0u;
    {
        const bool branch_taken_0x19f6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f6b0) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F6B8u;
label_19f6b8:
    // 0x19f6b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f6bc:
    // 0x19f6bc: 0xc063e08  jal         func_18F820
label_19f6c0:
    if (ctx->pc == 0x19F6C0u) {
        ctx->pc = 0x19F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6BCu;
        // 0x19f6c0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F6C4u;
        goto label_19f6c4;
    }
    ctx->pc = 0x19F6BCu;
    SET_GPR_U32(ctx, 31, 0x19F6C4u);
    ctx->pc = 0x19F6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F6BCu;
    // 0x19f6c0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F6BCu, 0x19F6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6C4u;
label_19f6c4:
    // 0x19f6c4: 0x100000bf  b           . + 4 + (0xBF << 2)
label_19f6c8:
    if (ctx->pc == 0x19F6C8u) {
        ctx->pc = 0x19F6CCu;
        goto label_19f6cc;
    }
    ctx->pc = 0x19F6C4u;
    {
        const bool branch_taken_0x19f6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f6c4) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F6CCu;
label_19f6cc:
    // 0x19f6cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f6d0:
    // 0x19f6d0: 0xc063e08  jal         func_18F820
label_19f6d4:
    if (ctx->pc == 0x19F6D4u) {
        ctx->pc = 0x19F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6D0u;
        // 0x19f6d4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F6D8u;
        goto label_19f6d8;
    }
    ctx->pc = 0x19F6D0u;
    SET_GPR_U32(ctx, 31, 0x19F6D8u);
    ctx->pc = 0x19F6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F6D0u;
    // 0x19f6d4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F6D0u, 0x19F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6D8u;
label_19f6d8:
    // 0x19f6d8: 0x100000ba  b           . + 4 + (0xBA << 2)
label_19f6dc:
    if (ctx->pc == 0x19F6DCu) {
        ctx->pc = 0x19F6E0u;
        goto label_19f6e0;
    }
    ctx->pc = 0x19F6D8u;
    {
        const bool branch_taken_0x19f6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f6d8) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F6E0u;
label_19f6e0:
    // 0x19f6e0: 0x8e820684  lw          $v0, 0x684($s4)
    ctx->pc = 0x19f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1668)));
label_19f6e4:
    // 0x19f6e4: 0x8c420320  lw          $v0, 0x320($v0)
    ctx->pc = 0x19f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
label_19f6e8:
    // 0x19f6e8: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
label_19f6ec:
    if (ctx->pc == 0x19F6ECu) {
        ctx->pc = 0x19F6F0u;
        goto label_19f6f0;
    }
    ctx->pc = 0x19F6E8u;
    {
        const bool branch_taken_0x19f6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f6e8) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F6F0u;
label_19f6f0:
    // 0x19f6f0: 0xc063e14  jal         func_18F850
label_19f6f4:
    if (ctx->pc == 0x19F6F4u) {
        ctx->pc = 0x19F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6F0u;
        // 0x19f6f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F6F8u;
        goto label_19f6f8;
    }
    ctx->pc = 0x19F6F0u;
    SET_GPR_U32(ctx, 31, 0x19F6F8u);
    ctx->pc = 0x19F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F6F0u;
    // 0x19f6f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19F6F0u, 0x19F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6F8u;
label_19f6f8:
    // 0x19f6f8: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_19f6fc:
    if (ctx->pc == 0x19F6FCu) {
        ctx->pc = 0x19F700u;
        goto label_19f700;
    }
    ctx->pc = 0x19F6F8u;
    {
        const bool branch_taken_0x19f6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f6f8) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F700u;
label_19f700:
    // 0x19f700: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19f700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f704:
    // 0x19f704: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x19f704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_19f708:
    // 0x19f708: 0x8f848384  lw          $a0, -0x7C7C($gp)
    ctx->pc = 0x19f708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_19f70c:
    // 0x19f70c: 0x8c7228f0  lw          $s2, 0x28F0($v1)
    ctx->pc = 0x19f70cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10480)));
label_19f710:
    // 0x19f710: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x19f710u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19f714:
    // 0x19f714: 0x8ce600a8  lw          $a2, 0xA8($a3)
    ctx->pc = 0x19f714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 168)));
label_19f718:
    // 0x19f718: 0x8ce500a0  lw          $a1, 0xA0($a3)
    ctx->pc = 0x19f718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 160)));
label_19f71c:
    // 0x19f71c: 0x8ce400b0  lw          $a0, 0xB0($a3)
    ctx->pc = 0x19f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
label_19f720:
    // 0x19f720: 0x8ce30180  lw          $v1, 0x180($a3)
    ctx->pc = 0x19f720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 384)));
label_19f724:
    // 0x19f724: 0xe6b821  addu        $s7, $a3, $a2
    ctx->pc = 0x19f724u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_19f728:
    // 0x19f728: 0xe5b021  addu        $s6, $a3, $a1
    ctx->pc = 0x19f728u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_19f72c:
    // 0x19f72c: 0xe4a821  addu        $s5, $a3, $a0
    ctx->pc = 0x19f72cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_19f730:
    // 0x19f730: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x19f730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
label_19f734:
    // 0x19f734: 0xe38021  addu        $s0, $a3, $v1
    ctx->pc = 0x19f734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_19f738:
    // 0x19f738: 0x8fa4017c  lw          $a0, 0x17C($sp)
    ctx->pc = 0x19f738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_19f73c:
    // 0x19f73c: 0xc045c98  jal         func_117260
label_19f740:
    if (ctx->pc == 0x19F740u) {
        ctx->pc = 0x19F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F73Cu;
        // 0x19f740: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F744u;
        goto label_19f744;
    }
    ctx->pc = 0x19F73Cu;
    SET_GPR_U32(ctx, 31, 0x19F744u);
    ctx->pc = 0x19F740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F73Cu;
    // 0x19f740: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x19F73Cu, 0x19F744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F744u;
label_19f744:
    // 0x19f744: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19f744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_19f748:
    // 0x19f748: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x19f748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_19f74c:
    // 0x19f74c: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x19f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
label_19f750:
    // 0x19f750: 0x2463b400  addiu       $v1, $v1, -0x4C00
    ctx->pc = 0x19f750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947840));
label_19f754:
    // 0x19f754: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x19f754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_19f758:
    // 0x19f758: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x19f758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_19f75c:
    // 0x19f75c: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_19f760:
    // 0x19f760: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x19f760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
label_19f764:
    // 0x19f764: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x19f764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_19f768:
    // 0x19f768: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_19f76c:
    // 0x19f76c: 0xc0621c0  jal         func_188700
label_19f770:
    if (ctx->pc == 0x19F770u) {
        ctx->pc = 0x19F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F76Cu;
        // 0x19f770: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F774u;
        goto label_19f774;
    }
    ctx->pc = 0x19F76Cu;
    SET_GPR_U32(ctx, 31, 0x19F774u);
    ctx->pc = 0x19F770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F76Cu;
    // 0x19f770: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x19F76Cu, 0x19F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F774u;
label_19f774:
    // 0x19f774: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x19f774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f778:
    // 0x19f778: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19f778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_19f77c:
    // 0x19f77c: 0xc4200730  lwc1        $f0, 0x730($at)
    ctx->pc = 0x19f77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 1840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f780:
    // 0x19f780: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_19f784:
    // 0x19f784: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f788:
    // 0x19f788: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x19f788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_19f78c:
    // 0x19f78c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19f78cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19f790:
    // 0x19f790: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19f790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19f794:
    // 0x19f794: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19f794u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19f798:
    // 0x19f798: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x19f798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_19f79c:
    // 0x19f79c: 0x0  nop
    ctx->pc = 0x19f79cu;
    // NOP
label_19f7a0:
    // 0x19f7a0: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x19f7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
label_19f7a4:
    // 0x19f7a4: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_19f7a8:
    // 0x19f7a8: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x19f7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_19f7ac:
    // 0x19f7ac: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_19f7b0:
    // 0x19f7b0: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x19f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_19f7b4:
    // 0x19f7b4: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_19f7b8:
    // 0x19f7b8: 0xa043001c  sb          $v1, 0x1C($v0)
    ctx->pc = 0x19f7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 3));
label_19f7bc:
    // 0x19f7bc: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_19f7c0:
    // 0x19f7c0: 0xac500020  sw          $s0, 0x20($v0)
    ctx->pc = 0x19f7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
label_19f7c4:
    // 0x19f7c4: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_19f7c8:
    // 0x19f7c8: 0xac550024  sw          $s5, 0x24($v0)
    ctx->pc = 0x19f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 21));
label_19f7cc:
    // 0x19f7cc: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_19f7d0:
    // 0x19f7d0: 0xac560028  sw          $s6, 0x28($v0)
    ctx->pc = 0x19f7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 22));
label_19f7d4:
    // 0x19f7d4: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_19f7d8:
    // 0x19f7d8: 0xac57002c  sw          $s7, 0x2C($v0)
    ctx->pc = 0x19f7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 23));
label_19f7dc:
    // 0x19f7dc: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x19f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_19f7e0:
    // 0x19f7e0: 0xc069e14  jal         func_1A7850
label_19f7e4:
    if (ctx->pc == 0x19F7E4u) {
        ctx->pc = 0x19F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7E0u;
        // 0x19f7e4: 0xac520030  sw          $s2, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F7E8u;
        goto label_19f7e8;
    }
    ctx->pc = 0x19F7E0u;
    SET_GPR_U32(ctx, 31, 0x19F7E8u);
    ctx->pc = 0x19F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F7E0u;
    // 0x19f7e4: 0xac520030  sw          $s2, 0x30($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7850u, 0x19F7E0u, 0x19F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F7E8u;
label_19f7e8:
    // 0x19f7e8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_19f7ec:
    if (ctx->pc == 0x19F7ECu) {
        ctx->pc = 0x19F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7E8u;
        // 0x19f7ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F7F0u;
        goto label_19f7f0;
    }
    ctx->pc = 0x19F7E8u;
    {
        const bool branch_taken_0x19f7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7E8u;
        // 0x19f7ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7e8) {
            ctx->pc = 0x19F844u;
            goto label_19f844;
        }
    }
    ctx->pc = 0x19F7F0u;
label_19f7f0:
    // 0x19f7f0: 0x8e840684  lw          $a0, 0x684($s4)
    ctx->pc = 0x19f7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1668)));
label_19f7f4:
    // 0x19f7f4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_19f7f8:
    if (ctx->pc == 0x19F7F8u) {
        ctx->pc = 0x19F7FCu;
        goto label_19f7fc;
    }
    ctx->pc = 0x19F7F4u;
    {
        const bool branch_taken_0x19f7f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f7f4) {
            ctx->pc = 0x19F81Cu;
            goto label_19f81c;
        }
    }
    ctx->pc = 0x19F7FCu;
label_19f7fc:
    // 0x19f7fc: 0x8e820698  lw          $v0, 0x698($s4)
    ctx->pc = 0x19f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1688)));
label_19f800:
    // 0x19f800: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_19f804:
    if (ctx->pc == 0x19F804u) {
        ctx->pc = 0x19F808u;
        goto label_19f808;
    }
    ctx->pc = 0x19F800u;
    {
        const bool branch_taken_0x19f800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f800) {
            ctx->pc = 0x19F810u;
            goto label_19f810;
        }
    }
    ctx->pc = 0x19F808u;
label_19f808:
    // 0x19f808: 0x10000004  b           . + 4 + (0x4 << 2)
label_19f80c:
    if (ctx->pc == 0x19F80Cu) {
        ctx->pc = 0x19F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F808u;
        // 0x19f80c: 0xac800320  sw          $zero, 0x320($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F810u;
        goto label_19f810;
    }
    ctx->pc = 0x19F808u;
    {
        const bool branch_taken_0x19f808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F808u;
        // 0x19f80c: 0xac800320  sw          $zero, 0x320($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f808) {
            ctx->pc = 0x19F81Cu;
            goto label_19f81c;
        }
    }
    ctx->pc = 0x19F810u;
label_19f810:
    // 0x19f810: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19f810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19f814:
    // 0x19f814: 0xc064a30  jal         func_1928C0
label_19f818:
    if (ctx->pc == 0x19F818u) {
        ctx->pc = 0x19F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F814u;
        // 0x19f818: 0x24a502e0  addiu       $a1, $a1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F81Cu;
        goto label_19f81c;
    }
    ctx->pc = 0x19F814u;
    SET_GPR_U32(ctx, 31, 0x19F81Cu);
    ctx->pc = 0x19F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F814u;
    // 0x19f818: 0x24a502e0  addiu       $a1, $a1, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928C0u, 0x19F814u, 0x19F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F81Cu;
label_19f81c:
    // 0x19f81c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19f81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f820:
    // 0x19f820: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f824:
    // 0x19f824: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x19f824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_19f828:
    // 0x19f828: 0x8c6228f0  lw          $v0, 0x28F0($v1)
    ctx->pc = 0x19f828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10480)));
label_19f82c:
    // 0x19f82c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19f830:
    // 0x19f830: 0xc063e08  jal         func_18F820
label_19f834:
    if (ctx->pc == 0x19F834u) {
        ctx->pc = 0x19F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F830u;
        // 0x19f834: 0xac6228f0  sw          $v0, 0x28F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F838u;
        goto label_19f838;
    }
    ctx->pc = 0x19F830u;
    SET_GPR_U32(ctx, 31, 0x19F838u);
    ctx->pc = 0x19F834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F830u;
    // 0x19f834: 0xac6228f0  sw          $v0, 0x28F0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 10480), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F830u, 0x19F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F838u;
label_19f838:
    // 0x19f838: 0x10000005  b           . + 4 + (0x5 << 2)
label_19f83c:
    if (ctx->pc == 0x19F83Cu) {
        ctx->pc = 0x19F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F838u;
        // 0x19f83c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F840u;
        goto label_19f840;
    }
    ctx->pc = 0x19F838u;
    {
        const bool branch_taken_0x19f838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F838u;
        // 0x19f83c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f838) {
            ctx->pc = 0x19F850u;
            goto label_19f850;
        }
    }
    ctx->pc = 0x19F840u;
label_19f840:
    // 0x19f840: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f844:
    // 0x19f844: 0xc063e08  jal         func_18F820
label_19f848:
    if (ctx->pc == 0x19F848u) {
        ctx->pc = 0x19F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F844u;
        // 0x19f848: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F84Cu;
        goto label_19f84c;
    }
    ctx->pc = 0x19F844u;
    SET_GPR_U32(ctx, 31, 0x19F84Cu);
    ctx->pc = 0x19F848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F844u;
    // 0x19f848: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F844u, 0x19F84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F84Cu;
label_19f84c:
    // 0x19f84c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19f850:
    // 0x19f850: 0xc064fec  jal         func_193FB0
label_19f854:
    if (ctx->pc == 0x19F854u) {
        ctx->pc = 0x19F858u;
        goto label_19f858;
    }
    ctx->pc = 0x19F850u;
    SET_GPR_U32(ctx, 31, 0x19F858u);
    ctx->pc = 0x193FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FB0u, 0x19F850u, 0x19F858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F858u;
label_19f858:
    // 0x19f858: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19f858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_19f85c:
    // 0x19f85c: 0x27b0009c  addiu       $s0, $sp, 0x9C
    ctx->pc = 0x19f85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_19f860:
    // 0x19f860: 0x2442b400  addiu       $v0, $v0, -0x4C00
    ctx->pc = 0x19f860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947840));
label_19f864:
    // 0x19f864: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x19f864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_19f868:
    // 0x19f868: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19f868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_19f86c:
    // 0x19f86c: 0xc0621ec  jal         func_1887B0
label_19f870:
    if (ctx->pc == 0x19F870u) {
        ctx->pc = 0x19F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F86Cu;
        // 0x19f870: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F874u;
        goto label_19f874;
    }
    ctx->pc = 0x19F86Cu;
    SET_GPR_U32(ctx, 31, 0x19F874u);
    ctx->pc = 0x19F870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F86Cu;
    // 0x19f870: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x19F86Cu, 0x19F874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F874u;
label_19f874:
    // 0x19f874: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19f874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_19f878:
    // 0x19f878: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x19f878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_19f87c:
    // 0x19f87c: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x19f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
label_19f880:
    // 0x19f880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f884:
    // 0x19f884: 0xc045cb8  jal         func_1172E0
label_19f888:
    if (ctx->pc == 0x19F888u) {
        ctx->pc = 0x19F888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F884u;
        // 0x19f888: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F88Cu;
        goto label_19f88c;
    }
    ctx->pc = 0x19F884u;
    SET_GPR_U32(ctx, 31, 0x19F88Cu);
    ctx->pc = 0x19F888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F884u;
    // 0x19f888: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x19F884u, 0x19F88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F88Cu;
label_19f88c:
    // 0x19f88c: 0x1000004d  b           . + 4 + (0x4D << 2)
label_19f890:
    if (ctx->pc == 0x19F890u) {
        ctx->pc = 0x19F894u;
        goto label_19f894;
    }
    ctx->pc = 0x19F88Cu;
    {
        const bool branch_taken_0x19f88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f88c) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F894u;
label_19f894:
    // 0x19f894: 0x8e820684  lw          $v0, 0x684($s4)
    ctx->pc = 0x19f894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1668)));
label_19f898:
    // 0x19f898: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19f89c:
    if (ctx->pc == 0x19F89Cu) {
        ctx->pc = 0x19F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F898u;
        // 0x19f89c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F8A0u;
        goto label_19f8a0;
    }
    ctx->pc = 0x19F898u;
    {
        const bool branch_taken_0x19f898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F898u;
        // 0x19f89c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f898) {
            ctx->pc = 0x19F8B0u;
            goto label_19f8b0;
        }
    }
    ctx->pc = 0x19F8A0u;
label_19f8a0:
    // 0x19f8a0: 0x8c420320  lw          $v0, 0x320($v0)
    ctx->pc = 0x19f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
label_19f8a4:
    // 0x19f8a4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_19f8a8:
    if (ctx->pc == 0x19F8A8u) {
        ctx->pc = 0x19F8ACu;
        goto label_19f8ac;
    }
    ctx->pc = 0x19F8A4u;
    {
        const bool branch_taken_0x19f8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f8a4) {
            ctx->pc = 0x19F8B0u;
            goto label_19f8b0;
        }
    }
    ctx->pc = 0x19F8ACu;
label_19f8ac:
    // 0x19f8ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19f8acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f8b0:
    // 0x19f8b0: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
label_19f8b4:
    if (ctx->pc == 0x19F8B4u) {
        ctx->pc = 0x19F8B8u;
        goto label_19f8b8;
    }
    ctx->pc = 0x19F8B0u;
    {
        const bool branch_taken_0x19f8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f8b0) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F8B8u;
label_19f8b8:
    // 0x19f8b8: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f8bc:
    // 0x19f8bc: 0xdc442818  ld          $a0, 0x2818($v0)
    ctx->pc = 0x19f8bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 10264)));
label_19f8c0:
    // 0x19f8c0: 0xc081a86  jal         func_206A18
label_19f8c4:
    if (ctx->pc == 0x19F8C4u) {
        ctx->pc = 0x19F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8C0u;
        // 0x19f8c4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F8C8u;
        goto label_19f8c8;
    }
    ctx->pc = 0x19F8C0u;
    SET_GPR_U32(ctx, 31, 0x19F8C8u);
    ctx->pc = 0x19F8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F8C0u;
    // 0x19f8c4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206A18u, 0x19F8C0u, 0x19F8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8C8u;
label_19f8c8:
    // 0x19f8c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x19f8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_19f8cc:
    // 0x19f8cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x19f8ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_19f8d0:
    // 0x19f8d0: 0x28410063  slti        $at, $v0, 0x63
    ctx->pc = 0x19f8d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)99) ? 1 : 0);
label_19f8d4:
    // 0x19f8d4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_19f8d8:
    if (ctx->pc == 0x19F8D8u) {
        ctx->pc = 0x19F8DCu;
        goto label_19f8dc;
    }
    ctx->pc = 0x19F8D4u;
    {
        const bool branch_taken_0x19f8d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f8d4) {
            ctx->pc = 0x19F8F0u;
            goto label_19f8f0;
        }
    }
    ctx->pc = 0x19F8DCu;
label_19f8dc:
    // 0x19f8dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19f8e0:
    // 0x19f8e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f8e4:
    // 0x19f8e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f8e8:
    // 0x19f8e8: 0xc064b08  jal         func_192C20
label_19f8ec:
    if (ctx->pc == 0x19F8ECu) {
        ctx->pc = 0x19F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8E8u;
        // 0x19f8ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F8F0u;
        goto label_19f8f0;
    }
    ctx->pc = 0x19F8E8u;
    SET_GPR_U32(ctx, 31, 0x19F8F0u);
    ctx->pc = 0x19F8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F8E8u;
    // 0x19f8ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x19F8E8u, 0x19F8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8F0u;
label_19f8f0:
    // 0x19f8f0: 0x8f848714  lw          $a0, -0x78EC($gp)
    ctx->pc = 0x19f8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19f8f4:
    // 0x19f8f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19f8f8:
    // 0x19f8f8: 0x8c832830  lw          $v1, 0x2830($a0)
    ctx->pc = 0x19f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10288)));
label_19f8fc:
    // 0x19f8fc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_19f900:
    if (ctx->pc == 0x19F900u) {
        ctx->pc = 0x19F904u;
        goto label_19f904;
    }
    ctx->pc = 0x19F8FCu;
    {
        const bool branch_taken_0x19f8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f8fc) {
            ctx->pc = 0x19F940u;
            goto label_19f940;
        }
    }
    ctx->pc = 0x19F904u;
label_19f904:
    // 0x19f904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f908:
    // 0x19f908: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_19f90c:
    if (ctx->pc == 0x19F90Cu) {
        ctx->pc = 0x19F910u;
        goto label_19f910;
    }
    ctx->pc = 0x19F908u;
    {
        const bool branch_taken_0x19f908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f908) {
            ctx->pc = 0x19F930u;
            goto label_19f930;
        }
    }
    ctx->pc = 0x19F910u;
label_19f910:
    // 0x19f910: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_19f914:
    if (ctx->pc == 0x19F914u) {
        ctx->pc = 0x19F918u;
        goto label_19f918;
    }
    ctx->pc = 0x19F910u;
    {
        const bool branch_taken_0x19f910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f910) {
            ctx->pc = 0x19F920u;
            goto label_19f920;
        }
    }
    ctx->pc = 0x19F918u;
label_19f918:
    // 0x19f918: 0x1000000d  b           . + 4 + (0xD << 2)
label_19f91c:
    if (ctx->pc == 0x19F91Cu) {
        ctx->pc = 0x19F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F918u;
        // 0x19f91c: 0x8e83068c  lw          $v1, 0x68C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F920u;
        goto label_19f920;
    }
    ctx->pc = 0x19F918u;
    {
        const bool branch_taken_0x19f918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F918u;
        // 0x19f91c: 0x8e83068c  lw          $v1, 0x68C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f918) {
            ctx->pc = 0x19F950u;
            goto label_19f950;
        }
    }
    ctx->pc = 0x19F920u;
label_19f920:
    // 0x19f920: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x19f920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_19f924:
    // 0x19f924: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x19f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_19f928:
    // 0x19f928: 0x10000008  b           . + 4 + (0x8 << 2)
label_19f92c:
    if (ctx->pc == 0x19F92Cu) {
        ctx->pc = 0x19F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F928u;
        // 0x19f92c: 0xac8228e4  sw          $v0, 0x28E4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 10468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F930u;
        goto label_19f930;
    }
    ctx->pc = 0x19F928u;
    {
        const bool branch_taken_0x19f928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F928u;
        // 0x19f92c: 0xac8228e4  sw          $v0, 0x28E4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 10468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f928) {
            ctx->pc = 0x19F94Cu;
            goto label_19f94c;
        }
    }
    ctx->pc = 0x19F930u;
label_19f930:
    // 0x19f930: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x19f930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_19f934:
    // 0x19f934: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x19f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_19f938:
    // 0x19f938: 0x10000004  b           . + 4 + (0x4 << 2)
label_19f93c:
    if (ctx->pc == 0x19F93Cu) {
        ctx->pc = 0x19F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F938u;
        // 0x19f93c: 0xac8228e4  sw          $v0, 0x28E4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 10468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F940u;
        goto label_19f940;
    }
    ctx->pc = 0x19F938u;
    {
        const bool branch_taken_0x19f938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F938u;
        // 0x19f93c: 0xac8228e4  sw          $v0, 0x28E4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 10468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f938) {
            ctx->pc = 0x19F94Cu;
            goto label_19f94c;
        }
    }
    ctx->pc = 0x19F940u;
label_19f940:
    // 0x19f940: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x19f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_19f944:
    // 0x19f944: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x19f944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_19f948:
    // 0x19f948: 0xac8228e4  sw          $v0, 0x28E4($a0)
    ctx->pc = 0x19f948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10468), GPR_U32(ctx, 2));
label_19f94c:
    // 0x19f94c: 0x8e83068c  lw          $v1, 0x68C($s4)
    ctx->pc = 0x19f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
label_19f950:
    // 0x19f950: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19f950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19f954:
    // 0x19f954: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_19f958:
    if (ctx->pc == 0x19F958u) {
        ctx->pc = 0x19F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F954u;
        // 0x19f958: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F95Cu;
        goto label_19f95c;
    }
    ctx->pc = 0x19F954u;
    {
        const bool branch_taken_0x19f954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F954u;
        // 0x19f958: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f954) {
            ctx->pc = 0x19F970u;
            goto label_19f970;
        }
    }
    ctx->pc = 0x19F95Cu;
label_19f95c:
    // 0x19f95c: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x19f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_19f960:
    // 0x19f960: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19f964:
    // 0x19f964: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_19f968:
    if (ctx->pc == 0x19F968u) {
        ctx->pc = 0x19F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F964u;
        // 0x19f968: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F96Cu;
        goto label_19f96c;
    }
    ctx->pc = 0x19F964u;
    {
        const bool branch_taken_0x19f964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F964u;
        // 0x19f968: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f964) {
            ctx->pc = 0x19F984u;
            goto label_19f984;
        }
    }
    ctx->pc = 0x19F96Cu;
label_19f96c:
    // 0x19f96c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f970:
    // 0x19f970: 0xc063e08  jal         func_18F820
label_19f974:
    if (ctx->pc == 0x19F974u) {
        ctx->pc = 0x19F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F970u;
        // 0x19f974: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F978u;
        goto label_19f978;
    }
    ctx->pc = 0x19F970u;
    SET_GPR_U32(ctx, 31, 0x19F978u);
    ctx->pc = 0x19F974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F970u;
    // 0x19f974: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F970u, 0x19F978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F978u;
label_19f978:
    // 0x19f978: 0x10000012  b           . + 4 + (0x12 << 2)
label_19f97c:
    if (ctx->pc == 0x19F97Cu) {
        ctx->pc = 0x19F980u;
        goto label_19f980;
    }
    ctx->pc = 0x19F978u;
    {
        const bool branch_taken_0x19f978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f978) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F980u;
label_19f980:
    // 0x19f980: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f984:
    // 0x19f984: 0xc063e08  jal         func_18F820
label_19f988:
    if (ctx->pc == 0x19F988u) {
        ctx->pc = 0x19F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F984u;
        // 0x19f988: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F98Cu;
        goto label_19f98c;
    }
    ctx->pc = 0x19F984u;
    SET_GPR_U32(ctx, 31, 0x19F98Cu);
    ctx->pc = 0x19F988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F984u;
    // 0x19f988: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F984u, 0x19F98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F98Cu;
label_19f98c:
    // 0x19f98c: 0x1000000d  b           . + 4 + (0xD << 2)
label_19f990:
    if (ctx->pc == 0x19F990u) {
        ctx->pc = 0x19F994u;
        goto label_19f994;
    }
    ctx->pc = 0x19F98Cu;
    {
        const bool branch_taken_0x19f98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f98c) {
            ctx->pc = 0x19F9C4u;
            goto label_19f9c4;
        }
    }
    ctx->pc = 0x19F994u;
label_19f994:
    // 0x19f994: 0x8f838214  lw          $v1, -0x7DEC($gp)
    ctx->pc = 0x19f994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_19f998:
    // 0x19f998: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x19f998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_19f99c:
    // 0x19f99c: 0xa06002f0  sb          $zero, 0x2F0($v1)
    ctx->pc = 0x19f99cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 752), (uint8_t)GPR_U32(ctx, 0));
label_19f9a0:
    // 0x19f9a0: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_19f9a4:
    if (ctx->pc == 0x19F9A4u) {
        ctx->pc = 0x19F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9A0u;
        // 0x19f9a4: 0xaf8086f8  sw          $zero, -0x7908($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F9A8u;
        goto label_19f9a8;
    }
    ctx->pc = 0x19F9A0u;
    {
        const bool branch_taken_0x19f9a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9A0u;
        // 0x19f9a4: 0xaf8086f8  sw          $zero, -0x7908($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9a0) {
            ctx->pc = 0x19F9D0u;
            goto label_19f9d0;
        }
    }
    ctx->pc = 0x19F9A8u;
label_19f9a8:
    // 0x19f9a8: 0x8e99031c  lw          $t9, 0x31C($s4)
    ctx->pc = 0x19f9a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 796)));
label_19f9ac:
    // 0x19f9ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19f9b0:
    // 0x19f9b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19f9b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19f9b4:
    // 0x19f9b4: 0x320f809  jalr        $t9
label_19f9b8:
    if (ctx->pc == 0x19F9B8u) {
        ctx->pc = 0x19F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9B4u;
        // 0x19f9b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F9BCu;
        goto label_19f9bc;
    }
    ctx->pc = 0x19F9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19F9BCu);
        ctx->pc = 0x19F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9B4u;
        // 0x19f9b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F9B4u, 0x19F9BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F9BCu;
label_19f9bc:
    // 0x19f9bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_19f9c0:
    if (ctx->pc == 0x19F9C0u) {
        ctx->pc = 0x19F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9BCu;
        // 0x19f9c0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F9C4u;
        goto label_19f9c4;
    }
    ctx->pc = 0x19F9BCu;
    {
        const bool branch_taken_0x19f9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9BCu;
        // 0x19f9c0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9bc) {
            ctx->pc = 0x19F9D4u;
            goto label_19f9d4;
        }
    }
    ctx->pc = 0x19F9C4u;
label_19f9c4:
    // 0x19f9c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19f9c8:
    // 0x19f9c8: 0xc067a50  jal         func_19E940
label_19f9cc:
    if (ctx->pc == 0x19F9CCu) {
        ctx->pc = 0x19F9D0u;
        goto label_19f9d0;
    }
    ctx->pc = 0x19F9C8u;
    SET_GPR_U32(ctx, 31, 0x19F9D0u);
    ctx->pc = 0x19E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E940u, 0x19F9C8u, 0x19F9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F9D0u;
label_19f9d0:
    // 0x19f9d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x19f9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19f9d4:
    // 0x19f9d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19f9d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19f9d8:
    // 0x19f9d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19f9d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19f9dc:
    // 0x19f9dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19f9dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19f9e0:
    // 0x19f9e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19f9e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19f9e4:
    // 0x19f9e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19f9e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19f9e8:
    // 0x19f9e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19f9e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19f9ec:
    // 0x19f9ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19f9f0:
    // 0x19f9f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19f9f4:
    // 0x19f9f4: 0x3e00008  jr          $ra
label_19f9f8:
    if (ctx->pc == 0x19F9F8u) {
        ctx->pc = 0x19F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9F4u;
        // 0x19f9f8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F9FCu;
        goto label_fallthrough_0x19f9f4;
    }
    ctx->pc = 0x19F9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9F4u;
        // 0x19f9f8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19f9f4:
    ctx->pc = 0x19F9FCu;
}
