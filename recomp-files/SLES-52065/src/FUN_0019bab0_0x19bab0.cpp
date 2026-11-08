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

// Function: FUN_0019bab0
// Address: 0x19bab0 - 0x19c500
void FUN_0019bab0_0x19bab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019bab0_0x19bab0");
#endif

    switch (ctx->pc) {
        case 0x19bab0u: goto label_19bab0;
        case 0x19bab4u: goto label_19bab4;
        case 0x19bab8u: goto label_19bab8;
        case 0x19babcu: goto label_19babc;
        case 0x19bac0u: goto label_19bac0;
        case 0x19bac4u: goto label_19bac4;
        case 0x19bac8u: goto label_19bac8;
        case 0x19baccu: goto label_19bacc;
        case 0x19bad0u: goto label_19bad0;
        case 0x19bad4u: goto label_19bad4;
        case 0x19bad8u: goto label_19bad8;
        case 0x19badcu: goto label_19badc;
        case 0x19bae0u: goto label_19bae0;
        case 0x19bae4u: goto label_19bae4;
        case 0x19bae8u: goto label_19bae8;
        case 0x19baecu: goto label_19baec;
        case 0x19baf0u: goto label_19baf0;
        case 0x19baf4u: goto label_19baf4;
        case 0x19baf8u: goto label_19baf8;
        case 0x19bafcu: goto label_19bafc;
        case 0x19bb00u: goto label_19bb00;
        case 0x19bb04u: goto label_19bb04;
        case 0x19bb08u: goto label_19bb08;
        case 0x19bb0cu: goto label_19bb0c;
        case 0x19bb10u: goto label_19bb10;
        case 0x19bb14u: goto label_19bb14;
        case 0x19bb18u: goto label_19bb18;
        case 0x19bb1cu: goto label_19bb1c;
        case 0x19bb20u: goto label_19bb20;
        case 0x19bb24u: goto label_19bb24;
        case 0x19bb28u: goto label_19bb28;
        case 0x19bb2cu: goto label_19bb2c;
        case 0x19bb30u: goto label_19bb30;
        case 0x19bb34u: goto label_19bb34;
        case 0x19bb38u: goto label_19bb38;
        case 0x19bb3cu: goto label_19bb3c;
        case 0x19bb40u: goto label_19bb40;
        case 0x19bb44u: goto label_19bb44;
        case 0x19bb48u: goto label_19bb48;
        case 0x19bb4cu: goto label_19bb4c;
        case 0x19bb50u: goto label_19bb50;
        case 0x19bb54u: goto label_19bb54;
        case 0x19bb58u: goto label_19bb58;
        case 0x19bb5cu: goto label_19bb5c;
        case 0x19bb60u: goto label_19bb60;
        case 0x19bb64u: goto label_19bb64;
        case 0x19bb68u: goto label_19bb68;
        case 0x19bb6cu: goto label_19bb6c;
        case 0x19bb70u: goto label_19bb70;
        case 0x19bb74u: goto label_19bb74;
        case 0x19bb78u: goto label_19bb78;
        case 0x19bb7cu: goto label_19bb7c;
        case 0x19bb80u: goto label_19bb80;
        case 0x19bb84u: goto label_19bb84;
        case 0x19bb88u: goto label_19bb88;
        case 0x19bb8cu: goto label_19bb8c;
        case 0x19bb90u: goto label_19bb90;
        case 0x19bb94u: goto label_19bb94;
        case 0x19bb98u: goto label_19bb98;
        case 0x19bb9cu: goto label_19bb9c;
        case 0x19bba0u: goto label_19bba0;
        case 0x19bba4u: goto label_19bba4;
        case 0x19bba8u: goto label_19bba8;
        case 0x19bbacu: goto label_19bbac;
        case 0x19bbb0u: goto label_19bbb0;
        case 0x19bbb4u: goto label_19bbb4;
        case 0x19bbb8u: goto label_19bbb8;
        case 0x19bbbcu: goto label_19bbbc;
        case 0x19bbc0u: goto label_19bbc0;
        case 0x19bbc4u: goto label_19bbc4;
        case 0x19bbc8u: goto label_19bbc8;
        case 0x19bbccu: goto label_19bbcc;
        case 0x19bbd0u: goto label_19bbd0;
        case 0x19bbd4u: goto label_19bbd4;
        case 0x19bbd8u: goto label_19bbd8;
        case 0x19bbdcu: goto label_19bbdc;
        case 0x19bbe0u: goto label_19bbe0;
        case 0x19bbe4u: goto label_19bbe4;
        case 0x19bbe8u: goto label_19bbe8;
        case 0x19bbecu: goto label_19bbec;
        case 0x19bbf0u: goto label_19bbf0;
        case 0x19bbf4u: goto label_19bbf4;
        case 0x19bbf8u: goto label_19bbf8;
        case 0x19bbfcu: goto label_19bbfc;
        case 0x19bc00u: goto label_19bc00;
        case 0x19bc04u: goto label_19bc04;
        case 0x19bc08u: goto label_19bc08;
        case 0x19bc0cu: goto label_19bc0c;
        case 0x19bc10u: goto label_19bc10;
        case 0x19bc14u: goto label_19bc14;
        case 0x19bc18u: goto label_19bc18;
        case 0x19bc1cu: goto label_19bc1c;
        case 0x19bc20u: goto label_19bc20;
        case 0x19bc24u: goto label_19bc24;
        case 0x19bc28u: goto label_19bc28;
        case 0x19bc2cu: goto label_19bc2c;
        case 0x19bc30u: goto label_19bc30;
        case 0x19bc34u: goto label_19bc34;
        case 0x19bc38u: goto label_19bc38;
        case 0x19bc3cu: goto label_19bc3c;
        case 0x19bc40u: goto label_19bc40;
        case 0x19bc44u: goto label_19bc44;
        case 0x19bc48u: goto label_19bc48;
        case 0x19bc4cu: goto label_19bc4c;
        case 0x19bc50u: goto label_19bc50;
        case 0x19bc54u: goto label_19bc54;
        case 0x19bc58u: goto label_19bc58;
        case 0x19bc5cu: goto label_19bc5c;
        case 0x19bc60u: goto label_19bc60;
        case 0x19bc64u: goto label_19bc64;
        case 0x19bc68u: goto label_19bc68;
        case 0x19bc6cu: goto label_19bc6c;
        case 0x19bc70u: goto label_19bc70;
        case 0x19bc74u: goto label_19bc74;
        case 0x19bc78u: goto label_19bc78;
        case 0x19bc7cu: goto label_19bc7c;
        case 0x19bc80u: goto label_19bc80;
        case 0x19bc84u: goto label_19bc84;
        case 0x19bc88u: goto label_19bc88;
        case 0x19bc8cu: goto label_19bc8c;
        case 0x19bc90u: goto label_19bc90;
        case 0x19bc94u: goto label_19bc94;
        case 0x19bc98u: goto label_19bc98;
        case 0x19bc9cu: goto label_19bc9c;
        case 0x19bca0u: goto label_19bca0;
        case 0x19bca4u: goto label_19bca4;
        case 0x19bca8u: goto label_19bca8;
        case 0x19bcacu: goto label_19bcac;
        case 0x19bcb0u: goto label_19bcb0;
        case 0x19bcb4u: goto label_19bcb4;
        case 0x19bcb8u: goto label_19bcb8;
        case 0x19bcbcu: goto label_19bcbc;
        case 0x19bcc0u: goto label_19bcc0;
        case 0x19bcc4u: goto label_19bcc4;
        case 0x19bcc8u: goto label_19bcc8;
        case 0x19bcccu: goto label_19bccc;
        case 0x19bcd0u: goto label_19bcd0;
        case 0x19bcd4u: goto label_19bcd4;
        case 0x19bcd8u: goto label_19bcd8;
        case 0x19bcdcu: goto label_19bcdc;
        case 0x19bce0u: goto label_19bce0;
        case 0x19bce4u: goto label_19bce4;
        case 0x19bce8u: goto label_19bce8;
        case 0x19bcecu: goto label_19bcec;
        case 0x19bcf0u: goto label_19bcf0;
        case 0x19bcf4u: goto label_19bcf4;
        case 0x19bcf8u: goto label_19bcf8;
        case 0x19bcfcu: goto label_19bcfc;
        case 0x19bd00u: goto label_19bd00;
        case 0x19bd04u: goto label_19bd04;
        case 0x19bd08u: goto label_19bd08;
        case 0x19bd0cu: goto label_19bd0c;
        case 0x19bd10u: goto label_19bd10;
        case 0x19bd14u: goto label_19bd14;
        case 0x19bd18u: goto label_19bd18;
        case 0x19bd1cu: goto label_19bd1c;
        case 0x19bd20u: goto label_19bd20;
        case 0x19bd24u: goto label_19bd24;
        case 0x19bd28u: goto label_19bd28;
        case 0x19bd2cu: goto label_19bd2c;
        case 0x19bd30u: goto label_19bd30;
        case 0x19bd34u: goto label_19bd34;
        case 0x19bd38u: goto label_19bd38;
        case 0x19bd3cu: goto label_19bd3c;
        case 0x19bd40u: goto label_19bd40;
        case 0x19bd44u: goto label_19bd44;
        case 0x19bd48u: goto label_19bd48;
        case 0x19bd4cu: goto label_19bd4c;
        case 0x19bd50u: goto label_19bd50;
        case 0x19bd54u: goto label_19bd54;
        case 0x19bd58u: goto label_19bd58;
        case 0x19bd5cu: goto label_19bd5c;
        case 0x19bd60u: goto label_19bd60;
        case 0x19bd64u: goto label_19bd64;
        case 0x19bd68u: goto label_19bd68;
        case 0x19bd6cu: goto label_19bd6c;
        case 0x19bd70u: goto label_19bd70;
        case 0x19bd74u: goto label_19bd74;
        case 0x19bd78u: goto label_19bd78;
        case 0x19bd7cu: goto label_19bd7c;
        case 0x19bd80u: goto label_19bd80;
        case 0x19bd84u: goto label_19bd84;
        case 0x19bd88u: goto label_19bd88;
        case 0x19bd8cu: goto label_19bd8c;
        case 0x19bd90u: goto label_19bd90;
        case 0x19bd94u: goto label_19bd94;
        case 0x19bd98u: goto label_19bd98;
        case 0x19bd9cu: goto label_19bd9c;
        case 0x19bda0u: goto label_19bda0;
        case 0x19bda4u: goto label_19bda4;
        case 0x19bda8u: goto label_19bda8;
        case 0x19bdacu: goto label_19bdac;
        case 0x19bdb0u: goto label_19bdb0;
        case 0x19bdb4u: goto label_19bdb4;
        case 0x19bdb8u: goto label_19bdb8;
        case 0x19bdbcu: goto label_19bdbc;
        case 0x19bdc0u: goto label_19bdc0;
        case 0x19bdc4u: goto label_19bdc4;
        case 0x19bdc8u: goto label_19bdc8;
        case 0x19bdccu: goto label_19bdcc;
        case 0x19bdd0u: goto label_19bdd0;
        case 0x19bdd4u: goto label_19bdd4;
        case 0x19bdd8u: goto label_19bdd8;
        case 0x19bddcu: goto label_19bddc;
        case 0x19bde0u: goto label_19bde0;
        case 0x19bde4u: goto label_19bde4;
        case 0x19bde8u: goto label_19bde8;
        case 0x19bdecu: goto label_19bdec;
        case 0x19bdf0u: goto label_19bdf0;
        case 0x19bdf4u: goto label_19bdf4;
        case 0x19bdf8u: goto label_19bdf8;
        case 0x19bdfcu: goto label_19bdfc;
        case 0x19be00u: goto label_19be00;
        case 0x19be04u: goto label_19be04;
        case 0x19be08u: goto label_19be08;
        case 0x19be0cu: goto label_19be0c;
        case 0x19be10u: goto label_19be10;
        case 0x19be14u: goto label_19be14;
        case 0x19be18u: goto label_19be18;
        case 0x19be1cu: goto label_19be1c;
        case 0x19be20u: goto label_19be20;
        case 0x19be24u: goto label_19be24;
        case 0x19be28u: goto label_19be28;
        case 0x19be2cu: goto label_19be2c;
        case 0x19be30u: goto label_19be30;
        case 0x19be34u: goto label_19be34;
        case 0x19be38u: goto label_19be38;
        case 0x19be3cu: goto label_19be3c;
        case 0x19be40u: goto label_19be40;
        case 0x19be44u: goto label_19be44;
        case 0x19be48u: goto label_19be48;
        case 0x19be4cu: goto label_19be4c;
        case 0x19be50u: goto label_19be50;
        case 0x19be54u: goto label_19be54;
        case 0x19be58u: goto label_19be58;
        case 0x19be5cu: goto label_19be5c;
        case 0x19be60u: goto label_19be60;
        case 0x19be64u: goto label_19be64;
        case 0x19be68u: goto label_19be68;
        case 0x19be6cu: goto label_19be6c;
        case 0x19be70u: goto label_19be70;
        case 0x19be74u: goto label_19be74;
        case 0x19be78u: goto label_19be78;
        case 0x19be7cu: goto label_19be7c;
        case 0x19be80u: goto label_19be80;
        case 0x19be84u: goto label_19be84;
        case 0x19be88u: goto label_19be88;
        case 0x19be8cu: goto label_19be8c;
        case 0x19be90u: goto label_19be90;
        case 0x19be94u: goto label_19be94;
        case 0x19be98u: goto label_19be98;
        case 0x19be9cu: goto label_19be9c;
        case 0x19bea0u: goto label_19bea0;
        case 0x19bea4u: goto label_19bea4;
        case 0x19bea8u: goto label_19bea8;
        case 0x19beacu: goto label_19beac;
        case 0x19beb0u: goto label_19beb0;
        case 0x19beb4u: goto label_19beb4;
        case 0x19beb8u: goto label_19beb8;
        case 0x19bebcu: goto label_19bebc;
        case 0x19bec0u: goto label_19bec0;
        case 0x19bec4u: goto label_19bec4;
        case 0x19bec8u: goto label_19bec8;
        case 0x19beccu: goto label_19becc;
        case 0x19bed0u: goto label_19bed0;
        case 0x19bed4u: goto label_19bed4;
        case 0x19bed8u: goto label_19bed8;
        case 0x19bedcu: goto label_19bedc;
        case 0x19bee0u: goto label_19bee0;
        case 0x19bee4u: goto label_19bee4;
        case 0x19bee8u: goto label_19bee8;
        case 0x19beecu: goto label_19beec;
        case 0x19bef0u: goto label_19bef0;
        case 0x19bef4u: goto label_19bef4;
        case 0x19bef8u: goto label_19bef8;
        case 0x19befcu: goto label_19befc;
        case 0x19bf00u: goto label_19bf00;
        case 0x19bf04u: goto label_19bf04;
        case 0x19bf08u: goto label_19bf08;
        case 0x19bf0cu: goto label_19bf0c;
        case 0x19bf10u: goto label_19bf10;
        case 0x19bf14u: goto label_19bf14;
        case 0x19bf18u: goto label_19bf18;
        case 0x19bf1cu: goto label_19bf1c;
        case 0x19bf20u: goto label_19bf20;
        case 0x19bf24u: goto label_19bf24;
        case 0x19bf28u: goto label_19bf28;
        case 0x19bf2cu: goto label_19bf2c;
        case 0x19bf30u: goto label_19bf30;
        case 0x19bf34u: goto label_19bf34;
        case 0x19bf38u: goto label_19bf38;
        case 0x19bf3cu: goto label_19bf3c;
        case 0x19bf40u: goto label_19bf40;
        case 0x19bf44u: goto label_19bf44;
        case 0x19bf48u: goto label_19bf48;
        case 0x19bf4cu: goto label_19bf4c;
        case 0x19bf50u: goto label_19bf50;
        case 0x19bf54u: goto label_19bf54;
        case 0x19bf58u: goto label_19bf58;
        case 0x19bf5cu: goto label_19bf5c;
        case 0x19bf60u: goto label_19bf60;
        case 0x19bf64u: goto label_19bf64;
        case 0x19bf68u: goto label_19bf68;
        case 0x19bf6cu: goto label_19bf6c;
        case 0x19bf70u: goto label_19bf70;
        case 0x19bf74u: goto label_19bf74;
        case 0x19bf78u: goto label_19bf78;
        case 0x19bf7cu: goto label_19bf7c;
        case 0x19bf80u: goto label_19bf80;
        case 0x19bf84u: goto label_19bf84;
        case 0x19bf88u: goto label_19bf88;
        case 0x19bf8cu: goto label_19bf8c;
        case 0x19bf90u: goto label_19bf90;
        case 0x19bf94u: goto label_19bf94;
        case 0x19bf98u: goto label_19bf98;
        case 0x19bf9cu: goto label_19bf9c;
        case 0x19bfa0u: goto label_19bfa0;
        case 0x19bfa4u: goto label_19bfa4;
        case 0x19bfa8u: goto label_19bfa8;
        case 0x19bfacu: goto label_19bfac;
        case 0x19bfb0u: goto label_19bfb0;
        case 0x19bfb4u: goto label_19bfb4;
        case 0x19bfb8u: goto label_19bfb8;
        case 0x19bfbcu: goto label_19bfbc;
        case 0x19bfc0u: goto label_19bfc0;
        case 0x19bfc4u: goto label_19bfc4;
        case 0x19bfc8u: goto label_19bfc8;
        case 0x19bfccu: goto label_19bfcc;
        case 0x19bfd0u: goto label_19bfd0;
        case 0x19bfd4u: goto label_19bfd4;
        case 0x19bfd8u: goto label_19bfd8;
        case 0x19bfdcu: goto label_19bfdc;
        case 0x19bfe0u: goto label_19bfe0;
        case 0x19bfe4u: goto label_19bfe4;
        case 0x19bfe8u: goto label_19bfe8;
        case 0x19bfecu: goto label_19bfec;
        case 0x19bff0u: goto label_19bff0;
        case 0x19bff4u: goto label_19bff4;
        case 0x19bff8u: goto label_19bff8;
        case 0x19bffcu: goto label_19bffc;
        case 0x19c000u: goto label_19c000;
        case 0x19c004u: goto label_19c004;
        case 0x19c008u: goto label_19c008;
        case 0x19c00cu: goto label_19c00c;
        case 0x19c010u: goto label_19c010;
        case 0x19c014u: goto label_19c014;
        case 0x19c018u: goto label_19c018;
        case 0x19c01cu: goto label_19c01c;
        case 0x19c020u: goto label_19c020;
        case 0x19c024u: goto label_19c024;
        case 0x19c028u: goto label_19c028;
        case 0x19c02cu: goto label_19c02c;
        case 0x19c030u: goto label_19c030;
        case 0x19c034u: goto label_19c034;
        case 0x19c038u: goto label_19c038;
        case 0x19c03cu: goto label_19c03c;
        case 0x19c040u: goto label_19c040;
        case 0x19c044u: goto label_19c044;
        case 0x19c048u: goto label_19c048;
        case 0x19c04cu: goto label_19c04c;
        case 0x19c050u: goto label_19c050;
        case 0x19c054u: goto label_19c054;
        case 0x19c058u: goto label_19c058;
        case 0x19c05cu: goto label_19c05c;
        case 0x19c060u: goto label_19c060;
        case 0x19c064u: goto label_19c064;
        case 0x19c068u: goto label_19c068;
        case 0x19c06cu: goto label_19c06c;
        case 0x19c070u: goto label_19c070;
        case 0x19c074u: goto label_19c074;
        case 0x19c078u: goto label_19c078;
        case 0x19c07cu: goto label_19c07c;
        case 0x19c080u: goto label_19c080;
        case 0x19c084u: goto label_19c084;
        case 0x19c088u: goto label_19c088;
        case 0x19c08cu: goto label_19c08c;
        case 0x19c090u: goto label_19c090;
        case 0x19c094u: goto label_19c094;
        case 0x19c098u: goto label_19c098;
        case 0x19c09cu: goto label_19c09c;
        case 0x19c0a0u: goto label_19c0a0;
        case 0x19c0a4u: goto label_19c0a4;
        case 0x19c0a8u: goto label_19c0a8;
        case 0x19c0acu: goto label_19c0ac;
        case 0x19c0b0u: goto label_19c0b0;
        case 0x19c0b4u: goto label_19c0b4;
        case 0x19c0b8u: goto label_19c0b8;
        case 0x19c0bcu: goto label_19c0bc;
        case 0x19c0c0u: goto label_19c0c0;
        case 0x19c0c4u: goto label_19c0c4;
        case 0x19c0c8u: goto label_19c0c8;
        case 0x19c0ccu: goto label_19c0cc;
        case 0x19c0d0u: goto label_19c0d0;
        case 0x19c0d4u: goto label_19c0d4;
        case 0x19c0d8u: goto label_19c0d8;
        case 0x19c0dcu: goto label_19c0dc;
        case 0x19c0e0u: goto label_19c0e0;
        case 0x19c0e4u: goto label_19c0e4;
        case 0x19c0e8u: goto label_19c0e8;
        case 0x19c0ecu: goto label_19c0ec;
        case 0x19c0f0u: goto label_19c0f0;
        case 0x19c0f4u: goto label_19c0f4;
        case 0x19c0f8u: goto label_19c0f8;
        case 0x19c0fcu: goto label_19c0fc;
        case 0x19c100u: goto label_19c100;
        case 0x19c104u: goto label_19c104;
        case 0x19c108u: goto label_19c108;
        case 0x19c10cu: goto label_19c10c;
        case 0x19c110u: goto label_19c110;
        case 0x19c114u: goto label_19c114;
        case 0x19c118u: goto label_19c118;
        case 0x19c11cu: goto label_19c11c;
        case 0x19c120u: goto label_19c120;
        case 0x19c124u: goto label_19c124;
        case 0x19c128u: goto label_19c128;
        case 0x19c12cu: goto label_19c12c;
        case 0x19c130u: goto label_19c130;
        case 0x19c134u: goto label_19c134;
        case 0x19c138u: goto label_19c138;
        case 0x19c13cu: goto label_19c13c;
        case 0x19c140u: goto label_19c140;
        case 0x19c144u: goto label_19c144;
        case 0x19c148u: goto label_19c148;
        case 0x19c14cu: goto label_19c14c;
        case 0x19c150u: goto label_19c150;
        case 0x19c154u: goto label_19c154;
        case 0x19c158u: goto label_19c158;
        case 0x19c15cu: goto label_19c15c;
        case 0x19c160u: goto label_19c160;
        case 0x19c164u: goto label_19c164;
        case 0x19c168u: goto label_19c168;
        case 0x19c16cu: goto label_19c16c;
        case 0x19c170u: goto label_19c170;
        case 0x19c174u: goto label_19c174;
        case 0x19c178u: goto label_19c178;
        case 0x19c17cu: goto label_19c17c;
        case 0x19c180u: goto label_19c180;
        case 0x19c184u: goto label_19c184;
        case 0x19c188u: goto label_19c188;
        case 0x19c18cu: goto label_19c18c;
        case 0x19c190u: goto label_19c190;
        case 0x19c194u: goto label_19c194;
        case 0x19c198u: goto label_19c198;
        case 0x19c19cu: goto label_19c19c;
        case 0x19c1a0u: goto label_19c1a0;
        case 0x19c1a4u: goto label_19c1a4;
        case 0x19c1a8u: goto label_19c1a8;
        case 0x19c1acu: goto label_19c1ac;
        case 0x19c1b0u: goto label_19c1b0;
        case 0x19c1b4u: goto label_19c1b4;
        case 0x19c1b8u: goto label_19c1b8;
        case 0x19c1bcu: goto label_19c1bc;
        case 0x19c1c0u: goto label_19c1c0;
        case 0x19c1c4u: goto label_19c1c4;
        case 0x19c1c8u: goto label_19c1c8;
        case 0x19c1ccu: goto label_19c1cc;
        case 0x19c1d0u: goto label_19c1d0;
        case 0x19c1d4u: goto label_19c1d4;
        case 0x19c1d8u: goto label_19c1d8;
        case 0x19c1dcu: goto label_19c1dc;
        case 0x19c1e0u: goto label_19c1e0;
        case 0x19c1e4u: goto label_19c1e4;
        case 0x19c1e8u: goto label_19c1e8;
        case 0x19c1ecu: goto label_19c1ec;
        case 0x19c1f0u: goto label_19c1f0;
        case 0x19c1f4u: goto label_19c1f4;
        case 0x19c1f8u: goto label_19c1f8;
        case 0x19c1fcu: goto label_19c1fc;
        case 0x19c200u: goto label_19c200;
        case 0x19c204u: goto label_19c204;
        case 0x19c208u: goto label_19c208;
        case 0x19c20cu: goto label_19c20c;
        case 0x19c210u: goto label_19c210;
        case 0x19c214u: goto label_19c214;
        case 0x19c218u: goto label_19c218;
        case 0x19c21cu: goto label_19c21c;
        case 0x19c220u: goto label_19c220;
        case 0x19c224u: goto label_19c224;
        case 0x19c228u: goto label_19c228;
        case 0x19c22cu: goto label_19c22c;
        case 0x19c230u: goto label_19c230;
        case 0x19c234u: goto label_19c234;
        case 0x19c238u: goto label_19c238;
        case 0x19c23cu: goto label_19c23c;
        case 0x19c240u: goto label_19c240;
        case 0x19c244u: goto label_19c244;
        case 0x19c248u: goto label_19c248;
        case 0x19c24cu: goto label_19c24c;
        case 0x19c250u: goto label_19c250;
        case 0x19c254u: goto label_19c254;
        case 0x19c258u: goto label_19c258;
        case 0x19c25cu: goto label_19c25c;
        case 0x19c260u: goto label_19c260;
        case 0x19c264u: goto label_19c264;
        case 0x19c268u: goto label_19c268;
        case 0x19c26cu: goto label_19c26c;
        case 0x19c270u: goto label_19c270;
        case 0x19c274u: goto label_19c274;
        case 0x19c278u: goto label_19c278;
        case 0x19c27cu: goto label_19c27c;
        case 0x19c280u: goto label_19c280;
        case 0x19c284u: goto label_19c284;
        case 0x19c288u: goto label_19c288;
        case 0x19c28cu: goto label_19c28c;
        case 0x19c290u: goto label_19c290;
        case 0x19c294u: goto label_19c294;
        case 0x19c298u: goto label_19c298;
        case 0x19c29cu: goto label_19c29c;
        case 0x19c2a0u: goto label_19c2a0;
        case 0x19c2a4u: goto label_19c2a4;
        case 0x19c2a8u: goto label_19c2a8;
        case 0x19c2acu: goto label_19c2ac;
        case 0x19c2b0u: goto label_19c2b0;
        case 0x19c2b4u: goto label_19c2b4;
        case 0x19c2b8u: goto label_19c2b8;
        case 0x19c2bcu: goto label_19c2bc;
        case 0x19c2c0u: goto label_19c2c0;
        case 0x19c2c4u: goto label_19c2c4;
        case 0x19c2c8u: goto label_19c2c8;
        case 0x19c2ccu: goto label_19c2cc;
        case 0x19c2d0u: goto label_19c2d0;
        case 0x19c2d4u: goto label_19c2d4;
        case 0x19c2d8u: goto label_19c2d8;
        case 0x19c2dcu: goto label_19c2dc;
        case 0x19c2e0u: goto label_19c2e0;
        case 0x19c2e4u: goto label_19c2e4;
        case 0x19c2e8u: goto label_19c2e8;
        case 0x19c2ecu: goto label_19c2ec;
        case 0x19c2f0u: goto label_19c2f0;
        case 0x19c2f4u: goto label_19c2f4;
        case 0x19c2f8u: goto label_19c2f8;
        case 0x19c2fcu: goto label_19c2fc;
        case 0x19c300u: goto label_19c300;
        case 0x19c304u: goto label_19c304;
        case 0x19c308u: goto label_19c308;
        case 0x19c30cu: goto label_19c30c;
        case 0x19c310u: goto label_19c310;
        case 0x19c314u: goto label_19c314;
        case 0x19c318u: goto label_19c318;
        case 0x19c31cu: goto label_19c31c;
        case 0x19c320u: goto label_19c320;
        case 0x19c324u: goto label_19c324;
        case 0x19c328u: goto label_19c328;
        case 0x19c32cu: goto label_19c32c;
        case 0x19c330u: goto label_19c330;
        case 0x19c334u: goto label_19c334;
        case 0x19c338u: goto label_19c338;
        case 0x19c33cu: goto label_19c33c;
        case 0x19c340u: goto label_19c340;
        case 0x19c344u: goto label_19c344;
        case 0x19c348u: goto label_19c348;
        case 0x19c34cu: goto label_19c34c;
        case 0x19c350u: goto label_19c350;
        case 0x19c354u: goto label_19c354;
        case 0x19c358u: goto label_19c358;
        case 0x19c35cu: goto label_19c35c;
        case 0x19c360u: goto label_19c360;
        case 0x19c364u: goto label_19c364;
        case 0x19c368u: goto label_19c368;
        case 0x19c36cu: goto label_19c36c;
        case 0x19c370u: goto label_19c370;
        case 0x19c374u: goto label_19c374;
        case 0x19c378u: goto label_19c378;
        case 0x19c37cu: goto label_19c37c;
        case 0x19c380u: goto label_19c380;
        case 0x19c384u: goto label_19c384;
        case 0x19c388u: goto label_19c388;
        case 0x19c38cu: goto label_19c38c;
        case 0x19c390u: goto label_19c390;
        case 0x19c394u: goto label_19c394;
        case 0x19c398u: goto label_19c398;
        case 0x19c39cu: goto label_19c39c;
        case 0x19c3a0u: goto label_19c3a0;
        case 0x19c3a4u: goto label_19c3a4;
        case 0x19c3a8u: goto label_19c3a8;
        case 0x19c3acu: goto label_19c3ac;
        case 0x19c3b0u: goto label_19c3b0;
        case 0x19c3b4u: goto label_19c3b4;
        case 0x19c3b8u: goto label_19c3b8;
        case 0x19c3bcu: goto label_19c3bc;
        case 0x19c3c0u: goto label_19c3c0;
        case 0x19c3c4u: goto label_19c3c4;
        case 0x19c3c8u: goto label_19c3c8;
        case 0x19c3ccu: goto label_19c3cc;
        case 0x19c3d0u: goto label_19c3d0;
        case 0x19c3d4u: goto label_19c3d4;
        case 0x19c3d8u: goto label_19c3d8;
        case 0x19c3dcu: goto label_19c3dc;
        case 0x19c3e0u: goto label_19c3e0;
        case 0x19c3e4u: goto label_19c3e4;
        case 0x19c3e8u: goto label_19c3e8;
        case 0x19c3ecu: goto label_19c3ec;
        case 0x19c3f0u: goto label_19c3f0;
        case 0x19c3f4u: goto label_19c3f4;
        case 0x19c3f8u: goto label_19c3f8;
        case 0x19c3fcu: goto label_19c3fc;
        case 0x19c400u: goto label_19c400;
        case 0x19c404u: goto label_19c404;
        case 0x19c408u: goto label_19c408;
        case 0x19c40cu: goto label_19c40c;
        case 0x19c410u: goto label_19c410;
        case 0x19c414u: goto label_19c414;
        case 0x19c418u: goto label_19c418;
        case 0x19c41cu: goto label_19c41c;
        case 0x19c420u: goto label_19c420;
        case 0x19c424u: goto label_19c424;
        case 0x19c428u: goto label_19c428;
        case 0x19c42cu: goto label_19c42c;
        case 0x19c430u: goto label_19c430;
        case 0x19c434u: goto label_19c434;
        case 0x19c438u: goto label_19c438;
        case 0x19c43cu: goto label_19c43c;
        case 0x19c440u: goto label_19c440;
        case 0x19c444u: goto label_19c444;
        case 0x19c448u: goto label_19c448;
        case 0x19c44cu: goto label_19c44c;
        case 0x19c450u: goto label_19c450;
        case 0x19c454u: goto label_19c454;
        case 0x19c458u: goto label_19c458;
        case 0x19c45cu: goto label_19c45c;
        case 0x19c460u: goto label_19c460;
        case 0x19c464u: goto label_19c464;
        case 0x19c468u: goto label_19c468;
        case 0x19c46cu: goto label_19c46c;
        case 0x19c470u: goto label_19c470;
        case 0x19c474u: goto label_19c474;
        case 0x19c478u: goto label_19c478;
        case 0x19c47cu: goto label_19c47c;
        case 0x19c480u: goto label_19c480;
        case 0x19c484u: goto label_19c484;
        case 0x19c488u: goto label_19c488;
        case 0x19c48cu: goto label_19c48c;
        case 0x19c490u: goto label_19c490;
        case 0x19c494u: goto label_19c494;
        case 0x19c498u: goto label_19c498;
        case 0x19c49cu: goto label_19c49c;
        case 0x19c4a0u: goto label_19c4a0;
        case 0x19c4a4u: goto label_19c4a4;
        case 0x19c4a8u: goto label_19c4a8;
        case 0x19c4acu: goto label_19c4ac;
        case 0x19c4b0u: goto label_19c4b0;
        case 0x19c4b4u: goto label_19c4b4;
        case 0x19c4b8u: goto label_19c4b8;
        case 0x19c4bcu: goto label_19c4bc;
        case 0x19c4c0u: goto label_19c4c0;
        case 0x19c4c4u: goto label_19c4c4;
        case 0x19c4c8u: goto label_19c4c8;
        case 0x19c4ccu: goto label_19c4cc;
        case 0x19c4d0u: goto label_19c4d0;
        case 0x19c4d4u: goto label_19c4d4;
        case 0x19c4d8u: goto label_19c4d8;
        case 0x19c4dcu: goto label_19c4dc;
        case 0x19c4e0u: goto label_19c4e0;
        case 0x19c4e4u: goto label_19c4e4;
        case 0x19c4e8u: goto label_19c4e8;
        case 0x19c4ecu: goto label_19c4ec;
        case 0x19c4f0u: goto label_19c4f0;
        case 0x19c4f4u: goto label_19c4f4;
        case 0x19c4f8u: goto label_19c4f8;
        case 0x19c4fcu: goto label_19c4fc;
        default: break;
    }

    ctx->pc = 0x19bab0u;

label_19bab0:
    // 0x19bab0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19bab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_19bab4:
    // 0x19bab4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19bab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_19bab8:
    // 0x19bab8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19bab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_19babc:
    // 0x19babc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19babcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_19bac0:
    // 0x19bac0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19bac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19bac4:
    // 0x19bac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19bac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19bac8:
    // 0x19bac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19bacc:
    // 0x19bacc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19baccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19bad0:
    // 0x19bad0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19bad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19bad4:
    // 0x19bad4: 0xc069afc  jal         func_1A6BF0
label_19bad8:
    if (ctx->pc == 0x19BAD8u) {
        ctx->pc = 0x19BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BAD4u;
        // 0x19bad8: 0x26240a80  addiu       $a0, $s1, 0xA80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BADCu;
        goto label_19badc;
    }
    ctx->pc = 0x19BAD4u;
    SET_GPR_U32(ctx, 31, 0x19BADCu);
    ctx->pc = 0x19BAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BAD4u;
    // 0x19bad8: 0x26240a80  addiu       $a0, $s1, 0xA80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x19BAD4u, 0x19BADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BADCu;
label_19badc:
    // 0x19badc: 0xc069a24  jal         func_1A6890
label_19bae0:
    if (ctx->pc == 0x19BAE0u) {
        ctx->pc = 0x19BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BADCu;
        // 0x19bae0: 0x26240aa0  addiu       $a0, $s1, 0xAA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BAE4u;
        goto label_19bae4;
    }
    ctx->pc = 0x19BADCu;
    SET_GPR_U32(ctx, 31, 0x19BAE4u);
    ctx->pc = 0x19BAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BADCu;
    // 0x19bae0: 0x26240aa0  addiu       $a0, $s1, 0xAA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6890u, 0x19BADCu, 0x19BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BAE4u;
label_19bae4:
    // 0x19bae4: 0xc063dd4  jal         func_18F750
label_19bae8:
    if (ctx->pc == 0x19BAE8u) {
        ctx->pc = 0x19BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BAE4u;
        // 0x19bae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BAECu;
        goto label_19baec;
    }
    ctx->pc = 0x19BAE4u;
    SET_GPR_U32(ctx, 31, 0x19BAECu);
    ctx->pc = 0x19BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BAE4u;
    // 0x19bae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19BAE4u, 0x19BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BAECu;
label_19baec:
    // 0x19baec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x19baecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_19baf0:
    // 0x19baf0: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x19baf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_19baf4:
    // 0x19baf4: 0x1044020c  beq         $v0, $a0, . + 4 + (0x20C << 2)
label_19baf8:
    if (ctx->pc == 0x19BAF8u) {
        ctx->pc = 0x19BAFCu;
        goto label_19bafc;
    }
    ctx->pc = 0x19BAF4u;
    {
        const bool branch_taken_0x19baf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x19baf4) {
            ctx->pc = 0x19C328u;
            goto label_19c328;
        }
    }
    ctx->pc = 0x19BAFCu;
label_19bafc:
    // 0x19bafc: 0x1043020a  beq         $v0, $v1, . + 4 + (0x20A << 2)
label_19bb00:
    if (ctx->pc == 0x19BB00u) {
        ctx->pc = 0x19BB04u;
        goto label_19bb04;
    }
    ctx->pc = 0x19BAFCu;
    {
        const bool branch_taken_0x19bafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19bafc) {
            ctx->pc = 0x19C328u;
            goto label_19c328;
        }
    }
    ctx->pc = 0x19BB04u;
label_19bb04:
    // 0x19bb04: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19bb08:
    // 0x19bb08: 0x104301eb  beq         $v0, $v1, . + 4 + (0x1EB << 2)
label_19bb0c:
    if (ctx->pc == 0x19BB0Cu) {
        ctx->pc = 0x19BB10u;
        goto label_19bb10;
    }
    ctx->pc = 0x19BB08u;
    {
        const bool branch_taken_0x19bb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19bb08) {
            ctx->pc = 0x19C2B8u;
            goto label_19c2b8;
        }
    }
    ctx->pc = 0x19BB10u;
label_19bb10:
    // 0x19bb10: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x19bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19bb14:
    // 0x19bb14: 0x104301df  beq         $v0, $v1, . + 4 + (0x1DF << 2)
label_19bb18:
    if (ctx->pc == 0x19BB18u) {
        ctx->pc = 0x19BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB14u;
        // 0x19bb18: 0x26240ac0  addiu       $a0, $s1, 0xAC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BB1Cu;
        goto label_19bb1c;
    }
    ctx->pc = 0x19BB14u;
    {
        const bool branch_taken_0x19bb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB14u;
        // 0x19bb18: 0x26240ac0  addiu       $a0, $s1, 0xAC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb14) {
            ctx->pc = 0x19C294u;
            goto label_19c294;
        }
    }
    ctx->pc = 0x19BB1Cu;
label_19bb1c:
    // 0x19bb1c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19bb20:
    // 0x19bb20: 0x104301a8  beq         $v0, $v1, . + 4 + (0x1A8 << 2)
label_19bb24:
    if (ctx->pc == 0x19BB24u) {
        ctx->pc = 0x19BB28u;
        goto label_19bb28;
    }
    ctx->pc = 0x19BB20u;
    {
        const bool branch_taken_0x19bb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19bb20) {
            ctx->pc = 0x19C1C4u;
            goto label_19c1c4;
        }
    }
    ctx->pc = 0x19BB28u;
label_19bb28:
    // 0x19bb28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19bb2c:
    // 0x19bb2c: 0x1043016f  beq         $v0, $v1, . + 4 + (0x16F << 2)
label_19bb30:
    if (ctx->pc == 0x19BB30u) {
        ctx->pc = 0x19BB34u;
        goto label_19bb34;
    }
    ctx->pc = 0x19BB2Cu;
    {
        const bool branch_taken_0x19bb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19bb2c) {
            ctx->pc = 0x19C0ECu;
            goto label_19c0ec;
        }
    }
    ctx->pc = 0x19BB34u;
label_19bb34:
    // 0x19bb34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19bb38:
    // 0x19bb38: 0x10430150  beq         $v0, $v1, . + 4 + (0x150 << 2)
label_19bb3c:
    if (ctx->pc == 0x19BB3Cu) {
        ctx->pc = 0x19BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB38u;
        // 0x19bb3c: 0x26240940  addiu       $a0, $s1, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BB40u;
        goto label_19bb40;
    }
    ctx->pc = 0x19BB38u;
    {
        const bool branch_taken_0x19bb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB38u;
        // 0x19bb3c: 0x26240940  addiu       $a0, $s1, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb38) {
            ctx->pc = 0x19C07Cu;
            goto label_19c07c;
        }
    }
    ctx->pc = 0x19BB40u;
label_19bb40:
    // 0x19bb40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19bb44:
    // 0x19bb44: 0x104300d4  beq         $v0, $v1, . + 4 + (0xD4 << 2)
label_19bb48:
    if (ctx->pc == 0x19BB48u) {
        ctx->pc = 0x19BB4Cu;
        goto label_19bb4c;
    }
    ctx->pc = 0x19BB44u;
    {
        const bool branch_taken_0x19bb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19bb44) {
            ctx->pc = 0x19BE98u;
            goto label_19be98;
        }
    }
    ctx->pc = 0x19BB4Cu;
label_19bb4c:
    // 0x19bb4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19bb50:
    if (ctx->pc == 0x19BB50u) {
        ctx->pc = 0x19BB54u;
        goto label_19bb54;
    }
    ctx->pc = 0x19BB4Cu;
    {
        const bool branch_taken_0x19bb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bb4c) {
            ctx->pc = 0x19BB5Cu;
            goto label_19bb5c;
        }
    }
    ctx->pc = 0x19BB54u;
label_19bb54:
    // 0x19bb54: 0x100001f4  b           . + 4 + (0x1F4 << 2)
label_19bb58:
    if (ctx->pc == 0x19BB58u) {
        ctx->pc = 0x19BB5Cu;
        goto label_19bb5c;
    }
    ctx->pc = 0x19BB54u;
    {
        const bool branch_taken_0x19bb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bb54) {
            ctx->pc = 0x19C328u;
            goto label_19c328;
        }
    }
    ctx->pc = 0x19BB5Cu;
label_19bb5c:
    // 0x19bb5c: 0xc067f08  jal         func_19FC20
label_19bb60:
    if (ctx->pc == 0x19BB60u) {
        ctx->pc = 0x19BB64u;
        goto label_19bb64;
    }
    ctx->pc = 0x19BB5Cu;
    SET_GPR_U32(ctx, 31, 0x19BB64u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x19BB5Cu, 0x19BB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB64u;
label_19bb64:
    // 0x19bb64: 0xae220904  sw          $v0, 0x904($s1)
    ctx->pc = 0x19bb64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2308), GPR_U32(ctx, 2));
label_19bb68:
    // 0x19bb68: 0x8e240904  lw          $a0, 0x904($s1)
    ctx->pc = 0x19bb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2308)));
label_19bb6c:
    // 0x19bb6c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_19bb70:
    if (ctx->pc == 0x19BB70u) {
        ctx->pc = 0x19BB74u;
        goto label_19bb74;
    }
    ctx->pc = 0x19BB6Cu;
    {
        const bool branch_taken_0x19bb6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bb6c) {
            ctx->pc = 0x19BB90u;
            goto label_19bb90;
        }
    }
    ctx->pc = 0x19BB74u;
label_19bb74:
    // 0x19bb74: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19bb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19bb78:
    // 0x19bb78: 0xc067f68  jal         func_19FDA0
label_19bb7c:
    if (ctx->pc == 0x19BB7Cu) {
        ctx->pc = 0x19BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB78u;
        // 0x19bb7c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BB80u;
        goto label_19bb80;
    }
    ctx->pc = 0x19BB78u;
    SET_GPR_U32(ctx, 31, 0x19BB80u);
    ctx->pc = 0x19BB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB78u;
    // 0x19bb7c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x19BB78u, 0x19BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB80u;
label_19bb80:
    // 0x19bb80: 0x8e240904  lw          $a0, 0x904($s1)
    ctx->pc = 0x19bb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2308)));
label_19bb84:
    // 0x19bb84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19bb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19bb88:
    // 0x19bb88: 0xc067f68  jal         func_19FDA0
label_19bb8c:
    if (ctx->pc == 0x19BB8Cu) {
        ctx->pc = 0x19BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB88u;
        // 0x19bb8c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BB90u;
        goto label_19bb90;
    }
    ctx->pc = 0x19BB88u;
    SET_GPR_U32(ctx, 31, 0x19BB90u);
    ctx->pc = 0x19BB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB88u;
    // 0x19bb8c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x19BB88u, 0x19BB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB90u;
label_19bb90:
    // 0x19bb90: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x19bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_19bb94:
    // 0x19bb94: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x19bb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_19bb98:
    // 0x19bb98: 0xc06bd9c  jal         func_1AF670
label_19bb9c:
    if (ctx->pc == 0x19BB9Cu) {
        ctx->pc = 0x19BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB98u;
        // 0x19bb9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BBA0u;
        goto label_19bba0;
    }
    ctx->pc = 0x19BB98u;
    SET_GPR_U32(ctx, 31, 0x19BBA0u);
    ctx->pc = 0x19BB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB98u;
    // 0x19bb9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF670u, 0x19BB98u, 0x19BBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BBA0u;
label_19bba0:
    // 0x19bba0: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x19bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_19bba4:
    // 0x19bba4: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x19bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_19bba8:
    // 0x19bba8: 0x8c4202f4  lw          $v0, 0x2F4($v0)
    ctx->pc = 0x19bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 756)));
label_19bbac:
    // 0x19bbac: 0xae220bd0  sw          $v0, 0xBD0($s1)
    ctx->pc = 0x19bbacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3024), GPR_U32(ctx, 2));
label_19bbb0:
    // 0x19bbb0: 0x8e240bd0  lw          $a0, 0xBD0($s1)
    ctx->pc = 0x19bbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3024)));
label_19bbb4:
    // 0x19bbb4: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x19bbb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19bbb8:
    // 0x19bbb8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19bbb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19bbbc:
    // 0x19bbbc: 0x320f809  jalr        $t9
label_19bbc0:
    if (ctx->pc == 0x19BBC0u) {
        ctx->pc = 0x19BBC4u;
        goto label_19bbc4;
    }
    ctx->pc = 0x19BBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19BBC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BBBCu, 0x19BBC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19BBC4u;
label_19bbc4:
    // 0x19bbc4: 0x8e220bd0  lw          $v0, 0xBD0($s1)
    ctx->pc = 0x19bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3024)));
label_19bbc8:
    // 0x19bbc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19bbcc:
    // 0x19bbcc: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x19bbccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_19bbd0:
    // 0x19bbd0: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19bbd4:
    // 0x19bbd4: 0xa04328f5  sb          $v1, 0x28F5($v0)
    ctx->pc = 0x19bbd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10485), (uint8_t)GPR_U32(ctx, 3));
label_19bbd8:
    // 0x19bbd8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19bbdc:
    // 0x19bbdc: 0xa043002d  sb          $v1, 0x2D($v0)
    ctx->pc = 0x19bbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 45), (uint8_t)GPR_U32(ctx, 3));
label_19bbe0:
    // 0x19bbe0: 0xc046458  jal         func_119160
label_19bbe4:
    if (ctx->pc == 0x19BBE4u) {
        ctx->pc = 0x19BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BBE0u;
        // 0x19bbe4: 0x8f8480e0  lw          $a0, -0x7F20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BBE8u;
        goto label_19bbe8;
    }
    ctx->pc = 0x19BBE0u;
    SET_GPR_U32(ctx, 31, 0x19BBE8u);
    ctx->pc = 0x19BBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BBE0u;
    // 0x19bbe4: 0x8f8480e0  lw          $a0, -0x7F20($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x19BBE0u, 0x19BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BBE8u;
label_19bbe8:
    // 0x19bbe8: 0xae220908  sw          $v0, 0x908($s1)
    ctx->pc = 0x19bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2312), GPR_U32(ctx, 2));
label_19bbec:
    // 0x19bbec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19bbecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19bbf0:
    // 0x19bbf0: 0xae200aa4  sw          $zero, 0xAA4($s1)
    ctx->pc = 0x19bbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2724), GPR_U32(ctx, 0));
label_19bbf4:
    // 0x19bbf4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x19bbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
label_19bbf8:
    // 0x19bbf8: 0xa2200aac  sb          $zero, 0xAAC($s1)
    ctx->pc = 0x19bbf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2732), (uint8_t)GPR_U32(ctx, 0));
label_19bbfc:
    // 0x19bbfc: 0x24a50208  addiu       $a1, $a1, 0x208
    ctx->pc = 0x19bbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 520));
label_19bc00:
    // 0x19bc00: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x19bc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_19bc04:
    // 0x19bc04: 0x24c60210  addiu       $a2, $a2, 0x210
    ctx->pc = 0x19bc04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 528));
label_19bc08:
    // 0x19bc08: 0xc06cf34  jal         func_1B3CD0
label_19bc0c:
    if (ctx->pc == 0x19BC0Cu) {
        ctx->pc = 0x19BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC08u;
        // 0x19bc0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC10u;
        goto label_19bc10;
    }
    ctx->pc = 0x19BC08u;
    SET_GPR_U32(ctx, 31, 0x19BC10u);
    ctx->pc = 0x19BC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC08u;
    // 0x19bc0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x19BC08u, 0x19BC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC10u;
label_19bc10:
    // 0x19bc10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19bc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19bc14:
    // 0x19bc14: 0xc0699f0  jal         func_1A67C0
label_19bc18:
    if (ctx->pc == 0x19BC18u) {
        ctx->pc = 0x19BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC14u;
        // 0x19bc18: 0x26240aa0  addiu       $a0, $s1, 0xAA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC1Cu;
        goto label_19bc1c;
    }
    ctx->pc = 0x19BC14u;
    SET_GPR_U32(ctx, 31, 0x19BC1Cu);
    ctx->pc = 0x19BC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC14u;
    // 0x19bc18: 0x26240aa0  addiu       $a0, $s1, 0xAA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A67C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A67C0u, 0x19BC14u, 0x19BC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC1Cu;
label_19bc1c:
    // 0x19bc1c: 0xa2200938  sb          $zero, 0x938($s1)
    ctx->pc = 0x19bc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2360), (uint8_t)GPR_U32(ctx, 0));
label_19bc20:
    // 0x19bc20: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19bc20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19bc24:
    // 0x19bc24: 0xae200928  sw          $zero, 0x928($s1)
    ctx->pc = 0x19bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2344), GPR_U32(ctx, 0));
label_19bc28:
    // 0x19bc28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19bc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19bc2c:
    // 0x19bc2c: 0x24a50228  addiu       $a1, $a1, 0x228
    ctx->pc = 0x19bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 552));
label_19bc30:
    // 0x19bc30: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x19bc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19bc34:
    // 0x19bc34: 0xc064a88  jal         func_192A20
label_19bc38:
    if (ctx->pc == 0x19BC38u) {
        ctx->pc = 0x19BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC34u;
        // 0x19bc38: 0xae20090c  sw          $zero, 0x90C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC3Cu;
        goto label_19bc3c;
    }
    ctx->pc = 0x19BC34u;
    SET_GPR_U32(ctx, 31, 0x19BC3Cu);
    ctx->pc = 0x19BC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC34u;
    // 0x19bc38: 0xae20090c  sw          $zero, 0x90C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2316), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x19BC34u, 0x19BC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC3Cu;
label_19bc3c:
    // 0x19bc3c: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x19bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_19bc40:
    // 0x19bc40: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x19bc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_19bc44:
    // 0x19bc44: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x19bc44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_19bc48:
    // 0x19bc48: 0xc057040  jal         func_15C100
label_19bc4c:
    if (ctx->pc == 0x19BC4Cu) {
        ctx->pc = 0x19BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC48u;
        // 0x19bc4c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC50u;
        goto label_19bc50;
    }
    ctx->pc = 0x19BC48u;
    SET_GPR_U32(ctx, 31, 0x19BC50u);
    ctx->pc = 0x19BC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC48u;
    // 0x19bc4c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19BC48u, 0x19BC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC50u;
label_19bc50:
    // 0x19bc50: 0xae2208e8  sw          $v0, 0x8E8($s1)
    ctx->pc = 0x19bc50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2280), GPR_U32(ctx, 2));
label_19bc54:
    // 0x19bc54: 0xae20069c  sw          $zero, 0x69C($s1)
    ctx->pc = 0x19bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1692), GPR_U32(ctx, 0));
label_19bc58:
    // 0x19bc58: 0xae200760  sw          $zero, 0x760($s1)
    ctx->pc = 0x19bc58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1888), GPR_U32(ctx, 0));
label_19bc5c:
    // 0x19bc5c: 0xae200824  sw          $zero, 0x824($s1)
    ctx->pc = 0x19bc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2084), GPR_U32(ctx, 0));
label_19bc60:
    // 0x19bc60: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x19bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_19bc64:
    // 0x19bc64: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x19bc64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_19bc68:
    // 0x19bc68: 0xae20093c  sw          $zero, 0x93C($s1)
    ctx->pc = 0x19bc68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2364), GPR_U32(ctx, 0));
label_19bc6c:
    // 0x19bc6c: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x19bc6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_19bc70:
    // 0x19bc70: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
label_19bc74:
    if (ctx->pc == 0x19BC74u) {
        ctx->pc = 0x19BC78u;
        goto label_19bc78;
    }
    ctx->pc = 0x19BC70u;
    {
        const bool branch_taken_0x19bc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bc70) {
            ctx->pc = 0x19BDE4u;
            goto label_19bde4;
        }
    }
    ctx->pc = 0x19BC78u;
label_19bc78:
    // 0x19bc78: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x19bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_19bc7c:
    // 0x19bc7c: 0x10620054  beq         $v1, $v0, . + 4 + (0x54 << 2)
label_19bc80:
    if (ctx->pc == 0x19BC80u) {
        ctx->pc = 0x19BC84u;
        goto label_19bc84;
    }
    ctx->pc = 0x19BC7Cu;
    {
        const bool branch_taken_0x19bc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19bc7c) {
            ctx->pc = 0x19BDD0u;
            goto label_19bdd0;
        }
    }
    ctx->pc = 0x19BC84u;
label_19bc84:
    // 0x19bc84: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x19bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_19bc88:
    // 0x19bc88: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
label_19bc8c:
    if (ctx->pc == 0x19BC8Cu) {
        ctx->pc = 0x19BC90u;
        goto label_19bc90;
    }
    ctx->pc = 0x19BC88u;
    {
        const bool branch_taken_0x19bc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19bc88) {
            ctx->pc = 0x19BD80u;
            goto label_19bd80;
        }
    }
    ctx->pc = 0x19BC90u;
label_19bc90:
    // 0x19bc90: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x19bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_19bc94:
    // 0x19bc94: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_19bc98:
    if (ctx->pc == 0x19BC98u) {
        ctx->pc = 0x19BC9Cu;
        goto label_19bc9c;
    }
    ctx->pc = 0x19BC94u;
    {
        const bool branch_taken_0x19bc94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19bc94) {
            ctx->pc = 0x19BD30u;
            goto label_19bd30;
        }
    }
    ctx->pc = 0x19BC9Cu;
label_19bc9c:
    // 0x19bc9c: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x19bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_19bca0:
    // 0x19bca0: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_19bca4:
    if (ctx->pc == 0x19BCA4u) {
        ctx->pc = 0x19BCA8u;
        goto label_19bca8;
    }
    ctx->pc = 0x19BCA0u;
    {
        const bool branch_taken_0x19bca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19bca0) {
            ctx->pc = 0x19BCDCu;
            goto label_19bcdc;
        }
    }
    ctx->pc = 0x19BCA8u;
label_19bca8:
    // 0x19bca8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x19bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_19bcac:
    // 0x19bcac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_19bcb0:
    if (ctx->pc == 0x19BCB0u) {
        ctx->pc = 0x19BCB4u;
        goto label_19bcb4;
    }
    ctx->pc = 0x19BCACu;
    {
        const bool branch_taken_0x19bcac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19bcac) {
            ctx->pc = 0x19BCBCu;
            goto label_19bcbc;
        }
    }
    ctx->pc = 0x19BCB4u;
label_19bcb4:
    // 0x19bcb4: 0x1000004b  b           . + 4 + (0x4B << 2)
label_19bcb8:
    if (ctx->pc == 0x19BCB8u) {
        ctx->pc = 0x19BCBCu;
        goto label_19bcbc;
    }
    ctx->pc = 0x19BCB4u;
    {
        const bool branch_taken_0x19bcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bcb4) {
            ctx->pc = 0x19BDE4u;
            goto label_19bde4;
        }
    }
    ctx->pc = 0x19BCBCu;
label_19bcbc:
    // 0x19bcbc: 0x0  nop
    ctx->pc = 0x19bcbcu;
    // NOP
label_19bcc0:
    // 0x19bcc0: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x19bcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_19bcc4:
    // 0x19bcc4: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x19bcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_19bcc8:
    // 0x19bcc8: 0xc057040  jal         func_15C100
label_19bccc:
    if (ctx->pc == 0x19BCCCu) {
        ctx->pc = 0x19BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCC8u;
        // 0x19bccc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BCD0u;
        goto label_19bcd0;
    }
    ctx->pc = 0x19BCC8u;
    SET_GPR_U32(ctx, 31, 0x19BCD0u);
    ctx->pc = 0x19BCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BCC8u;
    // 0x19bccc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19BCC8u, 0x19BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BCD0u;
label_19bcd0:
    // 0x19bcd0: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x19bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
label_19bcd4:
    // 0x19bcd4: 0x10000043  b           . + 4 + (0x43 << 2)
label_19bcd8:
    if (ctx->pc == 0x19BCD8u) {
        ctx->pc = 0x19BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCD4u;
        // 0x19bcd8: 0xae320678  sw          $s2, 0x678($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BCDCu;
        goto label_19bcdc;
    }
    ctx->pc = 0x19BCD4u;
    {
        const bool branch_taken_0x19bcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCD4u;
        // 0x19bcd8: 0xae320678  sw          $s2, 0x678($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bcd4) {
            ctx->pc = 0x19BDE4u;
            goto label_19bde4;
        }
    }
    ctx->pc = 0x19BCDCu;
label_19bcdc:
    // 0x19bcdc: 0x0  nop
    ctx->pc = 0x19bcdcu;
    // NOP
label_19bce0:
    // 0x19bce0: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x19bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_19bce4:
    // 0x19bce4: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x19bce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_19bce8:
    // 0x19bce8: 0xc057040  jal         func_15C100
label_19bcec:
    if (ctx->pc == 0x19BCECu) {
        ctx->pc = 0x19BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCE8u;
        // 0x19bcec: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BCF0u;
        goto label_19bcf0;
    }
    ctx->pc = 0x19BCE8u;
    SET_GPR_U32(ctx, 31, 0x19BCF0u);
    ctx->pc = 0x19BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BCE8u;
    // 0x19bcec: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19BCE8u, 0x19BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BCF0u;
label_19bcf0:
    // 0x19bcf0: 0x8e24069c  lw          $a0, 0x69C($s1)
    ctx->pc = 0x19bcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
label_19bcf4:
    // 0x19bcf4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x19bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_19bcf8:
    // 0x19bcf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19bcfc:
    // 0x19bcfc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19bd00:
    // 0x19bd00: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x19bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19bd04:
    // 0x19bd04: 0xac6206a0  sw          $v0, 0x6A0($v1)
    ctx->pc = 0x19bd04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1696), GPR_U32(ctx, 2));
label_19bd08:
    // 0x19bd08: 0x8e23069c  lw          $v1, 0x69C($s1)
    ctx->pc = 0x19bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
label_19bd0c:
    // 0x19bd0c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x19bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_19bd10:
    // 0x19bd10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19bd14:
    // 0x19bd14: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_19bd18:
    // 0x19bd18: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19bd1c:
    // 0x19bd1c: 0xac5206a8  sw          $s2, 0x6A8($v0)
    ctx->pc = 0x19bd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1704), GPR_U32(ctx, 18));
label_19bd20:
    // 0x19bd20: 0x8e22069c  lw          $v0, 0x69C($s1)
    ctx->pc = 0x19bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
label_19bd24:
    // 0x19bd24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19bd28:
    // 0x19bd28: 0x1000002e  b           . + 4 + (0x2E << 2)
label_19bd2c:
    if (ctx->pc == 0x19BD2Cu) {
        ctx->pc = 0x19BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD28u;
        // 0x19bd2c: 0xae22069c  sw          $v0, 0x69C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD30u;
        goto label_19bd30;
    }
    ctx->pc = 0x19BD28u;
    {
        const bool branch_taken_0x19bd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD28u;
        // 0x19bd2c: 0xae22069c  sw          $v0, 0x69C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd28) {
            ctx->pc = 0x19BDE4u;
            goto label_19bde4;
        }
    }
    ctx->pc = 0x19BD30u;
label_19bd30:
    // 0x19bd30: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x19bd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_19bd34:
    // 0x19bd34: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x19bd34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_19bd38:
    // 0x19bd38: 0xc057040  jal         func_15C100
label_19bd3c:
    if (ctx->pc == 0x19BD3Cu) {
        ctx->pc = 0x19BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD38u;
        // 0x19bd3c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD40u;
        goto label_19bd40;
    }
    ctx->pc = 0x19BD38u;
    SET_GPR_U32(ctx, 31, 0x19BD40u);
    ctx->pc = 0x19BD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD38u;
    // 0x19bd3c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19BD38u, 0x19BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD40u;
label_19bd40:
    // 0x19bd40: 0x8e240824  lw          $a0, 0x824($s1)
    ctx->pc = 0x19bd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2084)));
label_19bd44:
    // 0x19bd44: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x19bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_19bd48:
    // 0x19bd48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19bd4c:
    // 0x19bd4c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19bd50:
    // 0x19bd50: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x19bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19bd54:
    // 0x19bd54: 0xac620828  sw          $v0, 0x828($v1)
    ctx->pc = 0x19bd54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2088), GPR_U32(ctx, 2));
label_19bd58:
    // 0x19bd58: 0x8e230824  lw          $v1, 0x824($s1)
    ctx->pc = 0x19bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2084)));
label_19bd5c:
    // 0x19bd5c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x19bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_19bd60:
    // 0x19bd60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19bd64:
    // 0x19bd64: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_19bd68:
    // 0x19bd68: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19bd6c:
    // 0x19bd6c: 0xac520830  sw          $s2, 0x830($v0)
    ctx->pc = 0x19bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2096), GPR_U32(ctx, 18));
label_19bd70:
    // 0x19bd70: 0x8e220824  lw          $v0, 0x824($s1)
    ctx->pc = 0x19bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2084)));
label_19bd74:
    // 0x19bd74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19bd78:
    // 0x19bd78: 0x1000001a  b           . + 4 + (0x1A << 2)
label_19bd7c:
    if (ctx->pc == 0x19BD7Cu) {
        ctx->pc = 0x19BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD78u;
        // 0x19bd7c: 0xae220824  sw          $v0, 0x824($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD80u;
        goto label_19bd80;
    }
    ctx->pc = 0x19BD78u;
    {
        const bool branch_taken_0x19bd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD78u;
        // 0x19bd7c: 0xae220824  sw          $v0, 0x824($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd78) {
            ctx->pc = 0x19BDE4u;
            goto label_19bde4;
        }
    }
    ctx->pc = 0x19BD80u;
label_19bd80:
    // 0x19bd80: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x19bd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_19bd84:
    // 0x19bd84: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x19bd84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_19bd88:
    // 0x19bd88: 0xc057040  jal         func_15C100
label_19bd8c:
    if (ctx->pc == 0x19BD8Cu) {
        ctx->pc = 0x19BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD88u;
        // 0x19bd8c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD90u;
        goto label_19bd90;
    }
    ctx->pc = 0x19BD88u;
    SET_GPR_U32(ctx, 31, 0x19BD90u);
    ctx->pc = 0x19BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD88u;
    // 0x19bd8c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19BD88u, 0x19BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD90u;
label_19bd90:
    // 0x19bd90: 0x8e240760  lw          $a0, 0x760($s1)
    ctx->pc = 0x19bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1888)));
label_19bd94:
    // 0x19bd94: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x19bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_19bd98:
    // 0x19bd98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19bd9c:
    // 0x19bd9c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19bd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19bda0:
    // 0x19bda0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x19bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19bda4:
    // 0x19bda4: 0xac620764  sw          $v0, 0x764($v1)
    ctx->pc = 0x19bda4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1892), GPR_U32(ctx, 2));
label_19bda8:
    // 0x19bda8: 0x8e230760  lw          $v1, 0x760($s1)
    ctx->pc = 0x19bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1888)));
label_19bdac:
    // 0x19bdac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x19bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_19bdb0:
    // 0x19bdb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19bdb4:
    // 0x19bdb4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_19bdb8:
    // 0x19bdb8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19bdbc:
    // 0x19bdbc: 0xac52076c  sw          $s2, 0x76C($v0)
    ctx->pc = 0x19bdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1900), GPR_U32(ctx, 18));
label_19bdc0:
    // 0x19bdc0: 0x8e220760  lw          $v0, 0x760($s1)
    ctx->pc = 0x19bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1888)));
label_19bdc4:
    // 0x19bdc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19bdc8:
    // 0x19bdc8: 0x10000006  b           . + 4 + (0x6 << 2)
label_19bdcc:
    if (ctx->pc == 0x19BDCCu) {
        ctx->pc = 0x19BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDC8u;
        // 0x19bdcc: 0xae220760  sw          $v0, 0x760($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BDD0u;
        goto label_19bdd0;
    }
    ctx->pc = 0x19BDC8u;
    {
        const bool branch_taken_0x19bdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDC8u;
        // 0x19bdcc: 0xae220760  sw          $v0, 0x760($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bdc8) {
            ctx->pc = 0x19BDE4u;
            goto label_19bde4;
        }
    }
    ctx->pc = 0x19BDD0u;
label_19bdd0:
    // 0x19bdd0: 0x8e22093c  lw          $v0, 0x93C($s1)
    ctx->pc = 0x19bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2364)));
label_19bdd4:
    // 0x19bdd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_19bdd8:
    if (ctx->pc == 0x19BDD8u) {
        ctx->pc = 0x19BDDCu;
        goto label_19bddc;
    }
    ctx->pc = 0x19BDD4u;
    {
        const bool branch_taken_0x19bdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bdd4) {
            ctx->pc = 0x19BDE4u;
            goto label_19bde4;
        }
    }
    ctx->pc = 0x19BDDCu;
label_19bddc:
    // 0x19bddc: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x19bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_19bde0:
    // 0x19bde0: 0xae22093c  sw          $v0, 0x93C($s1)
    ctx->pc = 0x19bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2364), GPR_U32(ctx, 2));
label_19bde4:
    // 0x19bde4: 0x0  nop
    ctx->pc = 0x19bde4u;
    // NOP
label_19bde8:
    // 0x19bde8: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x19bde8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_19bdec:
    // 0x19bdec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19bdf0:
    // 0x19bdf0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19bdf4:
    // 0x19bdf4: 0x1062ff9d  beq         $v1, $v0, . + 4 + (-0x63 << 2)
label_19bdf8:
    if (ctx->pc == 0x19BDF8u) {
        ctx->pc = 0x19BDFCu;
        goto label_19bdfc;
    }
    ctx->pc = 0x19BDF4u;
    {
        const bool branch_taken_0x19bdf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19bdf4) {
            ctx->pc = 0x19BC6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bc6c;
        }
    }
    ctx->pc = 0x19BDFCu;
label_19bdfc:
    // 0x19bdfc: 0xc058018  jal         func_160060
label_19be00:
    if (ctx->pc == 0x19BE00u) {
        ctx->pc = 0x19BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDFCu;
        // 0x19be00: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE04u;
        goto label_19be04;
    }
    ctx->pc = 0x19BDFCu;
    SET_GPR_U32(ctx, 31, 0x19BE04u);
    ctx->pc = 0x19BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BDFCu;
    // 0x19be00: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x19BDFCu, 0x19BE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE04u;
label_19be04:
    // 0x19be04: 0xae200674  sw          $zero, 0x674($s1)
    ctx->pc = 0x19be04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
label_19be08:
    // 0x19be08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19be08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19be0c:
    // 0x19be0c: 0xae2008ec  sw          $zero, 0x8EC($s1)
    ctx->pc = 0x19be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2284), GPR_U32(ctx, 0));
label_19be10:
    // 0x19be10: 0x10000008  b           . + 4 + (0x8 << 2)
label_19be14:
    if (ctx->pc == 0x19BE14u) {
        ctx->pc = 0x19BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE10u;
        // 0x19be14: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE18u;
        goto label_19be18;
    }
    ctx->pc = 0x19BE10u;
    {
        const bool branch_taken_0x19be10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE10u;
        // 0x19be14: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be10) {
            ctx->pc = 0x19BE34u;
            goto label_19be34;
        }
    }
    ctx->pc = 0x19BE18u;
label_19be18:
    // 0x19be18: 0x233a021  addu        $s4, $s1, $s3
    ctx->pc = 0x19be18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_19be1c:
    // 0x19be1c: 0x8e850828  lw          $a1, 0x828($s4)
    ctx->pc = 0x19be1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2088)));
label_19be20:
    // 0x19be20: 0xc064c0c  jal         func_193030
label_19be24:
    if (ctx->pc == 0x19BE24u) {
        ctx->pc = 0x19BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE20u;
        // 0x19be24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE28u;
        goto label_19be28;
    }
    ctx->pc = 0x19BE20u;
    SET_GPR_U32(ctx, 31, 0x19BE28u);
    ctx->pc = 0x19BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BE20u;
    // 0x19be24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193030u, 0x19BE20u, 0x19BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE28u;
label_19be28:
    // 0x19be28: 0xae80082c  sw          $zero, 0x82C($s4)
    ctx->pc = 0x19be28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2092), GPR_U32(ctx, 0));
label_19be2c:
    // 0x19be2c: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x19be2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_19be30:
    // 0x19be30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19be30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19be34:
    // 0x19be34: 0x0  nop
    ctx->pc = 0x19be34u;
    // NOP
label_19be38:
    // 0x19be38: 0x8e220824  lw          $v0, 0x824($s1)
    ctx->pc = 0x19be38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2084)));
label_19be3c:
    // 0x19be3c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19be3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19be40:
    // 0x19be40: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_19be44:
    if (ctx->pc == 0x19BE44u) {
        ctx->pc = 0x19BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE40u;
        // 0x19be44: 0x233a021  addu        $s4, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE48u;
        goto label_19be48;
    }
    ctx->pc = 0x19BE40u;
    {
        const bool branch_taken_0x19be40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE40u;
        // 0x19be44: 0x233a021  addu        $s4, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be40) {
            ctx->pc = 0x19BE1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19be1c;
        }
    }
    ctx->pc = 0x19BE48u;
label_19be48:
    // 0x19be48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19be48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19be4c:
    // 0x19be4c: 0x10000008  b           . + 4 + (0x8 << 2)
label_19be50:
    if (ctx->pc == 0x19BE50u) {
        ctx->pc = 0x19BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE4Cu;
        // 0x19be50: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE54u;
        goto label_19be54;
    }
    ctx->pc = 0x19BE4Cu;
    {
        const bool branch_taken_0x19be4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE4Cu;
        // 0x19be50: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be4c) {
            ctx->pc = 0x19BE70u;
            goto label_19be70;
        }
    }
    ctx->pc = 0x19BE54u;
label_19be54:
    // 0x19be54: 0x233a021  addu        $s4, $s1, $s3
    ctx->pc = 0x19be54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_19be58:
    // 0x19be58: 0x8e850764  lw          $a1, 0x764($s4)
    ctx->pc = 0x19be58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1892)));
label_19be5c:
    // 0x19be5c: 0xc064c0c  jal         func_193030
label_19be60:
    if (ctx->pc == 0x19BE60u) {
        ctx->pc = 0x19BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE5Cu;
        // 0x19be60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE64u;
        goto label_19be64;
    }
    ctx->pc = 0x19BE5Cu;
    SET_GPR_U32(ctx, 31, 0x19BE64u);
    ctx->pc = 0x19BE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BE5Cu;
    // 0x19be60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193030u, 0x19BE5Cu, 0x19BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE64u;
label_19be64:
    // 0x19be64: 0xae800768  sw          $zero, 0x768($s4)
    ctx->pc = 0x19be64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1896), GPR_U32(ctx, 0));
label_19be68:
    // 0x19be68: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x19be68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_19be6c:
    // 0x19be6c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19be6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19be70:
    // 0x19be70: 0x8e220760  lw          $v0, 0x760($s1)
    ctx->pc = 0x19be70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1888)));
label_19be74:
    // 0x19be74: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19be74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19be78:
    // 0x19be78: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_19be7c:
    if (ctx->pc == 0x19BE7Cu) {
        ctx->pc = 0x19BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE78u;
        // 0x19be7c: 0x233a021  addu        $s4, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE80u;
        goto label_19be80;
    }
    ctx->pc = 0x19BE78u;
    {
        const bool branch_taken_0x19be78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE78u;
        // 0x19be7c: 0x233a021  addu        $s4, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be78) {
            ctx->pc = 0x19BE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19be58;
        }
    }
    ctx->pc = 0x19BE80u;
label_19be80:
    // 0x19be80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19be80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19be84:
    // 0x19be84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19be84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19be88:
    // 0x19be88: 0xa2220938  sb          $v0, 0x938($s1)
    ctx->pc = 0x19be88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2360), (uint8_t)GPR_U32(ctx, 2));
label_19be8c:
    // 0x19be8c: 0xae200910  sw          $zero, 0x910($s1)
    ctx->pc = 0x19be8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2320), GPR_U32(ctx, 0));
label_19be90:
    // 0x19be90: 0xc063e14  jal         func_18F850
label_19be94:
    if (ctx->pc == 0x19BE94u) {
        ctx->pc = 0x19BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE90u;
        // 0x19be94: 0xae200914  sw          $zero, 0x914($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE98u;
        goto label_19be98;
    }
    ctx->pc = 0x19BE90u;
    SET_GPR_U32(ctx, 31, 0x19BE98u);
    ctx->pc = 0x19BE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BE90u;
    // 0x19be94: 0xae200914  sw          $zero, 0x914($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2324), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19BE90u, 0x19BE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE98u;
label_19be98:
    // 0x19be98: 0xae200690  sw          $zero, 0x690($s1)
    ctx->pc = 0x19be98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1680), GPR_U32(ctx, 0));
label_19be9c:
    // 0x19be9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19bea0:
    // 0x19bea0: 0x8e240928  lw          $a0, 0x928($s1)
    ctx->pc = 0x19bea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
label_19bea4:
    // 0x19bea4: 0x1082003c  beq         $a0, $v0, . + 4 + (0x3C << 2)
label_19bea8:
    if (ctx->pc == 0x19BEA8u) {
        ctx->pc = 0x19BEACu;
        goto label_19beac;
    }
    ctx->pc = 0x19BEA4u;
    {
        const bool branch_taken_0x19bea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x19bea4) {
            ctx->pc = 0x19BF98u;
            goto label_19bf98;
        }
    }
    ctx->pc = 0x19BEACu;
label_19beac:
    // 0x19beac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19beacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19beb0:
    // 0x19beb0: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
label_19beb4:
    if (ctx->pc == 0x19BEB4u) {
        ctx->pc = 0x19BEB8u;
        goto label_19beb8;
    }
    ctx->pc = 0x19BEB0u;
    {
        const bool branch_taken_0x19beb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19beb0) {
            ctx->pc = 0x19BF58u;
            goto label_19bf58;
        }
    }
    ctx->pc = 0x19BEB8u;
label_19beb8:
    // 0x19beb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19bebc:
    // 0x19bebc: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
label_19bec0:
    if (ctx->pc == 0x19BEC0u) {
        ctx->pc = 0x19BEC4u;
        goto label_19bec4;
    }
    ctx->pc = 0x19BEBCu;
    {
        const bool branch_taken_0x19bebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x19bebc) {
            ctx->pc = 0x19BF10u;
            goto label_19bf10;
        }
    }
    ctx->pc = 0x19BEC4u;
label_19bec4:
    // 0x19bec4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_19bec8:
    if (ctx->pc == 0x19BEC8u) {
        ctx->pc = 0x19BECCu;
        goto label_19becc;
    }
    ctx->pc = 0x19BEC4u;
    {
        const bool branch_taken_0x19bec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bec4) {
            ctx->pc = 0x19BED4u;
            goto label_19bed4;
        }
    }
    ctx->pc = 0x19BECCu;
label_19becc:
    // 0x19becc: 0x10000033  b           . + 4 + (0x33 << 2)
label_19bed0:
    if (ctx->pc == 0x19BED0u) {
        ctx->pc = 0x19BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BECCu;
        // 0x19bed0: 0xae200930  sw          $zero, 0x930($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BED4u;
        goto label_19bed4;
    }
    ctx->pc = 0x19BECCu;
    {
        const bool branch_taken_0x19becc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BECCu;
        // 0x19bed0: 0xae200930  sw          $zero, 0x930($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19becc) {
            ctx->pc = 0x19BF9Cu;
            goto label_19bf9c;
        }
    }
    ctx->pc = 0x19BED4u;
label_19bed4:
    // 0x19bed4: 0xae220924  sw          $v0, 0x924($s1)
    ctx->pc = 0x19bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2340), GPR_U32(ctx, 2));
label_19bed8:
    // 0x19bed8: 0x26240aa0  addiu       $a0, $s1, 0xAA0
    ctx->pc = 0x19bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2720));
label_19bedc:
    // 0x19bedc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x19bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_19bee0:
    // 0x19bee0: 0xae220918  sw          $v0, 0x918($s1)
    ctx->pc = 0x19bee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2328), GPR_U32(ctx, 2));
label_19bee4:
    // 0x19bee4: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19bee8:
    // 0x19bee8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x19bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_19beec:
    // 0x19beec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19beecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19bef0:
    // 0x19bef0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19bef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19bef4:
    // 0x19bef4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x19bef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_19bef8:
    // 0x19bef8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19bef8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19befc:
    // 0x19befc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19befcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_19bf00:
    // 0x19bf00: 0xc0699e0  jal         func_1A6780
label_19bf04:
    if (ctx->pc == 0x19BF04u) {
        ctx->pc = 0x19BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF00u;
        // 0x19bf04: 0xae22092c  sw          $v0, 0x92C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BF08u;
        goto label_19bf08;
    }
    ctx->pc = 0x19BF00u;
    SET_GPR_U32(ctx, 31, 0x19BF08u);
    ctx->pc = 0x19BF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BF00u;
    // 0x19bf04: 0xae22092c  sw          $v0, 0x92C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2348), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6780u, 0x19BF00u, 0x19BF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF08u;
label_19bf08:
    // 0x19bf08: 0x10000023  b           . + 4 + (0x23 << 2)
label_19bf0c:
    if (ctx->pc == 0x19BF0Cu) {
        ctx->pc = 0x19BF10u;
        goto label_19bf10;
    }
    ctx->pc = 0x19BF08u;
    {
        const bool branch_taken_0x19bf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bf08) {
            ctx->pc = 0x19BF98u;
            goto label_19bf98;
        }
    }
    ctx->pc = 0x19BF10u;
label_19bf10:
    // 0x19bf10: 0xae230924  sw          $v1, 0x924($s1)
    ctx->pc = 0x19bf10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2340), GPR_U32(ctx, 3));
label_19bf14:
    // 0x19bf14: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x19bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_19bf18:
    // 0x19bf18: 0xae220918  sw          $v0, 0x918($s1)
    ctx->pc = 0x19bf18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2328), GPR_U32(ctx, 2));
label_19bf1c:
    // 0x19bf1c: 0x26240aa0  addiu       $a0, $s1, 0xAA0
    ctx->pc = 0x19bf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2720));
label_19bf20:
    // 0x19bf20: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19bf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19bf24:
    // 0x19bf24: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x19bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_19bf28:
    // 0x19bf28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19bf28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19bf2c:
    // 0x19bf2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19bf2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19bf30:
    // 0x19bf30: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x19bf30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_19bf34:
    // 0x19bf34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19bf34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19bf38:
    // 0x19bf38: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19bf38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_19bf3c:
    // 0x19bf3c: 0x0  nop
    ctx->pc = 0x19bf3cu;
    // NOP
label_19bf40:
    // 0x19bf40: 0xae22092c  sw          $v0, 0x92C($s1)
    ctx->pc = 0x19bf40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2348), GPR_U32(ctx, 2));
label_19bf44:
    // 0x19bf44: 0xae230aa4  sw          $v1, 0xAA4($s1)
    ctx->pc = 0x19bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2724), GPR_U32(ctx, 3));
label_19bf48:
    // 0x19bf48: 0xc0699e0  jal         func_1A6780
label_19bf4c:
    if (ctx->pc == 0x19BF4Cu) {
        ctx->pc = 0x19BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF48u;
        // 0x19bf4c: 0xa2200aac  sb          $zero, 0xAAC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2732), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BF50u;
        goto label_19bf50;
    }
    ctx->pc = 0x19BF48u;
    SET_GPR_U32(ctx, 31, 0x19BF50u);
    ctx->pc = 0x19BF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BF48u;
    // 0x19bf4c: 0xa2200aac  sb          $zero, 0xAAC($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2732), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6780u, 0x19BF48u, 0x19BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF50u;
label_19bf50:
    // 0x19bf50: 0x10000011  b           . + 4 + (0x11 << 2)
label_19bf54:
    if (ctx->pc == 0x19BF54u) {
        ctx->pc = 0x19BF58u;
        goto label_19bf58;
    }
    ctx->pc = 0x19BF50u;
    {
        const bool branch_taken_0x19bf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bf50) {
            ctx->pc = 0x19BF98u;
            goto label_19bf98;
        }
    }
    ctx->pc = 0x19BF58u;
label_19bf58:
    // 0x19bf58: 0xae220924  sw          $v0, 0x924($s1)
    ctx->pc = 0x19bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2340), GPR_U32(ctx, 2));
label_19bf5c:
    // 0x19bf5c: 0x26240aa0  addiu       $a0, $s1, 0xAA0
    ctx->pc = 0x19bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2720));
label_19bf60:
    // 0x19bf60: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x19bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_19bf64:
    // 0x19bf64: 0xae220918  sw          $v0, 0x918($s1)
    ctx->pc = 0x19bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2328), GPR_U32(ctx, 2));
label_19bf68:
    // 0x19bf68: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19bf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19bf6c:
    // 0x19bf6c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x19bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_19bf70:
    // 0x19bf70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19bf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19bf74:
    // 0x19bf74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19bf74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19bf78:
    // 0x19bf78: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x19bf78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_19bf7c:
    // 0x19bf7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19bf7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19bf80:
    // 0x19bf80: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19bf80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_19bf84:
    // 0x19bf84: 0x0  nop
    ctx->pc = 0x19bf84u;
    // NOP
label_19bf88:
    // 0x19bf88: 0xae22092c  sw          $v0, 0x92C($s1)
    ctx->pc = 0x19bf88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2348), GPR_U32(ctx, 2));
label_19bf8c:
    // 0x19bf8c: 0xae230aa4  sw          $v1, 0xAA4($s1)
    ctx->pc = 0x19bf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2724), GPR_U32(ctx, 3));
label_19bf90:
    // 0x19bf90: 0xc0699e0  jal         func_1A6780
label_19bf94:
    if (ctx->pc == 0x19BF94u) {
        ctx->pc = 0x19BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF90u;
        // 0x19bf94: 0xa2200aac  sb          $zero, 0xAAC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2732), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BF98u;
        goto label_19bf98;
    }
    ctx->pc = 0x19BF90u;
    SET_GPR_U32(ctx, 31, 0x19BF98u);
    ctx->pc = 0x19BF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BF90u;
    // 0x19bf94: 0xa2200aac  sb          $zero, 0xAAC($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2732), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6780u, 0x19BF90u, 0x19BF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF98u;
label_19bf98:
    // 0x19bf98: 0xae200930  sw          $zero, 0x930($s1)
    ctx->pc = 0x19bf98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2352), GPR_U32(ctx, 0));
label_19bf9c:
    // 0x19bf9c: 0x8e220928  lw          $v0, 0x928($s1)
    ctx->pc = 0x19bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
label_19bfa0:
    // 0x19bfa0: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x19bfa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_19bfa4:
    // 0x19bfa4: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
label_19bfa8:
    if (ctx->pc == 0x19BFA8u) {
        ctx->pc = 0x19BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFA4u;
        // 0x19bfa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BFACu;
        goto label_19bfac;
    }
    ctx->pc = 0x19BFA4u;
    {
        const bool branch_taken_0x19bfa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFA4u;
        // 0x19bfa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bfa4) {
            ctx->pc = 0x19C068u;
            goto label_19c068;
        }
    }
    ctx->pc = 0x19BFACu;
label_19bfac:
    // 0x19bfac: 0xae200a90  sw          $zero, 0xA90($s1)
    ctx->pc = 0x19bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 0));
label_19bfb0:
    // 0x19bfb0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19bfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19bfb4:
    // 0x19bfb4: 0xae200a88  sw          $zero, 0xA88($s1)
    ctx->pc = 0x19bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2696), GPR_U32(ctx, 0));
label_19bfb8:
    // 0x19bfb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19bfbc:
    // 0x19bfbc: 0xae200a84  sw          $zero, 0xA84($s1)
    ctx->pc = 0x19bfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2692), GPR_U32(ctx, 0));
label_19bfc0:
    // 0x19bfc0: 0x24a50208  addiu       $a1, $a1, 0x208
    ctx->pc = 0x19bfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 520));
label_19bfc4:
    // 0x19bfc4: 0xae220a8c  sw          $v0, 0xA8C($s1)
    ctx->pc = 0x19bfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2700), GPR_U32(ctx, 2));
label_19bfc8:
    // 0x19bfc8: 0xa2200a98  sb          $zero, 0xA98($s1)
    ctx->pc = 0x19bfc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2712), (uint8_t)GPR_U32(ctx, 0));
label_19bfcc:
    // 0x19bfcc: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x19bfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_19bfd0:
    // 0x19bfd0: 0x8f8680e4  lw          $a2, -0x7F1C($gp)
    ctx->pc = 0x19bfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934756)));
label_19bfd4:
    // 0x19bfd4: 0xc06cf34  jal         func_1B3CD0
label_19bfd8:
    if (ctx->pc == 0x19BFD8u) {
        ctx->pc = 0x19BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFD4u;
        // 0x19bfd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BFDCu;
        goto label_19bfdc;
    }
    ctx->pc = 0x19BFD4u;
    SET_GPR_U32(ctx, 31, 0x19BFDCu);
    ctx->pc = 0x19BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BFD4u;
    // 0x19bfd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x19BFD4u, 0x19BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BFDCu;
label_19bfdc:
    // 0x19bfdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19bfdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19bfe0:
    // 0x19bfe0: 0xc069ac8  jal         func_1A6B20
label_19bfe4:
    if (ctx->pc == 0x19BFE4u) {
        ctx->pc = 0x19BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFE0u;
        // 0x19bfe4: 0x26240a80  addiu       $a0, $s1, 0xA80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BFE8u;
        goto label_19bfe8;
    }
    ctx->pc = 0x19BFE0u;
    SET_GPR_U32(ctx, 31, 0x19BFE8u);
    ctx->pc = 0x19BFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BFE0u;
    // 0x19bfe4: 0x26240a80  addiu       $a0, $s1, 0xA80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x19BFE0u, 0x19BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BFE8u;
label_19bfe8:
    // 0x19bfe8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19bfec:
    // 0x19bfec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19bfecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19bff0:
    // 0x19bff0: 0xc069ac0  jal         func_1A6B00
label_19bff4:
    if (ctx->pc == 0x19BFF4u) {
        ctx->pc = 0x19BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFF0u;
        // 0x19bff4: 0x26240a80  addiu       $a0, $s1, 0xA80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BFF8u;
        goto label_19bff8;
    }
    ctx->pc = 0x19BFF0u;
    SET_GPR_U32(ctx, 31, 0x19BFF8u);
    ctx->pc = 0x19BFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BFF0u;
    // 0x19bff4: 0x26240a80  addiu       $a0, $s1, 0xA80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x19BFF0u, 0x19BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BFF8u;
label_19bff8:
    // 0x19bff8: 0xc062114  jal         func_188450
label_19bffc:
    if (ctx->pc == 0x19BFFCu) {
        ctx->pc = 0x19BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFF8u;
        // 0x19bffc: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C000u;
        goto label_19c000;
    }
    ctx->pc = 0x19BFF8u;
    SET_GPR_U32(ctx, 31, 0x19C000u);
    ctx->pc = 0x19BFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BFF8u;
    // 0x19bffc: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x19BFF8u, 0x19C000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C000u;
label_19c000:
    // 0x19c000: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19c000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c004:
    // 0x19c004: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x19c004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_19c008:
    // 0x19c008: 0x8e220928  lw          $v0, 0x928($s1)
    ctx->pc = 0x19c008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
label_19c00c:
    // 0x19c00c: 0xc0620fc  jal         func_1883F0
label_19c010:
    if (ctx->pc == 0x19C010u) {
        ctx->pc = 0x19C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C00Cu;
        // 0x19c010: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C014u;
        goto label_19c014;
    }
    ctx->pc = 0x19C00Cu;
    SET_GPR_U32(ctx, 31, 0x19C014u);
    ctx->pc = 0x19C010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C00Cu;
    // 0x19c010: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x19C00Cu, 0x19C014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C014u;
label_19c014:
    // 0x19c014: 0x8e240a80  lw          $a0, 0xA80($s1)
    ctx->pc = 0x19c014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2688)));
label_19c018:
    // 0x19c018: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_19c01c:
    if (ctx->pc == 0x19C01Cu) {
        ctx->pc = 0x19C020u;
        goto label_19c020;
    }
    ctx->pc = 0x19C018u;
    {
        const bool branch_taken_0x19c018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c018) {
            ctx->pc = 0x19C034u;
            goto label_19c034;
        }
    }
    ctx->pc = 0x19C020u;
label_19c020:
    // 0x19c020: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19c020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19c024:
    // 0x19c024: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x19c024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_19c028:
    // 0x19c028: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x19c028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_19c02c:
    // 0x19c02c: 0x320f809  jalr        $t9
label_19c030:
    if (ctx->pc == 0x19C030u) {
        ctx->pc = 0x19C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C02Cu;
        // 0x19c030: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C034u;
        goto label_19c034;
    }
    ctx->pc = 0x19C02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19C034u);
        ctx->pc = 0x19C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C02Cu;
        // 0x19c030: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C02Cu, 0x19C034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C034u;
label_19c034:
    // 0x19c034: 0x8e23093c  lw          $v1, 0x93C($s1)
    ctx->pc = 0x19c034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2364)));
label_19c038:
    // 0x19c038: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_19c03c:
    if (ctx->pc == 0x19C03Cu) {
        ctx->pc = 0x19C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C038u;
        // 0x19c03c: 0x8e220928  lw          $v0, 0x928($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C040u;
        goto label_19c040;
    }
    ctx->pc = 0x19C038u;
    {
        const bool branch_taken_0x19c038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C038u;
        // 0x19c03c: 0x8e220928  lw          $v0, 0x928($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c038) {
            ctx->pc = 0x19C054u;
            goto label_19c054;
        }
    }
    ctx->pc = 0x19C040u;
label_19c040:
    // 0x19c040: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19c044:
    // 0x19c044: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19c044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19c048:
    // 0x19c048: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19c048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19c04c:
    // 0x19c04c: 0xc064fb8  jal         func_193EE0
label_19c050:
    if (ctx->pc == 0x19C050u) {
        ctx->pc = 0x19C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C04Cu;
        // 0x19c050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C054u;
        goto label_19c054;
    }
    ctx->pc = 0x19C04Cu;
    SET_GPR_U32(ctx, 31, 0x19C054u);
    ctx->pc = 0x19C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C04Cu;
    // 0x19c050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x19C04Cu, 0x19C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C054u;
label_19c054:
    // 0x19c054: 0xc063e14  jal         func_18F850
label_19c058:
    if (ctx->pc == 0x19C058u) {
        ctx->pc = 0x19C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C054u;
        // 0x19c058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C05Cu;
        goto label_19c05c;
    }
    ctx->pc = 0x19C054u;
    SET_GPR_U32(ctx, 31, 0x19C05Cu);
    ctx->pc = 0x19C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C054u;
    // 0x19c058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19C054u, 0x19C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C05Cu;
label_19c05c:
    // 0x19c05c: 0x10000006  b           . + 4 + (0x6 << 2)
label_19c060:
    if (ctx->pc == 0x19C060u) {
        ctx->pc = 0x19C064u;
        goto label_19c064;
    }
    ctx->pc = 0x19C05Cu;
    {
        const bool branch_taken_0x19c05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c05c) {
            ctx->pc = 0x19C078u;
            goto label_19c078;
        }
    }
    ctx->pc = 0x19C064u;
label_19c064:
    // 0x19c064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c068:
    // 0x19c068: 0xc063e08  jal         func_18F820
label_19c06c:
    if (ctx->pc == 0x19C06Cu) {
        ctx->pc = 0x19C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C068u;
        // 0x19c06c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C070u;
        goto label_19c070;
    }
    ctx->pc = 0x19C068u;
    SET_GPR_U32(ctx, 31, 0x19C070u);
    ctx->pc = 0x19C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C068u;
    // 0x19c06c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19C068u, 0x19C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C070u;
label_19c070:
    // 0x19c070: 0x100000ad  b           . + 4 + (0xAD << 2)
label_19c074:
    if (ctx->pc == 0x19C074u) {
        ctx->pc = 0x19C078u;
        goto label_19c078;
    }
    ctx->pc = 0x19C070u;
    {
        const bool branch_taken_0x19c070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c070) {
            ctx->pc = 0x19C328u;
            goto label_19c328;
        }
    }
    ctx->pc = 0x19C078u;
label_19c078:
    // 0x19c078: 0x26240940  addiu       $a0, $s1, 0x940
    ctx->pc = 0x19c078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
label_19c07c:
    // 0x19c07c: 0xc0628f0  jal         func_18A3C0
label_19c080:
    if (ctx->pc == 0x19C080u) {
        ctx->pc = 0x19C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C07Cu;
        // 0x19c080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C084u;
        goto label_19c084;
    }
    ctx->pc = 0x19C07Cu;
    SET_GPR_U32(ctx, 31, 0x19C084u);
    ctx->pc = 0x19C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C07Cu;
    // 0x19c080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x19C07Cu, 0x19C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C084u;
label_19c084:
    // 0x19c084: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19c084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19c088:
    // 0x19c088: 0x26240940  addiu       $a0, $s1, 0x940
    ctx->pc = 0x19c088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
label_19c08c:
    // 0x19c08c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19c08cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19c090:
    // 0x19c090: 0xc062828  jal         func_18A0A0
label_19c094:
    if (ctx->pc == 0x19C094u) {
        ctx->pc = 0x19C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C090u;
        // 0x19c094: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C098u;
        goto label_19c098;
    }
    ctx->pc = 0x19C090u;
    SET_GPR_U32(ctx, 31, 0x19C098u);
    ctx->pc = 0x19C094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C090u;
    // 0x19c094: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x19C090u, 0x19C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C098u;
label_19c098:
    // 0x19c098: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19c09c:
    // 0x19c09c: 0x26240940  addiu       $a0, $s1, 0x940
    ctx->pc = 0x19c09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
label_19c0a0:
    // 0x19c0a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19c0a4:
    // 0x19c0a4: 0x0  nop
    ctx->pc = 0x19c0a4u;
    // NOP
label_19c0a8:
    // 0x19c0a8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19c0a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19c0ac:
    // 0x19c0ac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x19c0acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_19c0b0:
    // 0x19c0b0: 0xc062860  jal         func_18A180
label_19c0b4:
    if (ctx->pc == 0x19C0B4u) {
        ctx->pc = 0x19C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0B0u;
        // 0x19c0b4: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C0B8u;
        goto label_19c0b8;
    }
    ctx->pc = 0x19C0B0u;
    SET_GPR_U32(ctx, 31, 0x19C0B8u);
    ctx->pc = 0x19C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C0B0u;
    // 0x19c0b4: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x19C0B0u, 0x19C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0B8u;
label_19c0b8:
    // 0x19c0b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_19c0bc:
    // 0x19c0bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19c0c0:
    // 0x19c0c0: 0xc062858  jal         func_18A160
label_19c0c4:
    if (ctx->pc == 0x19C0C4u) {
        ctx->pc = 0x19C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0C0u;
        // 0x19c0c4: 0x26240940  addiu       $a0, $s1, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C0C8u;
        goto label_19c0c8;
    }
    ctx->pc = 0x19C0C0u;
    SET_GPR_U32(ctx, 31, 0x19C0C8u);
    ctx->pc = 0x19C0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C0C0u;
    // 0x19c0c4: 0x26240940  addiu       $a0, $s1, 0x940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x19C0C0u, 0x19C0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0C8u;
label_19c0c8:
    // 0x19c0c8: 0x92220a98  lbu         $v0, 0xA98($s1)
    ctx->pc = 0x19c0c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2712)));
label_19c0cc:
    // 0x19c0cc: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
label_19c0d0:
    if (ctx->pc == 0x19C0D0u) {
        ctx->pc = 0x19C0D4u;
        goto label_19c0d4;
    }
    ctx->pc = 0x19C0CCu;
    {
        const bool branch_taken_0x19c0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c0cc) {
            ctx->pc = 0x19C328u;
            goto label_19c328;
        }
    }
    ctx->pc = 0x19C0D4u;
label_19c0d4:
    // 0x19c0d4: 0xc069ae8  jal         func_1A6BA0
label_19c0d8:
    if (ctx->pc == 0x19C0D8u) {
        ctx->pc = 0x19C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0D4u;
        // 0x19c0d8: 0x26240a80  addiu       $a0, $s1, 0xA80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C0DCu;
        goto label_19c0dc;
    }
    ctx->pc = 0x19C0D4u;
    SET_GPR_U32(ctx, 31, 0x19C0DCu);
    ctx->pc = 0x19C0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C0D4u;
    // 0x19c0d8: 0x26240a80  addiu       $a0, $s1, 0xA80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x19C0D4u, 0x19C0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0DCu;
label_19c0dc:
    // 0x19c0dc: 0xc063e14  jal         func_18F850
label_19c0e0:
    if (ctx->pc == 0x19C0E0u) {
        ctx->pc = 0x19C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0DCu;
        // 0x19c0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C0E4u;
        goto label_19c0e4;
    }
    ctx->pc = 0x19C0DCu;
    SET_GPR_U32(ctx, 31, 0x19C0E4u);
    ctx->pc = 0x19C0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C0DCu;
    // 0x19c0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19C0DCu, 0x19C0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0E4u;
label_19c0e4:
    // 0x19c0e4: 0x10000090  b           . + 4 + (0x90 << 2)
label_19c0e8:
    if (ctx->pc == 0x19C0E8u) {
        ctx->pc = 0x19C0ECu;
        goto label_19c0ec;
    }
    ctx->pc = 0x19C0E4u;
    {
        const bool branch_taken_0x19c0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c0e4) {
            ctx->pc = 0x19C328u;
            goto label_19c328;
        }
    }
    ctx->pc = 0x19C0ECu;
label_19c0ec:
    // 0x19c0ec: 0x92220aac  lbu         $v0, 0xAAC($s1)
    ctx->pc = 0x19c0ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2732)));
label_19c0f0:
    // 0x19c0f0: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
label_19c0f4:
    if (ctx->pc == 0x19C0F4u) {
        ctx->pc = 0x19C0F8u;
        goto label_19c0f8;
    }
    ctx->pc = 0x19C0F0u;
    {
        const bool branch_taken_0x19c0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c0f0) {
            ctx->pc = 0x19C328u;
            goto label_19c328;
        }
    }
    ctx->pc = 0x19C0F8u;
label_19c0f8:
    // 0x19c0f8: 0x8e220914  lw          $v0, 0x914($s1)
    ctx->pc = 0x19c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2324)));
label_19c0fc:
    // 0x19c0fc: 0xae220910  sw          $v0, 0x910($s1)
    ctx->pc = 0x19c0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2320), GPR_U32(ctx, 2));
label_19c100:
    // 0x19c100: 0x8e220928  lw          $v0, 0x928($s1)
    ctx->pc = 0x19c100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
label_19c104:
    // 0x19c104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19c104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19c108:
    // 0x19c108: 0xae220928  sw          $v0, 0x928($s1)
    ctx->pc = 0x19c108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2344), GPR_U32(ctx, 2));
label_19c10c:
    // 0x19c10c: 0x8e220928  lw          $v0, 0x928($s1)
    ctx->pc = 0x19c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
label_19c110:
    // 0x19c110: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x19c110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_19c114:
    // 0x19c114: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_19c118:
    if (ctx->pc == 0x19C118u) {
        ctx->pc = 0x19C11Cu;
        goto label_19c11c;
    }
    ctx->pc = 0x19C114u;
    {
        const bool branch_taken_0x19c114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c114) {
            ctx->pc = 0x19C144u;
            goto label_19c144;
        }
    }
    ctx->pc = 0x19C11Cu;
label_19c11c:
    // 0x19c11c: 0x8e230914  lw          $v1, 0x914($s1)
    ctx->pc = 0x19c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2324)));
label_19c120:
    // 0x19c120: 0x8e220918  lw          $v0, 0x918($s1)
    ctx->pc = 0x19c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2328)));
label_19c124:
    // 0x19c124: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x19c124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19c128:
    // 0x19c128: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_19c12c:
    if (ctx->pc == 0x19C12Cu) {
        ctx->pc = 0x19C130u;
        goto label_19c130;
    }
    ctx->pc = 0x19C128u;
    {
        const bool branch_taken_0x19c128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c128) {
            ctx->pc = 0x19C144u;
            goto label_19c144;
        }
    }
    ctx->pc = 0x19C130u;
label_19c130:
    // 0x19c130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c134:
    // 0x19c134: 0xc063e08  jal         func_18F820
label_19c138:
    if (ctx->pc == 0x19C138u) {
        ctx->pc = 0x19C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C134u;
        // 0x19c138: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C13Cu;
        goto label_19c13c;
    }
    ctx->pc = 0x19C134u;
    SET_GPR_U32(ctx, 31, 0x19C13Cu);
    ctx->pc = 0x19C138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C134u;
    // 0x19c138: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19C134u, 0x19C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C13Cu;
label_19c13c:
    // 0x19c13c: 0x1000007a  b           . + 4 + (0x7A << 2)
label_19c140:
    if (ctx->pc == 0x19C140u) {
        ctx->pc = 0x19C144u;
        goto label_19c144;
    }
    ctx->pc = 0x19C13Cu;
    {
        const bool branch_taken_0x19c13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c13c) {
            ctx->pc = 0x19C328u;
            goto label_19c328;
        }
    }
    ctx->pc = 0x19C144u;
label_19c144:
    // 0x19c144: 0x8e230914  lw          $v1, 0x914($s1)
    ctx->pc = 0x19c144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2324)));
label_19c148:
    // 0x19c148: 0x8e220918  lw          $v0, 0x918($s1)
    ctx->pc = 0x19c148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2328)));
label_19c14c:
    // 0x19c14c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x19c14cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19c150:
    // 0x19c150: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_19c154:
    if (ctx->pc == 0x19C154u) {
        ctx->pc = 0x19C158u;
        goto label_19c158;
    }
    ctx->pc = 0x19C150u;
    {
        const bool branch_taken_0x19c150 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c150) {
            ctx->pc = 0x19C164u;
            goto label_19c164;
        }
    }
    ctx->pc = 0x19C158u;
label_19c158:
    // 0x19c158: 0x8e220928  lw          $v0, 0x928($s1)
    ctx->pc = 0x19c158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
label_19c15c:
    // 0x19c15c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19c160:
    // 0x19c160: 0xae220928  sw          $v0, 0x928($s1)
    ctx->pc = 0x19c160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2344), GPR_U32(ctx, 2));
label_19c164:
    // 0x19c164: 0xa2200938  sb          $zero, 0x938($s1)
    ctx->pc = 0x19c164u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2360), (uint8_t)GPR_U32(ctx, 0));
label_19c168:
    // 0x19c168: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x19c168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_19c16c:
    // 0x19c16c: 0xae200930  sw          $zero, 0x930($s1)
    ctx->pc = 0x19c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2352), GPR_U32(ctx, 0));
label_19c170:
    // 0x19c170: 0x26240aa0  addiu       $a0, $s1, 0xAA0
    ctx->pc = 0x19c170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2720));
label_19c174:
    // 0x19c174: 0x8e250910  lw          $a1, 0x910($s1)
    ctx->pc = 0x19c174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2320)));
label_19c178:
    // 0x19c178: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x19c178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_19c17c:
    // 0x19c17c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x19c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_19c180:
    // 0x19c180: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19c184:
    // 0x19c184: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19c184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_19c188:
    // 0x19c188: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19c18c:
    // 0x19c18c: 0xae23091c  sw          $v1, 0x91C($s1)
    ctx->pc = 0x19c18cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2332), GPR_U32(ctx, 3));
label_19c190:
    // 0x19c190: 0x8e230928  lw          $v1, 0x928($s1)
    ctx->pc = 0x19c190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
label_19c194:
    // 0x19c194: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x19c194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_19c198:
    // 0x19c198: 0xc069a9c  jal         func_1A6A70
label_19c19c:
    if (ctx->pc == 0x19C19Cu) {
        ctx->pc = 0x19C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C198u;
        // 0x19c19c: 0xae220920  sw          $v0, 0x920($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C1A0u;
        goto label_19c1a0;
    }
    ctx->pc = 0x19C198u;
    SET_GPR_U32(ctx, 31, 0x19C1A0u);
    ctx->pc = 0x19C19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C198u;
    // 0x19c19c: 0xae220920  sw          $v0, 0x920($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2336), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6A70u, 0x19C198u, 0x19C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C1A0u;
label_19c1a0:
    // 0x19c1a0: 0x8e260928  lw          $a2, 0x928($s1)
    ctx->pc = 0x19c1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
label_19c1a4:
    // 0x19c1a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19c1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19c1a8:
    // 0x19c1a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c1ac:
    // 0x19c1ac: 0xc064a88  jal         func_192A20
label_19c1b0:
    if (ctx->pc == 0x19C1B0u) {
        ctx->pc = 0x19C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1ACu;
        // 0x19c1b0: 0x24a50228  addiu       $a1, $a1, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C1B4u;
        goto label_19c1b4;
    }
    ctx->pc = 0x19C1ACu;
    SET_GPR_U32(ctx, 31, 0x19C1B4u);
    ctx->pc = 0x19C1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C1ACu;
    // 0x19c1b0: 0x24a50228  addiu       $a1, $a1, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x19C1ACu, 0x19C1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C1B4u;
label_19c1b4:
    // 0x19c1b4: 0xc063e14  jal         func_18F850
label_19c1b8:
    if (ctx->pc == 0x19C1B8u) {
        ctx->pc = 0x19C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1B4u;
        // 0x19c1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C1BCu;
        goto label_19c1bc;
    }
    ctx->pc = 0x19C1B4u;
    SET_GPR_U32(ctx, 31, 0x19C1BCu);
    ctx->pc = 0x19C1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C1B4u;
    // 0x19c1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19C1B4u, 0x19C1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C1BCu;
label_19c1bc:
    // 0x19c1bc: 0x1000005a  b           . + 4 + (0x5A << 2)
label_19c1c0:
    if (ctx->pc == 0x19C1C0u) {
        ctx->pc = 0x19C1C4u;
        goto label_19c1c4;
    }
    ctx->pc = 0x19C1BCu;
    {
        const bool branch_taken_0x19c1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c1bc) {
            ctx->pc = 0x19C328u;
            goto label_19c328;
        }
    }
    ctx->pc = 0x19C1C4u;
label_19c1c4:
    // 0x19c1c4: 0x8e230928  lw          $v1, 0x928($s1)
    ctx->pc = 0x19c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
label_19c1c8:
    // 0x19c1c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19c1cc:
    // 0x19c1cc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_19c1d0:
    if (ctx->pc == 0x19C1D0u) {
        ctx->pc = 0x19C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1CCu;
        // 0x19c1d0: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C1D4u;
        goto label_19c1d4;
    }
    ctx->pc = 0x19C1CCu;
    {
        const bool branch_taken_0x19c1cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1CCu;
        // 0x19c1d0: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c1cc) {
            ctx->pc = 0x19C1F4u;
            goto label_19c1f4;
        }
    }
    ctx->pc = 0x19C1D4u;
label_19c1d4:
    // 0x19c1d4: 0x8e22093c  lw          $v0, 0x93C($s1)
    ctx->pc = 0x19c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2364)));
label_19c1d8:
    // 0x19c1d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19c1dc:
    if (ctx->pc == 0x19C1DCu) {
        ctx->pc = 0x19C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1D8u;
        // 0x19c1dc: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C1E0u;
        goto label_19c1e0;
    }
    ctx->pc = 0x19C1D8u;
    {
        const bool branch_taken_0x19c1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1D8u;
        // 0x19c1dc: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c1d8) {
            ctx->pc = 0x19C1ECu;
            goto label_19c1ec;
        }
    }
    ctx->pc = 0x19C1E0u;
label_19c1e0:
    // 0x19c1e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_19c1e4:
    if (ctx->pc == 0x19C1E4u) {
        ctx->pc = 0x19C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1E0u;
        // 0x19c1e4: 0x8c4a0010  lw          $t2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C1E8u;
        goto label_19c1e8;
    }
    ctx->pc = 0x19C1E0u;
    {
        const bool branch_taken_0x19c1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1E0u;
        // 0x19c1e4: 0x8c4a0010  lw          $t2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c1e0) {
            ctx->pc = 0x19C1ECu;
            goto label_19c1ec;
        }
    }
    ctx->pc = 0x19C1E8u;
label_19c1e8:
    // 0x19c1e8: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x19c1e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19c1ec:
    // 0x19c1ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_19c1f0:
    if (ctx->pc == 0x19C1F0u) {
        ctx->pc = 0x19C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1ECu;
        // 0x19c1f0: 0xdc852818  ld          $a1, 0x2818($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 10264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C1F4u;
        goto label_19c1f4;
    }
    ctx->pc = 0x19C1ECu;
    {
        const bool branch_taken_0x19c1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1ECu;
        // 0x19c1f0: 0xdc852818  ld          $a1, 0x2818($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 10264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c1ec) {
            ctx->pc = 0x19C1FCu;
            goto label_19c1fc;
        }
    }
    ctx->pc = 0x19C1F4u;
label_19c1f4:
    // 0x19c1f4: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x19c1f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19c1f8:
    // 0x19c1f8: 0xdc852818  ld          $a1, 0x2818($a0)
    ctx->pc = 0x19c1f8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 10264)));
label_19c1fc:
    // 0x19c1fc: 0x240601f4  addiu       $a2, $zero, 0x1F4
    ctx->pc = 0x19c1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_19c200:
    // 0x19c200: 0x8e270920  lw          $a3, 0x920($s1)
    ctx->pc = 0x19c200u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2336)));
label_19c204:
    // 0x19c204: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x19c204u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c208:
    // 0x19c208: 0x8e280910  lw          $t0, 0x910($s1)
    ctx->pc = 0x19c208u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2320)));
label_19c20c:
    // 0x19c20c: 0xc0696c4  jal         func_1A5B10
label_19c210:
    if (ctx->pc == 0x19C210u) {
        ctx->pc = 0x19C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C20Cu;
        // 0x19c210: 0x26240ac0  addiu       $a0, $s1, 0xAC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C214u;
        goto label_19c214;
    }
    ctx->pc = 0x19C20Cu;
    SET_GPR_U32(ctx, 31, 0x19C214u);
    ctx->pc = 0x19C210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C20Cu;
    // 0x19c210: 0x26240ac0  addiu       $a0, $s1, 0xAC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5B10u, 0x19C20Cu, 0x19C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C214u;
label_19c214:
    // 0x19c214: 0x8e250910  lw          $a1, 0x910($s1)
    ctx->pc = 0x19c214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2320)));
label_19c218:
    // 0x19c218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c21c:
    // 0x19c21c: 0x8e220920  lw          $v0, 0x920($s1)
    ctx->pc = 0x19c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2336)));
label_19c220:
    // 0x19c220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c224:
    // 0x19c224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19c224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c228:
    // 0x19c228: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x19c228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_19c22c:
    // 0x19c22c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x19c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_19c230:
    // 0x19c230: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19c234:
    // 0x19c234: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19c234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_19c238:
    // 0x19c238: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19c23c:
    // 0x19c23c: 0xc064b08  jal         func_192C20
label_19c240:
    if (ctx->pc == 0x19C240u) {
        ctx->pc = 0x19C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C23Cu;
        // 0x19c240: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C244u;
        goto label_19c244;
    }
    ctx->pc = 0x19C23Cu;
    SET_GPR_U32(ctx, 31, 0x19C244u);
    ctx->pc = 0x19C240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C23Cu;
    // 0x19c240: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x19C23Cu, 0x19C244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C244u;
label_19c244:
    // 0x19c244: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19c244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c248:
    // 0x19c248: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19c24c:
    // 0x19c24c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19c250:
    // 0x19c250: 0x0  nop
    ctx->pc = 0x19c250u;
    // NOP
label_19c254:
    // 0x19c254: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19c254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19c258:
    // 0x19c258: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19c258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19c25c:
    // 0x19c25c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19c25cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19c260:
    // 0x19c260: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19c260u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_19c264:
    // 0x19c264: 0x0  nop
    ctx->pc = 0x19c264u;
    // NOP
label_19c268:
    // 0x19c268: 0xae220934  sw          $v0, 0x934($s1)
    ctx->pc = 0x19c268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2356), GPR_U32(ctx, 2));
label_19c26c:
    // 0x19c26c: 0x8e22093c  lw          $v0, 0x93C($s1)
    ctx->pc = 0x19c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2364)));
label_19c270:
    // 0x19c270: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19c274:
    if (ctx->pc == 0x19C274u) {
        ctx->pc = 0x19C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C270u;
        // 0x19c274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C278u;
        goto label_19c278;
    }
    ctx->pc = 0x19C270u;
    {
        const bool branch_taken_0x19c270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C270u;
        // 0x19c274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c270) {
            ctx->pc = 0x19C288u;
            goto label_19c288;
        }
    }
    ctx->pc = 0x19C278u;
label_19c278:
    // 0x19c278: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x19c278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_19c27c:
    // 0x19c27c: 0xc064fb8  jal         func_193EE0
label_19c280:
    if (ctx->pc == 0x19C280u) {
        ctx->pc = 0x19C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C27Cu;
        // 0x19c280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C284u;
        goto label_19c284;
    }
    ctx->pc = 0x19C27Cu;
    SET_GPR_U32(ctx, 31, 0x19C284u);
    ctx->pc = 0x19C280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C27Cu;
    // 0x19c280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x19C27Cu, 0x19C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C284u;
label_19c284:
    // 0x19c284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c288:
    // 0x19c288: 0xc063e14  jal         func_18F850
label_19c28c:
    if (ctx->pc == 0x19C28Cu) {
        ctx->pc = 0x19C290u;
        goto label_19c290;
    }
    ctx->pc = 0x19C288u;
    SET_GPR_U32(ctx, 31, 0x19C290u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19C288u, 0x19C290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C290u;
label_19c290:
    // 0x19c290: 0x26240ac0  addiu       $a0, $s1, 0xAC0
    ctx->pc = 0x19c290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2752));
label_19c294:
    // 0x19c294: 0xc06977c  jal         func_1A5DF0
label_19c298:
    if (ctx->pc == 0x19C298u) {
        ctx->pc = 0x19C29Cu;
        goto label_19c29c;
    }
    ctx->pc = 0x19C294u;
    SET_GPR_U32(ctx, 31, 0x19C29Cu);
    ctx->pc = 0x1A5DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5DF0u, 0x19C294u, 0x19C29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C29Cu;
label_19c29c:
    // 0x19c29c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_19c2a0:
    if (ctx->pc == 0x19C2A0u) {
        ctx->pc = 0x19C2A4u;
        goto label_19c2a4;
    }
    ctx->pc = 0x19C29Cu;
    {
        const bool branch_taken_0x19c29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c29c) {
            ctx->pc = 0x19C328u;
            goto label_19c328;
        }
    }
    ctx->pc = 0x19C2A4u;
label_19c2a4:
    // 0x19c2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c2a8:
    // 0x19c2a8: 0xc063e08  jal         func_18F820
label_19c2ac:
    if (ctx->pc == 0x19C2ACu) {
        ctx->pc = 0x19C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2A8u;
        // 0x19c2ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C2B0u;
        goto label_19c2b0;
    }
    ctx->pc = 0x19C2A8u;
    SET_GPR_U32(ctx, 31, 0x19C2B0u);
    ctx->pc = 0x19C2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C2A8u;
    // 0x19c2ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19C2A8u, 0x19C2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C2B0u;
label_19c2b0:
    // 0x19c2b0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_19c2b4:
    if (ctx->pc == 0x19C2B4u) {
        ctx->pc = 0x19C2B8u;
        goto label_19c2b8;
    }
    ctx->pc = 0x19C2B0u;
    {
        const bool branch_taken_0x19c2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c2b0) {
            ctx->pc = 0x19C328u;
            goto label_19c328;
        }
    }
    ctx->pc = 0x19C2B8u;
label_19c2b8:
    // 0x19c2b8: 0x8e240904  lw          $a0, 0x904($s1)
    ctx->pc = 0x19c2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2308)));
label_19c2bc:
    // 0x19c2bc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_19c2c0:
    if (ctx->pc == 0x19C2C0u) {
        ctx->pc = 0x19C2C4u;
        goto label_19c2c4;
    }
    ctx->pc = 0x19C2BCu;
    {
        const bool branch_taken_0x19c2bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c2bc) {
            ctx->pc = 0x19C2E0u;
            goto label_19c2e0;
        }
    }
    ctx->pc = 0x19C2C4u;
label_19c2c4:
    // 0x19c2c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19c2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19c2c8:
    // 0x19c2c8: 0xc067f68  jal         func_19FDA0
label_19c2cc:
    if (ctx->pc == 0x19C2CCu) {
        ctx->pc = 0x19C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2C8u;
        // 0x19c2cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C2D0u;
        goto label_19c2d0;
    }
    ctx->pc = 0x19C2C8u;
    SET_GPR_U32(ctx, 31, 0x19C2D0u);
    ctx->pc = 0x19C2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C2C8u;
    // 0x19c2cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x19C2C8u, 0x19C2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C2D0u;
label_19c2d0:
    // 0x19c2d0: 0x8e240904  lw          $a0, 0x904($s1)
    ctx->pc = 0x19c2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2308)));
label_19c2d4:
    // 0x19c2d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19c2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c2d8:
    // 0x19c2d8: 0xc067f68  jal         func_19FDA0
label_19c2dc:
    if (ctx->pc == 0x19C2DCu) {
        ctx->pc = 0x19C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2D8u;
        // 0x19c2dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C2E0u;
        goto label_19c2e0;
    }
    ctx->pc = 0x19C2D8u;
    SET_GPR_U32(ctx, 31, 0x19C2E0u);
    ctx->pc = 0x19C2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C2D8u;
    // 0x19c2dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x19C2D8u, 0x19C2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C2E0u;
label_19c2e0:
    // 0x19c2e0: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x19c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_19c2e4:
    // 0x19c2e4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x19c2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_19c2e8:
    // 0x19c2e8: 0xc06bd9c  jal         func_1AF670
label_19c2ec:
    if (ctx->pc == 0x19C2ECu) {
        ctx->pc = 0x19C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2E8u;
        // 0x19c2ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C2F0u;
        goto label_19c2f0;
    }
    ctx->pc = 0x19C2E8u;
    SET_GPR_U32(ctx, 31, 0x19C2F0u);
    ctx->pc = 0x19C2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C2E8u;
    // 0x19c2ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF670u, 0x19C2E8u, 0x19C2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C2F0u;
label_19c2f0:
    // 0x19c2f0: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19c2f4:
    // 0x19c2f4: 0xa06028f5  sb          $zero, 0x28F5($v1)
    ctx->pc = 0x19c2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10485), (uint8_t)GPR_U32(ctx, 0));
label_19c2f8:
    // 0x19c2f8: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19c2fc:
    // 0x19c2fc: 0xa060002d  sb          $zero, 0x2D($v1)
    ctx->pc = 0x19c2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 0));
label_19c300:
    // 0x19c300: 0x8e230bd0  lw          $v1, 0xBD0($s1)
    ctx->pc = 0x19c300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3024)));
label_19c304:
    // 0x19c304: 0x12200076  beqz        $s1, . + 4 + (0x76 << 2)
label_19c308:
    if (ctx->pc == 0x19C308u) {
        ctx->pc = 0x19C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C304u;
        // 0x19c308: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C30Cu;
        goto label_19c30c;
    }
    ctx->pc = 0x19C304u;
    {
        const bool branch_taken_0x19c304 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C304u;
        // 0x19c308: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c304) {
            ctx->pc = 0x19C4E0u;
            goto label_19c4e0;
        }
    }
    ctx->pc = 0x19C30Cu;
label_19c30c:
    // 0x19c30c: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x19c30cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_19c310:
    // 0x19c310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c314:
    // 0x19c314: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19c314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19c318:
    // 0x19c318: 0x320f809  jalr        $t9
label_19c31c:
    if (ctx->pc == 0x19C31Cu) {
        ctx->pc = 0x19C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C318u;
        // 0x19c31c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C320u;
        goto label_19c320;
    }
    ctx->pc = 0x19C318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19C320u);
        ctx->pc = 0x19C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C318u;
        // 0x19c31c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C318u, 0x19C320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C320u;
label_19c320:
    // 0x19c320: 0x10000070  b           . + 4 + (0x70 << 2)
label_19c324:
    if (ctx->pc == 0x19C324u) {
        ctx->pc = 0x19C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C320u;
        // 0x19c324: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C328u;
        goto label_19c328;
    }
    ctx->pc = 0x19C320u;
    {
        const bool branch_taken_0x19c320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C320u;
        // 0x19c324: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c320) {
            ctx->pc = 0x19C4E4u;
            goto label_19c4e4;
        }
    }
    ctx->pc = 0x19C328u;
label_19c328:
    // 0x19c328: 0xc067f08  jal         func_19FC20
label_19c32c:
    if (ctx->pc == 0x19C32Cu) {
        ctx->pc = 0x19C330u;
        goto label_19c330;
    }
    ctx->pc = 0x19C328u;
    SET_GPR_U32(ctx, 31, 0x19C330u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x19C328u, 0x19C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C330u;
label_19c330:
    // 0x19c330: 0xae220904  sw          $v0, 0x904($s1)
    ctx->pc = 0x19c330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2308), GPR_U32(ctx, 2));
label_19c334:
    // 0x19c334: 0x8e220904  lw          $v0, 0x904($s1)
    ctx->pc = 0x19c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2308)));
label_19c338:
    // 0x19c338: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_19c33c:
    if (ctx->pc == 0x19C33Cu) {
        ctx->pc = 0x19C340u;
        goto label_19c340;
    }
    ctx->pc = 0x19C338u;
    {
        const bool branch_taken_0x19c338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c338) {
            ctx->pc = 0x19C3A0u;
            goto label_19c3a0;
        }
    }
    ctx->pc = 0x19C340u;
label_19c340:
    // 0x19c340: 0x8c430320  lw          $v1, 0x320($v0)
    ctx->pc = 0x19c340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
label_19c344:
    // 0x19c344: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19c344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19c348:
    // 0x19c348: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_19c34c:
    if (ctx->pc == 0x19C34Cu) {
        ctx->pc = 0x19C350u;
        goto label_19c350;
    }
    ctx->pc = 0x19C348u;
    {
        const bool branch_taken_0x19c348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19c348) {
            ctx->pc = 0x19C3A0u;
            goto label_19c3a0;
        }
    }
    ctx->pc = 0x19C350u;
label_19c350:
    // 0x19c350: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19c350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19c354:
    // 0x19c354: 0x8c833ddc  lw          $v1, 0x3DDC($a0)
    ctx->pc = 0x19c354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15836)));
label_19c358:
    // 0x19c358: 0x8c823dd8  lw          $v0, 0x3DD8($a0)
    ctx->pc = 0x19c358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15832)));
label_19c35c:
    // 0x19c35c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_19c360:
    if (ctx->pc == 0x19C360u) {
        ctx->pc = 0x19C364u;
        goto label_19c364;
    }
    ctx->pc = 0x19C35Cu;
    {
        const bool branch_taken_0x19c35c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19c35c) {
            ctx->pc = 0x19C380u;
            goto label_19c380;
        }
    }
    ctx->pc = 0x19C364u;
label_19c364:
    // 0x19c364: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19c364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19c368:
    // 0x19c368: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19c368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_19c36c:
    // 0x19c36c: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x19c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_19c370:
    // 0x19c370: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x19c370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19c374:
    // 0x19c374: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x19c374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_19c378:
    // 0x19c378: 0x320f809  jalr        $t9
label_19c37c:
    if (ctx->pc == 0x19C37Cu) {
        ctx->pc = 0x19C380u;
        goto label_19c380;
    }
    ctx->pc = 0x19C378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19C380u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C378u, 0x19C380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C380u;
label_19c380:
    // 0x19c380: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19c380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19c384:
    // 0x19c384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c388:
    // 0x19c388: 0x24a50228  addiu       $a1, $a1, 0x228
    ctx->pc = 0x19c388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 552));
label_19c38c:
    // 0x19c38c: 0xc064a88  jal         func_192A20
label_19c390:
    if (ctx->pc == 0x19C390u) {
        ctx->pc = 0x19C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C38Cu;
        // 0x19c390: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C394u;
        goto label_19c394;
    }
    ctx->pc = 0x19C38Cu;
    SET_GPR_U32(ctx, 31, 0x19C394u);
    ctx->pc = 0x19C390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C38Cu;
    // 0x19c390: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x19C38Cu, 0x19C394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C394u;
label_19c394:
    // 0x19c394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c398:
    // 0x19c398: 0xc063e08  jal         func_18F820
label_19c39c:
    if (ctx->pc == 0x19C39Cu) {
        ctx->pc = 0x19C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C398u;
        // 0x19c39c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C3A0u;
        goto label_19c3a0;
    }
    ctx->pc = 0x19C398u;
    SET_GPR_U32(ctx, 31, 0x19C3A0u);
    ctx->pc = 0x19C39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C398u;
    // 0x19c39c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19C398u, 0x19C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C3A0u;
label_19c3a0:
    // 0x19c3a0: 0x8e230bd0  lw          $v1, 0xBD0($s1)
    ctx->pc = 0x19c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3024)));
label_19c3a4:
    // 0x19c3a4: 0x92220938  lbu         $v0, 0x938($s1)
    ctx->pc = 0x19c3a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2360)));
label_19c3a8:
    // 0x19c3a8: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_19c3ac:
    if (ctx->pc == 0x19C3ACu) {
        ctx->pc = 0x19C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3A8u;
        // 0x19c3ac: 0x24700010  addiu       $s0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C3B0u;
        goto label_19c3b0;
    }
    ctx->pc = 0x19C3A8u;
    {
        const bool branch_taken_0x19c3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3A8u;
        // 0x19c3ac: 0x24700010  addiu       $s0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c3a8) {
            ctx->pc = 0x19C4C0u;
            goto label_19c4c0;
        }
    }
    ctx->pc = 0x19C3B0u;
label_19c3b0:
    // 0x19c3b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c3b4:
    // 0x19c3b4: 0xc0628f0  jal         func_18A3C0
label_19c3b8:
    if (ctx->pc == 0x19C3B8u) {
        ctx->pc = 0x19C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3B4u;
        // 0x19c3b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C3BCu;
        goto label_19c3bc;
    }
    ctx->pc = 0x19C3B4u;
    SET_GPR_U32(ctx, 31, 0x19C3BCu);
    ctx->pc = 0x19C3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C3B4u;
    // 0x19c3b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x19C3B4u, 0x19C3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C3BCu;
label_19c3bc:
    // 0x19c3bc: 0x8e260bd0  lw          $a2, 0xBD0($s1)
    ctx->pc = 0x19c3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3024)));
label_19c3c0:
    // 0x19c3c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19c3c4:
    // 0x19c3c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19c3c8:
    // 0x19c3c8: 0x3c0543c8  lui         $a1, 0x43C8
    ctx->pc = 0x19c3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17352 << 16));
label_19c3cc:
    // 0x19c3cc: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x19c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_19c3d0:
    // 0x19c3d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c3d4:
    // 0x19c3d4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19c3d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19c3d8:
    // 0x19c3d8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x19c3d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_19c3dc:
    // 0x19c3dc: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x19c3dcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
label_19c3e0:
    // 0x19c3e0: 0xacc000b8  sw          $zero, 0xB8($a2)
    ctx->pc = 0x19c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 0));
label_19c3e4:
    // 0x19c3e4: 0xacc500b0  sw          $a1, 0xB0($a2)
    ctx->pc = 0x19c3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 176), GPR_U32(ctx, 5));
label_19c3e8:
    // 0x19c3e8: 0xc062860  jal         func_18A180
label_19c3ec:
    if (ctx->pc == 0x19C3ECu) {
        ctx->pc = 0x19C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3E8u;
        // 0x19c3ec: 0xacc300b4  sw          $v1, 0xB4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C3F0u;
        goto label_19c3f0;
    }
    ctx->pc = 0x19C3E8u;
    SET_GPR_U32(ctx, 31, 0x19C3F0u);
    ctx->pc = 0x19C3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C3E8u;
    // 0x19c3ec: 0xacc300b4  sw          $v1, 0xB4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 180), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x19C3E8u, 0x19C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C3F0u;
label_19c3f0:
    // 0x19c3f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19c3f4:
    // 0x19c3f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c3f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19c3f8:
    // 0x19c3f8: 0xc062858  jal         func_18A160
label_19c3fc:
    if (ctx->pc == 0x19C3FCu) {
        ctx->pc = 0x19C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3F8u;
        // 0x19c3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C400u;
        goto label_19c400;
    }
    ctx->pc = 0x19C3F8u;
    SET_GPR_U32(ctx, 31, 0x19C400u);
    ctx->pc = 0x19C3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C3F8u;
    // 0x19c3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x19C3F8u, 0x19C400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C400u;
label_19c400:
    // 0x19c400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c404:
    // 0x19c404: 0xc062200  jal         func_188800
label_19c408:
    if (ctx->pc == 0x19C408u) {
        ctx->pc = 0x19C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C404u;
        // 0x19c408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C40Cu;
        goto label_19c40c;
    }
    ctx->pc = 0x19C404u;
    SET_GPR_U32(ctx, 31, 0x19C40Cu);
    ctx->pc = 0x19C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C404u;
    // 0x19c408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188800u, 0x19C404u, 0x19C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C40Cu;
label_19c40c:
    // 0x19c40c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19c40cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19c410:
    // 0x19c410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c414:
    // 0x19c414: 0xc06223c  jal         func_1888F0
label_19c418:
    if (ctx->pc == 0x19C418u) {
        ctx->pc = 0x19C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C414u;
        // 0x19c418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C41Cu;
        goto label_19c41c;
    }
    ctx->pc = 0x19C414u;
    SET_GPR_U32(ctx, 31, 0x19C41Cu);
    ctx->pc = 0x19C418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C414u;
    // 0x19c418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888F0u, 0x19C414u, 0x19C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C41Cu;
label_19c41c:
    // 0x19c41c: 0x8e260914  lw          $a2, 0x914($s1)
    ctx->pc = 0x19c41cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2324)));
label_19c420:
    // 0x19c420: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19c420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19c424:
    // 0x19c424: 0x8e270918  lw          $a3, 0x918($s1)
    ctx->pc = 0x19c424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2328)));
label_19c428:
    // 0x19c428: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x19c428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_19c42c:
    // 0x19c42c: 0xc0805c8  jal         func_201720
label_19c430:
    if (ctx->pc == 0x19C430u) {
        ctx->pc = 0x19C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C42Cu;
        // 0x19c430: 0x24a50230  addiu       $a1, $a1, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C434u;
        goto label_19c434;
    }
    ctx->pc = 0x19C42Cu;
    SET_GPR_U32(ctx, 31, 0x19C434u);
    ctx->pc = 0x19C430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C42Cu;
    // 0x19c430: 0x24a50230  addiu       $a1, $a1, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x19C42Cu, 0x19C434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C434u;
label_19c434:
    // 0x19c434: 0x8e220bd0  lw          $v0, 0xBD0($s1)
    ctx->pc = 0x19c434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3024)));
label_19c438:
    // 0x19c438: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x19c438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_19c43c:
    // 0x19c43c: 0xa04001bb  sb          $zero, 0x1BB($v0)
    ctx->pc = 0x19c43cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 443), (uint8_t)GPR_U32(ctx, 0));
label_19c440:
    // 0x19c440: 0xc080702  jal         func_201C08
label_19c444:
    if (ctx->pc == 0x19C444u) {
        ctx->pc = 0x19C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C440u;
        // 0x19c444: 0x244400bc  addiu       $a0, $v0, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C448u;
        goto label_19c448;
    }
    ctx->pc = 0x19C440u;
    SET_GPR_U32(ctx, 31, 0x19C448u);
    ctx->pc = 0x19C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C440u;
    // 0x19c444: 0x244400bc  addiu       $a0, $v0, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x19C440u, 0x19C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C448u;
label_19c448:
    // 0x19c448: 0x8e220bd0  lw          $v0, 0xBD0($s1)
    ctx->pc = 0x19c448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3024)));
label_19c44c:
    // 0x19c44c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c450:
    // 0x19c450: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x19c450u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_19c454:
    // 0x19c454: 0x8e22090c  lw          $v0, 0x90C($s1)
    ctx->pc = 0x19c454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2316)));
label_19c458:
    // 0x19c458: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_19c45c:
    if (ctx->pc == 0x19C45Cu) {
        ctx->pc = 0x19C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C458u;
        // 0x19c45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C460u;
        goto label_19c460;
    }
    ctx->pc = 0x19C458u;
    {
        const bool branch_taken_0x19c458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C458u;
        // 0x19c45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c458) {
            ctx->pc = 0x19C4C8u;
            goto label_19c4c8;
        }
    }
    ctx->pc = 0x19C460u;
label_19c460:
    // 0x19c460: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x19c460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19c464:
    // 0x19c464: 0xae23090c  sw          $v1, 0x90C($s1)
    ctx->pc = 0x19c464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2316), GPR_U32(ctx, 3));
label_19c468:
    // 0x19c468: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x19c468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_19c46c:
    // 0x19c46c: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x19c46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c470:
    // 0x19c470: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19c474:
    // 0x19c474: 0x0  nop
    ctx->pc = 0x19c474u;
    // NOP
label_19c478:
    // 0x19c478: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19c478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19c47c:
    // 0x19c47c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19c47cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19c480:
    // 0x19c480: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19c480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19c484:
    // 0x19c484: 0x0  nop
    ctx->pc = 0x19c484u;
    // NOP
label_19c488:
    // 0x19c488: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_19c48c:
    if (ctx->pc == 0x19C48Cu) {
        ctx->pc = 0x19C490u;
        goto label_19c490;
    }
    ctx->pc = 0x19C488u;
    {
        const bool branch_taken_0x19c488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c488) {
            ctx->pc = 0x19C494u;
            goto label_19c494;
        }
    }
    ctx->pc = 0x19C490u;
label_19c490:
    // 0x19c490: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19c494:
    // 0x19c494: 0x8e22090c  lw          $v0, 0x90C($s1)
    ctx->pc = 0x19c494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2316)));
label_19c498:
    // 0x19c498: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x19c498u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19c49c:
    // 0x19c49c: 0x0  nop
    ctx->pc = 0x19c49cu;
    // NOP
label_19c4a0:
    // 0x19c4a0: 0x0  nop
    ctx->pc = 0x19c4a0u;
    // NOP
label_19c4a4:
    // 0x19c4a4: 0x1010  mfhi        $v0
    ctx->pc = 0x19c4a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19c4a8:
    // 0x19c4a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_19c4ac:
    if (ctx->pc == 0x19C4ACu) {
        ctx->pc = 0x19C4B0u;
        goto label_19c4b0;
    }
    ctx->pc = 0x19C4A8u;
    {
        const bool branch_taken_0x19c4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c4a8) {
            ctx->pc = 0x19C4C4u;
            goto label_19c4c4;
        }
    }
    ctx->pc = 0x19C4B0u;
label_19c4b0:
    // 0x19c4b0: 0xc067178  jal         func_19C5E0
label_19c4b4:
    if (ctx->pc == 0x19C4B4u) {
        ctx->pc = 0x19C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4B0u;
        // 0x19c4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4B8u;
        goto label_19c4b8;
    }
    ctx->pc = 0x19C4B0u;
    SET_GPR_U32(ctx, 31, 0x19C4B8u);
    ctx->pc = 0x19C4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4B0u;
    // 0x19c4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C5E0u, 0x19C4B0u, 0x19C4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C4B8u;
label_19c4b8:
    // 0x19c4b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_19c4bc:
    if (ctx->pc == 0x19C4BCu) {
        ctx->pc = 0x19C4C0u;
        goto label_19c4c0;
    }
    ctx->pc = 0x19C4B8u;
    {
        const bool branch_taken_0x19c4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c4b8) {
            ctx->pc = 0x19C4C4u;
            goto label_19c4c4;
        }
    }
    ctx->pc = 0x19C4C0u;
label_19c4c0:
    // 0x19c4c0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19c4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_19c4c4:
    // 0x19c4c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c4c8:
    // 0x19c4c8: 0xc067188  jal         func_19C620
label_19c4cc:
    if (ctx->pc == 0x19C4CCu) {
        ctx->pc = 0x19C4D0u;
        goto label_19c4d0;
    }
    ctx->pc = 0x19C4C8u;
    SET_GPR_U32(ctx, 31, 0x19C4D0u);
    ctx->pc = 0x19C620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C620u, 0x19C4C8u, 0x19C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C4D0u;
label_19c4d0:
    // 0x19c4d0: 0xc0671cc  jal         func_19C730
label_19c4d4:
    if (ctx->pc == 0x19C4D4u) {
        ctx->pc = 0x19C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4D0u;
        // 0x19c4d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4D8u;
        goto label_19c4d8;
    }
    ctx->pc = 0x19C4D0u;
    SET_GPR_U32(ctx, 31, 0x19C4D8u);
    ctx->pc = 0x19C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4D0u;
    // 0x19c4d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C730u, 0x19C4D0u, 0x19C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C4D8u;
label_19c4d8:
    // 0x19c4d8: 0xc067310  jal         func_19CC40
label_19c4dc:
    if (ctx->pc == 0x19C4DCu) {
        ctx->pc = 0x19C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4D8u;
        // 0x19c4dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4E0u;
        goto label_19c4e0;
    }
    ctx->pc = 0x19C4D8u;
    SET_GPR_U32(ctx, 31, 0x19C4E0u);
    ctx->pc = 0x19C4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4D8u;
    // 0x19c4dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CC40u, 0x19C4D8u, 0x19C4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C4E0u;
label_19c4e0:
    // 0x19c4e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19c4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19c4e4:
    // 0x19c4e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19c4e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19c4e8:
    // 0x19c4e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19c4e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19c4ec:
    // 0x19c4ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19c4ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19c4f0:
    // 0x19c4f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c4f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19c4f4:
    // 0x19c4f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19c4f8:
    // 0x19c4f8: 0x3e00008  jr          $ra
label_19c4fc:
    if (ctx->pc == 0x19C4FCu) {
        ctx->pc = 0x19C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4F8u;
        // 0x19c4fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C500u;
        goto label_fallthrough_0x19c4f8;
    }
    ctx->pc = 0x19C4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4F8u;
        // 0x19c4fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19c4f8:
    ctx->pc = 0x19C500u;
}
