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

// Function: FUN_001a85e0
// Address: 0x1a85e0 - 0x1a9300
void FUN_001a85e0_0x1a85e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a85e0_0x1a85e0");
#endif

    switch (ctx->pc) {
        case 0x1a85e0u: goto label_1a85e0;
        case 0x1a85e4u: goto label_1a85e4;
        case 0x1a85e8u: goto label_1a85e8;
        case 0x1a85ecu: goto label_1a85ec;
        case 0x1a85f0u: goto label_1a85f0;
        case 0x1a85f4u: goto label_1a85f4;
        case 0x1a85f8u: goto label_1a85f8;
        case 0x1a85fcu: goto label_1a85fc;
        case 0x1a8600u: goto label_1a8600;
        case 0x1a8604u: goto label_1a8604;
        case 0x1a8608u: goto label_1a8608;
        case 0x1a860cu: goto label_1a860c;
        case 0x1a8610u: goto label_1a8610;
        case 0x1a8614u: goto label_1a8614;
        case 0x1a8618u: goto label_1a8618;
        case 0x1a861cu: goto label_1a861c;
        case 0x1a8620u: goto label_1a8620;
        case 0x1a8624u: goto label_1a8624;
        case 0x1a8628u: goto label_1a8628;
        case 0x1a862cu: goto label_1a862c;
        case 0x1a8630u: goto label_1a8630;
        case 0x1a8634u: goto label_1a8634;
        case 0x1a8638u: goto label_1a8638;
        case 0x1a863cu: goto label_1a863c;
        case 0x1a8640u: goto label_1a8640;
        case 0x1a8644u: goto label_1a8644;
        case 0x1a8648u: goto label_1a8648;
        case 0x1a864cu: goto label_1a864c;
        case 0x1a8650u: goto label_1a8650;
        case 0x1a8654u: goto label_1a8654;
        case 0x1a8658u: goto label_1a8658;
        case 0x1a865cu: goto label_1a865c;
        case 0x1a8660u: goto label_1a8660;
        case 0x1a8664u: goto label_1a8664;
        case 0x1a8668u: goto label_1a8668;
        case 0x1a866cu: goto label_1a866c;
        case 0x1a8670u: goto label_1a8670;
        case 0x1a8674u: goto label_1a8674;
        case 0x1a8678u: goto label_1a8678;
        case 0x1a867cu: goto label_1a867c;
        case 0x1a8680u: goto label_1a8680;
        case 0x1a8684u: goto label_1a8684;
        case 0x1a8688u: goto label_1a8688;
        case 0x1a868cu: goto label_1a868c;
        case 0x1a8690u: goto label_1a8690;
        case 0x1a8694u: goto label_1a8694;
        case 0x1a8698u: goto label_1a8698;
        case 0x1a869cu: goto label_1a869c;
        case 0x1a86a0u: goto label_1a86a0;
        case 0x1a86a4u: goto label_1a86a4;
        case 0x1a86a8u: goto label_1a86a8;
        case 0x1a86acu: goto label_1a86ac;
        case 0x1a86b0u: goto label_1a86b0;
        case 0x1a86b4u: goto label_1a86b4;
        case 0x1a86b8u: goto label_1a86b8;
        case 0x1a86bcu: goto label_1a86bc;
        case 0x1a86c0u: goto label_1a86c0;
        case 0x1a86c4u: goto label_1a86c4;
        case 0x1a86c8u: goto label_1a86c8;
        case 0x1a86ccu: goto label_1a86cc;
        case 0x1a86d0u: goto label_1a86d0;
        case 0x1a86d4u: goto label_1a86d4;
        case 0x1a86d8u: goto label_1a86d8;
        case 0x1a86dcu: goto label_1a86dc;
        case 0x1a86e0u: goto label_1a86e0;
        case 0x1a86e4u: goto label_1a86e4;
        case 0x1a86e8u: goto label_1a86e8;
        case 0x1a86ecu: goto label_1a86ec;
        case 0x1a86f0u: goto label_1a86f0;
        case 0x1a86f4u: goto label_1a86f4;
        case 0x1a86f8u: goto label_1a86f8;
        case 0x1a86fcu: goto label_1a86fc;
        case 0x1a8700u: goto label_1a8700;
        case 0x1a8704u: goto label_1a8704;
        case 0x1a8708u: goto label_1a8708;
        case 0x1a870cu: goto label_1a870c;
        case 0x1a8710u: goto label_1a8710;
        case 0x1a8714u: goto label_1a8714;
        case 0x1a8718u: goto label_1a8718;
        case 0x1a871cu: goto label_1a871c;
        case 0x1a8720u: goto label_1a8720;
        case 0x1a8724u: goto label_1a8724;
        case 0x1a8728u: goto label_1a8728;
        case 0x1a872cu: goto label_1a872c;
        case 0x1a8730u: goto label_1a8730;
        case 0x1a8734u: goto label_1a8734;
        case 0x1a8738u: goto label_1a8738;
        case 0x1a873cu: goto label_1a873c;
        case 0x1a8740u: goto label_1a8740;
        case 0x1a8744u: goto label_1a8744;
        case 0x1a8748u: goto label_1a8748;
        case 0x1a874cu: goto label_1a874c;
        case 0x1a8750u: goto label_1a8750;
        case 0x1a8754u: goto label_1a8754;
        case 0x1a8758u: goto label_1a8758;
        case 0x1a875cu: goto label_1a875c;
        case 0x1a8760u: goto label_1a8760;
        case 0x1a8764u: goto label_1a8764;
        case 0x1a8768u: goto label_1a8768;
        case 0x1a876cu: goto label_1a876c;
        case 0x1a8770u: goto label_1a8770;
        case 0x1a8774u: goto label_1a8774;
        case 0x1a8778u: goto label_1a8778;
        case 0x1a877cu: goto label_1a877c;
        case 0x1a8780u: goto label_1a8780;
        case 0x1a8784u: goto label_1a8784;
        case 0x1a8788u: goto label_1a8788;
        case 0x1a878cu: goto label_1a878c;
        case 0x1a8790u: goto label_1a8790;
        case 0x1a8794u: goto label_1a8794;
        case 0x1a8798u: goto label_1a8798;
        case 0x1a879cu: goto label_1a879c;
        case 0x1a87a0u: goto label_1a87a0;
        case 0x1a87a4u: goto label_1a87a4;
        case 0x1a87a8u: goto label_1a87a8;
        case 0x1a87acu: goto label_1a87ac;
        case 0x1a87b0u: goto label_1a87b0;
        case 0x1a87b4u: goto label_1a87b4;
        case 0x1a87b8u: goto label_1a87b8;
        case 0x1a87bcu: goto label_1a87bc;
        case 0x1a87c0u: goto label_1a87c0;
        case 0x1a87c4u: goto label_1a87c4;
        case 0x1a87c8u: goto label_1a87c8;
        case 0x1a87ccu: goto label_1a87cc;
        case 0x1a87d0u: goto label_1a87d0;
        case 0x1a87d4u: goto label_1a87d4;
        case 0x1a87d8u: goto label_1a87d8;
        case 0x1a87dcu: goto label_1a87dc;
        case 0x1a87e0u: goto label_1a87e0;
        case 0x1a87e4u: goto label_1a87e4;
        case 0x1a87e8u: goto label_1a87e8;
        case 0x1a87ecu: goto label_1a87ec;
        case 0x1a87f0u: goto label_1a87f0;
        case 0x1a87f4u: goto label_1a87f4;
        case 0x1a87f8u: goto label_1a87f8;
        case 0x1a87fcu: goto label_1a87fc;
        case 0x1a8800u: goto label_1a8800;
        case 0x1a8804u: goto label_1a8804;
        case 0x1a8808u: goto label_1a8808;
        case 0x1a880cu: goto label_1a880c;
        case 0x1a8810u: goto label_1a8810;
        case 0x1a8814u: goto label_1a8814;
        case 0x1a8818u: goto label_1a8818;
        case 0x1a881cu: goto label_1a881c;
        case 0x1a8820u: goto label_1a8820;
        case 0x1a8824u: goto label_1a8824;
        case 0x1a8828u: goto label_1a8828;
        case 0x1a882cu: goto label_1a882c;
        case 0x1a8830u: goto label_1a8830;
        case 0x1a8834u: goto label_1a8834;
        case 0x1a8838u: goto label_1a8838;
        case 0x1a883cu: goto label_1a883c;
        case 0x1a8840u: goto label_1a8840;
        case 0x1a8844u: goto label_1a8844;
        case 0x1a8848u: goto label_1a8848;
        case 0x1a884cu: goto label_1a884c;
        case 0x1a8850u: goto label_1a8850;
        case 0x1a8854u: goto label_1a8854;
        case 0x1a8858u: goto label_1a8858;
        case 0x1a885cu: goto label_1a885c;
        case 0x1a8860u: goto label_1a8860;
        case 0x1a8864u: goto label_1a8864;
        case 0x1a8868u: goto label_1a8868;
        case 0x1a886cu: goto label_1a886c;
        case 0x1a8870u: goto label_1a8870;
        case 0x1a8874u: goto label_1a8874;
        case 0x1a8878u: goto label_1a8878;
        case 0x1a887cu: goto label_1a887c;
        case 0x1a8880u: goto label_1a8880;
        case 0x1a8884u: goto label_1a8884;
        case 0x1a8888u: goto label_1a8888;
        case 0x1a888cu: goto label_1a888c;
        case 0x1a8890u: goto label_1a8890;
        case 0x1a8894u: goto label_1a8894;
        case 0x1a8898u: goto label_1a8898;
        case 0x1a889cu: goto label_1a889c;
        case 0x1a88a0u: goto label_1a88a0;
        case 0x1a88a4u: goto label_1a88a4;
        case 0x1a88a8u: goto label_1a88a8;
        case 0x1a88acu: goto label_1a88ac;
        case 0x1a88b0u: goto label_1a88b0;
        case 0x1a88b4u: goto label_1a88b4;
        case 0x1a88b8u: goto label_1a88b8;
        case 0x1a88bcu: goto label_1a88bc;
        case 0x1a88c0u: goto label_1a88c0;
        case 0x1a88c4u: goto label_1a88c4;
        case 0x1a88c8u: goto label_1a88c8;
        case 0x1a88ccu: goto label_1a88cc;
        case 0x1a88d0u: goto label_1a88d0;
        case 0x1a88d4u: goto label_1a88d4;
        case 0x1a88d8u: goto label_1a88d8;
        case 0x1a88dcu: goto label_1a88dc;
        case 0x1a88e0u: goto label_1a88e0;
        case 0x1a88e4u: goto label_1a88e4;
        case 0x1a88e8u: goto label_1a88e8;
        case 0x1a88ecu: goto label_1a88ec;
        case 0x1a88f0u: goto label_1a88f0;
        case 0x1a88f4u: goto label_1a88f4;
        case 0x1a88f8u: goto label_1a88f8;
        case 0x1a88fcu: goto label_1a88fc;
        case 0x1a8900u: goto label_1a8900;
        case 0x1a8904u: goto label_1a8904;
        case 0x1a8908u: goto label_1a8908;
        case 0x1a890cu: goto label_1a890c;
        case 0x1a8910u: goto label_1a8910;
        case 0x1a8914u: goto label_1a8914;
        case 0x1a8918u: goto label_1a8918;
        case 0x1a891cu: goto label_1a891c;
        case 0x1a8920u: goto label_1a8920;
        case 0x1a8924u: goto label_1a8924;
        case 0x1a8928u: goto label_1a8928;
        case 0x1a892cu: goto label_1a892c;
        case 0x1a8930u: goto label_1a8930;
        case 0x1a8934u: goto label_1a8934;
        case 0x1a8938u: goto label_1a8938;
        case 0x1a893cu: goto label_1a893c;
        case 0x1a8940u: goto label_1a8940;
        case 0x1a8944u: goto label_1a8944;
        case 0x1a8948u: goto label_1a8948;
        case 0x1a894cu: goto label_1a894c;
        case 0x1a8950u: goto label_1a8950;
        case 0x1a8954u: goto label_1a8954;
        case 0x1a8958u: goto label_1a8958;
        case 0x1a895cu: goto label_1a895c;
        case 0x1a8960u: goto label_1a8960;
        case 0x1a8964u: goto label_1a8964;
        case 0x1a8968u: goto label_1a8968;
        case 0x1a896cu: goto label_1a896c;
        case 0x1a8970u: goto label_1a8970;
        case 0x1a8974u: goto label_1a8974;
        case 0x1a8978u: goto label_1a8978;
        case 0x1a897cu: goto label_1a897c;
        case 0x1a8980u: goto label_1a8980;
        case 0x1a8984u: goto label_1a8984;
        case 0x1a8988u: goto label_1a8988;
        case 0x1a898cu: goto label_1a898c;
        case 0x1a8990u: goto label_1a8990;
        case 0x1a8994u: goto label_1a8994;
        case 0x1a8998u: goto label_1a8998;
        case 0x1a899cu: goto label_1a899c;
        case 0x1a89a0u: goto label_1a89a0;
        case 0x1a89a4u: goto label_1a89a4;
        case 0x1a89a8u: goto label_1a89a8;
        case 0x1a89acu: goto label_1a89ac;
        case 0x1a89b0u: goto label_1a89b0;
        case 0x1a89b4u: goto label_1a89b4;
        case 0x1a89b8u: goto label_1a89b8;
        case 0x1a89bcu: goto label_1a89bc;
        case 0x1a89c0u: goto label_1a89c0;
        case 0x1a89c4u: goto label_1a89c4;
        case 0x1a89c8u: goto label_1a89c8;
        case 0x1a89ccu: goto label_1a89cc;
        case 0x1a89d0u: goto label_1a89d0;
        case 0x1a89d4u: goto label_1a89d4;
        case 0x1a89d8u: goto label_1a89d8;
        case 0x1a89dcu: goto label_1a89dc;
        case 0x1a89e0u: goto label_1a89e0;
        case 0x1a89e4u: goto label_1a89e4;
        case 0x1a89e8u: goto label_1a89e8;
        case 0x1a89ecu: goto label_1a89ec;
        case 0x1a89f0u: goto label_1a89f0;
        case 0x1a89f4u: goto label_1a89f4;
        case 0x1a89f8u: goto label_1a89f8;
        case 0x1a89fcu: goto label_1a89fc;
        case 0x1a8a00u: goto label_1a8a00;
        case 0x1a8a04u: goto label_1a8a04;
        case 0x1a8a08u: goto label_1a8a08;
        case 0x1a8a0cu: goto label_1a8a0c;
        case 0x1a8a10u: goto label_1a8a10;
        case 0x1a8a14u: goto label_1a8a14;
        case 0x1a8a18u: goto label_1a8a18;
        case 0x1a8a1cu: goto label_1a8a1c;
        case 0x1a8a20u: goto label_1a8a20;
        case 0x1a8a24u: goto label_1a8a24;
        case 0x1a8a28u: goto label_1a8a28;
        case 0x1a8a2cu: goto label_1a8a2c;
        case 0x1a8a30u: goto label_1a8a30;
        case 0x1a8a34u: goto label_1a8a34;
        case 0x1a8a38u: goto label_1a8a38;
        case 0x1a8a3cu: goto label_1a8a3c;
        case 0x1a8a40u: goto label_1a8a40;
        case 0x1a8a44u: goto label_1a8a44;
        case 0x1a8a48u: goto label_1a8a48;
        case 0x1a8a4cu: goto label_1a8a4c;
        case 0x1a8a50u: goto label_1a8a50;
        case 0x1a8a54u: goto label_1a8a54;
        case 0x1a8a58u: goto label_1a8a58;
        case 0x1a8a5cu: goto label_1a8a5c;
        case 0x1a8a60u: goto label_1a8a60;
        case 0x1a8a64u: goto label_1a8a64;
        case 0x1a8a68u: goto label_1a8a68;
        case 0x1a8a6cu: goto label_1a8a6c;
        case 0x1a8a70u: goto label_1a8a70;
        case 0x1a8a74u: goto label_1a8a74;
        case 0x1a8a78u: goto label_1a8a78;
        case 0x1a8a7cu: goto label_1a8a7c;
        case 0x1a8a80u: goto label_1a8a80;
        case 0x1a8a84u: goto label_1a8a84;
        case 0x1a8a88u: goto label_1a8a88;
        case 0x1a8a8cu: goto label_1a8a8c;
        case 0x1a8a90u: goto label_1a8a90;
        case 0x1a8a94u: goto label_1a8a94;
        case 0x1a8a98u: goto label_1a8a98;
        case 0x1a8a9cu: goto label_1a8a9c;
        case 0x1a8aa0u: goto label_1a8aa0;
        case 0x1a8aa4u: goto label_1a8aa4;
        case 0x1a8aa8u: goto label_1a8aa8;
        case 0x1a8aacu: goto label_1a8aac;
        case 0x1a8ab0u: goto label_1a8ab0;
        case 0x1a8ab4u: goto label_1a8ab4;
        case 0x1a8ab8u: goto label_1a8ab8;
        case 0x1a8abcu: goto label_1a8abc;
        case 0x1a8ac0u: goto label_1a8ac0;
        case 0x1a8ac4u: goto label_1a8ac4;
        case 0x1a8ac8u: goto label_1a8ac8;
        case 0x1a8accu: goto label_1a8acc;
        case 0x1a8ad0u: goto label_1a8ad0;
        case 0x1a8ad4u: goto label_1a8ad4;
        case 0x1a8ad8u: goto label_1a8ad8;
        case 0x1a8adcu: goto label_1a8adc;
        case 0x1a8ae0u: goto label_1a8ae0;
        case 0x1a8ae4u: goto label_1a8ae4;
        case 0x1a8ae8u: goto label_1a8ae8;
        case 0x1a8aecu: goto label_1a8aec;
        case 0x1a8af0u: goto label_1a8af0;
        case 0x1a8af4u: goto label_1a8af4;
        case 0x1a8af8u: goto label_1a8af8;
        case 0x1a8afcu: goto label_1a8afc;
        case 0x1a8b00u: goto label_1a8b00;
        case 0x1a8b04u: goto label_1a8b04;
        case 0x1a8b08u: goto label_1a8b08;
        case 0x1a8b0cu: goto label_1a8b0c;
        case 0x1a8b10u: goto label_1a8b10;
        case 0x1a8b14u: goto label_1a8b14;
        case 0x1a8b18u: goto label_1a8b18;
        case 0x1a8b1cu: goto label_1a8b1c;
        case 0x1a8b20u: goto label_1a8b20;
        case 0x1a8b24u: goto label_1a8b24;
        case 0x1a8b28u: goto label_1a8b28;
        case 0x1a8b2cu: goto label_1a8b2c;
        case 0x1a8b30u: goto label_1a8b30;
        case 0x1a8b34u: goto label_1a8b34;
        case 0x1a8b38u: goto label_1a8b38;
        case 0x1a8b3cu: goto label_1a8b3c;
        case 0x1a8b40u: goto label_1a8b40;
        case 0x1a8b44u: goto label_1a8b44;
        case 0x1a8b48u: goto label_1a8b48;
        case 0x1a8b4cu: goto label_1a8b4c;
        case 0x1a8b50u: goto label_1a8b50;
        case 0x1a8b54u: goto label_1a8b54;
        case 0x1a8b58u: goto label_1a8b58;
        case 0x1a8b5cu: goto label_1a8b5c;
        case 0x1a8b60u: goto label_1a8b60;
        case 0x1a8b64u: goto label_1a8b64;
        case 0x1a8b68u: goto label_1a8b68;
        case 0x1a8b6cu: goto label_1a8b6c;
        case 0x1a8b70u: goto label_1a8b70;
        case 0x1a8b74u: goto label_1a8b74;
        case 0x1a8b78u: goto label_1a8b78;
        case 0x1a8b7cu: goto label_1a8b7c;
        case 0x1a8b80u: goto label_1a8b80;
        case 0x1a8b84u: goto label_1a8b84;
        case 0x1a8b88u: goto label_1a8b88;
        case 0x1a8b8cu: goto label_1a8b8c;
        case 0x1a8b90u: goto label_1a8b90;
        case 0x1a8b94u: goto label_1a8b94;
        case 0x1a8b98u: goto label_1a8b98;
        case 0x1a8b9cu: goto label_1a8b9c;
        case 0x1a8ba0u: goto label_1a8ba0;
        case 0x1a8ba4u: goto label_1a8ba4;
        case 0x1a8ba8u: goto label_1a8ba8;
        case 0x1a8bacu: goto label_1a8bac;
        case 0x1a8bb0u: goto label_1a8bb0;
        case 0x1a8bb4u: goto label_1a8bb4;
        case 0x1a8bb8u: goto label_1a8bb8;
        case 0x1a8bbcu: goto label_1a8bbc;
        case 0x1a8bc0u: goto label_1a8bc0;
        case 0x1a8bc4u: goto label_1a8bc4;
        case 0x1a8bc8u: goto label_1a8bc8;
        case 0x1a8bccu: goto label_1a8bcc;
        case 0x1a8bd0u: goto label_1a8bd0;
        case 0x1a8bd4u: goto label_1a8bd4;
        case 0x1a8bd8u: goto label_1a8bd8;
        case 0x1a8bdcu: goto label_1a8bdc;
        case 0x1a8be0u: goto label_1a8be0;
        case 0x1a8be4u: goto label_1a8be4;
        case 0x1a8be8u: goto label_1a8be8;
        case 0x1a8becu: goto label_1a8bec;
        case 0x1a8bf0u: goto label_1a8bf0;
        case 0x1a8bf4u: goto label_1a8bf4;
        case 0x1a8bf8u: goto label_1a8bf8;
        case 0x1a8bfcu: goto label_1a8bfc;
        case 0x1a8c00u: goto label_1a8c00;
        case 0x1a8c04u: goto label_1a8c04;
        case 0x1a8c08u: goto label_1a8c08;
        case 0x1a8c0cu: goto label_1a8c0c;
        case 0x1a8c10u: goto label_1a8c10;
        case 0x1a8c14u: goto label_1a8c14;
        case 0x1a8c18u: goto label_1a8c18;
        case 0x1a8c1cu: goto label_1a8c1c;
        case 0x1a8c20u: goto label_1a8c20;
        case 0x1a8c24u: goto label_1a8c24;
        case 0x1a8c28u: goto label_1a8c28;
        case 0x1a8c2cu: goto label_1a8c2c;
        case 0x1a8c30u: goto label_1a8c30;
        case 0x1a8c34u: goto label_1a8c34;
        case 0x1a8c38u: goto label_1a8c38;
        case 0x1a8c3cu: goto label_1a8c3c;
        case 0x1a8c40u: goto label_1a8c40;
        case 0x1a8c44u: goto label_1a8c44;
        case 0x1a8c48u: goto label_1a8c48;
        case 0x1a8c4cu: goto label_1a8c4c;
        case 0x1a8c50u: goto label_1a8c50;
        case 0x1a8c54u: goto label_1a8c54;
        case 0x1a8c58u: goto label_1a8c58;
        case 0x1a8c5cu: goto label_1a8c5c;
        case 0x1a8c60u: goto label_1a8c60;
        case 0x1a8c64u: goto label_1a8c64;
        case 0x1a8c68u: goto label_1a8c68;
        case 0x1a8c6cu: goto label_1a8c6c;
        case 0x1a8c70u: goto label_1a8c70;
        case 0x1a8c74u: goto label_1a8c74;
        case 0x1a8c78u: goto label_1a8c78;
        case 0x1a8c7cu: goto label_1a8c7c;
        case 0x1a8c80u: goto label_1a8c80;
        case 0x1a8c84u: goto label_1a8c84;
        case 0x1a8c88u: goto label_1a8c88;
        case 0x1a8c8cu: goto label_1a8c8c;
        case 0x1a8c90u: goto label_1a8c90;
        case 0x1a8c94u: goto label_1a8c94;
        case 0x1a8c98u: goto label_1a8c98;
        case 0x1a8c9cu: goto label_1a8c9c;
        case 0x1a8ca0u: goto label_1a8ca0;
        case 0x1a8ca4u: goto label_1a8ca4;
        case 0x1a8ca8u: goto label_1a8ca8;
        case 0x1a8cacu: goto label_1a8cac;
        case 0x1a8cb0u: goto label_1a8cb0;
        case 0x1a8cb4u: goto label_1a8cb4;
        case 0x1a8cb8u: goto label_1a8cb8;
        case 0x1a8cbcu: goto label_1a8cbc;
        case 0x1a8cc0u: goto label_1a8cc0;
        case 0x1a8cc4u: goto label_1a8cc4;
        case 0x1a8cc8u: goto label_1a8cc8;
        case 0x1a8cccu: goto label_1a8ccc;
        case 0x1a8cd0u: goto label_1a8cd0;
        case 0x1a8cd4u: goto label_1a8cd4;
        case 0x1a8cd8u: goto label_1a8cd8;
        case 0x1a8cdcu: goto label_1a8cdc;
        case 0x1a8ce0u: goto label_1a8ce0;
        case 0x1a8ce4u: goto label_1a8ce4;
        case 0x1a8ce8u: goto label_1a8ce8;
        case 0x1a8cecu: goto label_1a8cec;
        case 0x1a8cf0u: goto label_1a8cf0;
        case 0x1a8cf4u: goto label_1a8cf4;
        case 0x1a8cf8u: goto label_1a8cf8;
        case 0x1a8cfcu: goto label_1a8cfc;
        case 0x1a8d00u: goto label_1a8d00;
        case 0x1a8d04u: goto label_1a8d04;
        case 0x1a8d08u: goto label_1a8d08;
        case 0x1a8d0cu: goto label_1a8d0c;
        case 0x1a8d10u: goto label_1a8d10;
        case 0x1a8d14u: goto label_1a8d14;
        case 0x1a8d18u: goto label_1a8d18;
        case 0x1a8d1cu: goto label_1a8d1c;
        case 0x1a8d20u: goto label_1a8d20;
        case 0x1a8d24u: goto label_1a8d24;
        case 0x1a8d28u: goto label_1a8d28;
        case 0x1a8d2cu: goto label_1a8d2c;
        case 0x1a8d30u: goto label_1a8d30;
        case 0x1a8d34u: goto label_1a8d34;
        case 0x1a8d38u: goto label_1a8d38;
        case 0x1a8d3cu: goto label_1a8d3c;
        case 0x1a8d40u: goto label_1a8d40;
        case 0x1a8d44u: goto label_1a8d44;
        case 0x1a8d48u: goto label_1a8d48;
        case 0x1a8d4cu: goto label_1a8d4c;
        case 0x1a8d50u: goto label_1a8d50;
        case 0x1a8d54u: goto label_1a8d54;
        case 0x1a8d58u: goto label_1a8d58;
        case 0x1a8d5cu: goto label_1a8d5c;
        case 0x1a8d60u: goto label_1a8d60;
        case 0x1a8d64u: goto label_1a8d64;
        case 0x1a8d68u: goto label_1a8d68;
        case 0x1a8d6cu: goto label_1a8d6c;
        case 0x1a8d70u: goto label_1a8d70;
        case 0x1a8d74u: goto label_1a8d74;
        case 0x1a8d78u: goto label_1a8d78;
        case 0x1a8d7cu: goto label_1a8d7c;
        case 0x1a8d80u: goto label_1a8d80;
        case 0x1a8d84u: goto label_1a8d84;
        case 0x1a8d88u: goto label_1a8d88;
        case 0x1a8d8cu: goto label_1a8d8c;
        case 0x1a8d90u: goto label_1a8d90;
        case 0x1a8d94u: goto label_1a8d94;
        case 0x1a8d98u: goto label_1a8d98;
        case 0x1a8d9cu: goto label_1a8d9c;
        case 0x1a8da0u: goto label_1a8da0;
        case 0x1a8da4u: goto label_1a8da4;
        case 0x1a8da8u: goto label_1a8da8;
        case 0x1a8dacu: goto label_1a8dac;
        case 0x1a8db0u: goto label_1a8db0;
        case 0x1a8db4u: goto label_1a8db4;
        case 0x1a8db8u: goto label_1a8db8;
        case 0x1a8dbcu: goto label_1a8dbc;
        case 0x1a8dc0u: goto label_1a8dc0;
        case 0x1a8dc4u: goto label_1a8dc4;
        case 0x1a8dc8u: goto label_1a8dc8;
        case 0x1a8dccu: goto label_1a8dcc;
        case 0x1a8dd0u: goto label_1a8dd0;
        case 0x1a8dd4u: goto label_1a8dd4;
        case 0x1a8dd8u: goto label_1a8dd8;
        case 0x1a8ddcu: goto label_1a8ddc;
        case 0x1a8de0u: goto label_1a8de0;
        case 0x1a8de4u: goto label_1a8de4;
        case 0x1a8de8u: goto label_1a8de8;
        case 0x1a8decu: goto label_1a8dec;
        case 0x1a8df0u: goto label_1a8df0;
        case 0x1a8df4u: goto label_1a8df4;
        case 0x1a8df8u: goto label_1a8df8;
        case 0x1a8dfcu: goto label_1a8dfc;
        case 0x1a8e00u: goto label_1a8e00;
        case 0x1a8e04u: goto label_1a8e04;
        case 0x1a8e08u: goto label_1a8e08;
        case 0x1a8e0cu: goto label_1a8e0c;
        case 0x1a8e10u: goto label_1a8e10;
        case 0x1a8e14u: goto label_1a8e14;
        case 0x1a8e18u: goto label_1a8e18;
        case 0x1a8e1cu: goto label_1a8e1c;
        case 0x1a8e20u: goto label_1a8e20;
        case 0x1a8e24u: goto label_1a8e24;
        case 0x1a8e28u: goto label_1a8e28;
        case 0x1a8e2cu: goto label_1a8e2c;
        case 0x1a8e30u: goto label_1a8e30;
        case 0x1a8e34u: goto label_1a8e34;
        case 0x1a8e38u: goto label_1a8e38;
        case 0x1a8e3cu: goto label_1a8e3c;
        case 0x1a8e40u: goto label_1a8e40;
        case 0x1a8e44u: goto label_1a8e44;
        case 0x1a8e48u: goto label_1a8e48;
        case 0x1a8e4cu: goto label_1a8e4c;
        case 0x1a8e50u: goto label_1a8e50;
        case 0x1a8e54u: goto label_1a8e54;
        case 0x1a8e58u: goto label_1a8e58;
        case 0x1a8e5cu: goto label_1a8e5c;
        case 0x1a8e60u: goto label_1a8e60;
        case 0x1a8e64u: goto label_1a8e64;
        case 0x1a8e68u: goto label_1a8e68;
        case 0x1a8e6cu: goto label_1a8e6c;
        case 0x1a8e70u: goto label_1a8e70;
        case 0x1a8e74u: goto label_1a8e74;
        case 0x1a8e78u: goto label_1a8e78;
        case 0x1a8e7cu: goto label_1a8e7c;
        case 0x1a8e80u: goto label_1a8e80;
        case 0x1a8e84u: goto label_1a8e84;
        case 0x1a8e88u: goto label_1a8e88;
        case 0x1a8e8cu: goto label_1a8e8c;
        case 0x1a8e90u: goto label_1a8e90;
        case 0x1a8e94u: goto label_1a8e94;
        case 0x1a8e98u: goto label_1a8e98;
        case 0x1a8e9cu: goto label_1a8e9c;
        case 0x1a8ea0u: goto label_1a8ea0;
        case 0x1a8ea4u: goto label_1a8ea4;
        case 0x1a8ea8u: goto label_1a8ea8;
        case 0x1a8eacu: goto label_1a8eac;
        case 0x1a8eb0u: goto label_1a8eb0;
        case 0x1a8eb4u: goto label_1a8eb4;
        case 0x1a8eb8u: goto label_1a8eb8;
        case 0x1a8ebcu: goto label_1a8ebc;
        case 0x1a8ec0u: goto label_1a8ec0;
        case 0x1a8ec4u: goto label_1a8ec4;
        case 0x1a8ec8u: goto label_1a8ec8;
        case 0x1a8eccu: goto label_1a8ecc;
        case 0x1a8ed0u: goto label_1a8ed0;
        case 0x1a8ed4u: goto label_1a8ed4;
        case 0x1a8ed8u: goto label_1a8ed8;
        case 0x1a8edcu: goto label_1a8edc;
        case 0x1a8ee0u: goto label_1a8ee0;
        case 0x1a8ee4u: goto label_1a8ee4;
        case 0x1a8ee8u: goto label_1a8ee8;
        case 0x1a8eecu: goto label_1a8eec;
        case 0x1a8ef0u: goto label_1a8ef0;
        case 0x1a8ef4u: goto label_1a8ef4;
        case 0x1a8ef8u: goto label_1a8ef8;
        case 0x1a8efcu: goto label_1a8efc;
        case 0x1a8f00u: goto label_1a8f00;
        case 0x1a8f04u: goto label_1a8f04;
        case 0x1a8f08u: goto label_1a8f08;
        case 0x1a8f0cu: goto label_1a8f0c;
        case 0x1a8f10u: goto label_1a8f10;
        case 0x1a8f14u: goto label_1a8f14;
        case 0x1a8f18u: goto label_1a8f18;
        case 0x1a8f1cu: goto label_1a8f1c;
        case 0x1a8f20u: goto label_1a8f20;
        case 0x1a8f24u: goto label_1a8f24;
        case 0x1a8f28u: goto label_1a8f28;
        case 0x1a8f2cu: goto label_1a8f2c;
        case 0x1a8f30u: goto label_1a8f30;
        case 0x1a8f34u: goto label_1a8f34;
        case 0x1a8f38u: goto label_1a8f38;
        case 0x1a8f3cu: goto label_1a8f3c;
        case 0x1a8f40u: goto label_1a8f40;
        case 0x1a8f44u: goto label_1a8f44;
        case 0x1a8f48u: goto label_1a8f48;
        case 0x1a8f4cu: goto label_1a8f4c;
        case 0x1a8f50u: goto label_1a8f50;
        case 0x1a8f54u: goto label_1a8f54;
        case 0x1a8f58u: goto label_1a8f58;
        case 0x1a8f5cu: goto label_1a8f5c;
        case 0x1a8f60u: goto label_1a8f60;
        case 0x1a8f64u: goto label_1a8f64;
        case 0x1a8f68u: goto label_1a8f68;
        case 0x1a8f6cu: goto label_1a8f6c;
        case 0x1a8f70u: goto label_1a8f70;
        case 0x1a8f74u: goto label_1a8f74;
        case 0x1a8f78u: goto label_1a8f78;
        case 0x1a8f7cu: goto label_1a8f7c;
        case 0x1a8f80u: goto label_1a8f80;
        case 0x1a8f84u: goto label_1a8f84;
        case 0x1a8f88u: goto label_1a8f88;
        case 0x1a8f8cu: goto label_1a8f8c;
        case 0x1a8f90u: goto label_1a8f90;
        case 0x1a8f94u: goto label_1a8f94;
        case 0x1a8f98u: goto label_1a8f98;
        case 0x1a8f9cu: goto label_1a8f9c;
        case 0x1a8fa0u: goto label_1a8fa0;
        case 0x1a8fa4u: goto label_1a8fa4;
        case 0x1a8fa8u: goto label_1a8fa8;
        case 0x1a8facu: goto label_1a8fac;
        case 0x1a8fb0u: goto label_1a8fb0;
        case 0x1a8fb4u: goto label_1a8fb4;
        case 0x1a8fb8u: goto label_1a8fb8;
        case 0x1a8fbcu: goto label_1a8fbc;
        case 0x1a8fc0u: goto label_1a8fc0;
        case 0x1a8fc4u: goto label_1a8fc4;
        case 0x1a8fc8u: goto label_1a8fc8;
        case 0x1a8fccu: goto label_1a8fcc;
        case 0x1a8fd0u: goto label_1a8fd0;
        case 0x1a8fd4u: goto label_1a8fd4;
        case 0x1a8fd8u: goto label_1a8fd8;
        case 0x1a8fdcu: goto label_1a8fdc;
        case 0x1a8fe0u: goto label_1a8fe0;
        case 0x1a8fe4u: goto label_1a8fe4;
        case 0x1a8fe8u: goto label_1a8fe8;
        case 0x1a8fecu: goto label_1a8fec;
        case 0x1a8ff0u: goto label_1a8ff0;
        case 0x1a8ff4u: goto label_1a8ff4;
        case 0x1a8ff8u: goto label_1a8ff8;
        case 0x1a8ffcu: goto label_1a8ffc;
        case 0x1a9000u: goto label_1a9000;
        case 0x1a9004u: goto label_1a9004;
        case 0x1a9008u: goto label_1a9008;
        case 0x1a900cu: goto label_1a900c;
        case 0x1a9010u: goto label_1a9010;
        case 0x1a9014u: goto label_1a9014;
        case 0x1a9018u: goto label_1a9018;
        case 0x1a901cu: goto label_1a901c;
        case 0x1a9020u: goto label_1a9020;
        case 0x1a9024u: goto label_1a9024;
        case 0x1a9028u: goto label_1a9028;
        case 0x1a902cu: goto label_1a902c;
        case 0x1a9030u: goto label_1a9030;
        case 0x1a9034u: goto label_1a9034;
        case 0x1a9038u: goto label_1a9038;
        case 0x1a903cu: goto label_1a903c;
        case 0x1a9040u: goto label_1a9040;
        case 0x1a9044u: goto label_1a9044;
        case 0x1a9048u: goto label_1a9048;
        case 0x1a904cu: goto label_1a904c;
        case 0x1a9050u: goto label_1a9050;
        case 0x1a9054u: goto label_1a9054;
        case 0x1a9058u: goto label_1a9058;
        case 0x1a905cu: goto label_1a905c;
        case 0x1a9060u: goto label_1a9060;
        case 0x1a9064u: goto label_1a9064;
        case 0x1a9068u: goto label_1a9068;
        case 0x1a906cu: goto label_1a906c;
        case 0x1a9070u: goto label_1a9070;
        case 0x1a9074u: goto label_1a9074;
        case 0x1a9078u: goto label_1a9078;
        case 0x1a907cu: goto label_1a907c;
        case 0x1a9080u: goto label_1a9080;
        case 0x1a9084u: goto label_1a9084;
        case 0x1a9088u: goto label_1a9088;
        case 0x1a908cu: goto label_1a908c;
        case 0x1a9090u: goto label_1a9090;
        case 0x1a9094u: goto label_1a9094;
        case 0x1a9098u: goto label_1a9098;
        case 0x1a909cu: goto label_1a909c;
        case 0x1a90a0u: goto label_1a90a0;
        case 0x1a90a4u: goto label_1a90a4;
        case 0x1a90a8u: goto label_1a90a8;
        case 0x1a90acu: goto label_1a90ac;
        case 0x1a90b0u: goto label_1a90b0;
        case 0x1a90b4u: goto label_1a90b4;
        case 0x1a90b8u: goto label_1a90b8;
        case 0x1a90bcu: goto label_1a90bc;
        case 0x1a90c0u: goto label_1a90c0;
        case 0x1a90c4u: goto label_1a90c4;
        case 0x1a90c8u: goto label_1a90c8;
        case 0x1a90ccu: goto label_1a90cc;
        case 0x1a90d0u: goto label_1a90d0;
        case 0x1a90d4u: goto label_1a90d4;
        case 0x1a90d8u: goto label_1a90d8;
        case 0x1a90dcu: goto label_1a90dc;
        case 0x1a90e0u: goto label_1a90e0;
        case 0x1a90e4u: goto label_1a90e4;
        case 0x1a90e8u: goto label_1a90e8;
        case 0x1a90ecu: goto label_1a90ec;
        case 0x1a90f0u: goto label_1a90f0;
        case 0x1a90f4u: goto label_1a90f4;
        case 0x1a90f8u: goto label_1a90f8;
        case 0x1a90fcu: goto label_1a90fc;
        case 0x1a9100u: goto label_1a9100;
        case 0x1a9104u: goto label_1a9104;
        case 0x1a9108u: goto label_1a9108;
        case 0x1a910cu: goto label_1a910c;
        case 0x1a9110u: goto label_1a9110;
        case 0x1a9114u: goto label_1a9114;
        case 0x1a9118u: goto label_1a9118;
        case 0x1a911cu: goto label_1a911c;
        case 0x1a9120u: goto label_1a9120;
        case 0x1a9124u: goto label_1a9124;
        case 0x1a9128u: goto label_1a9128;
        case 0x1a912cu: goto label_1a912c;
        case 0x1a9130u: goto label_1a9130;
        case 0x1a9134u: goto label_1a9134;
        case 0x1a9138u: goto label_1a9138;
        case 0x1a913cu: goto label_1a913c;
        case 0x1a9140u: goto label_1a9140;
        case 0x1a9144u: goto label_1a9144;
        case 0x1a9148u: goto label_1a9148;
        case 0x1a914cu: goto label_1a914c;
        case 0x1a9150u: goto label_1a9150;
        case 0x1a9154u: goto label_1a9154;
        case 0x1a9158u: goto label_1a9158;
        case 0x1a915cu: goto label_1a915c;
        case 0x1a9160u: goto label_1a9160;
        case 0x1a9164u: goto label_1a9164;
        case 0x1a9168u: goto label_1a9168;
        case 0x1a916cu: goto label_1a916c;
        case 0x1a9170u: goto label_1a9170;
        case 0x1a9174u: goto label_1a9174;
        case 0x1a9178u: goto label_1a9178;
        case 0x1a917cu: goto label_1a917c;
        case 0x1a9180u: goto label_1a9180;
        case 0x1a9184u: goto label_1a9184;
        case 0x1a9188u: goto label_1a9188;
        case 0x1a918cu: goto label_1a918c;
        case 0x1a9190u: goto label_1a9190;
        case 0x1a9194u: goto label_1a9194;
        case 0x1a9198u: goto label_1a9198;
        case 0x1a919cu: goto label_1a919c;
        case 0x1a91a0u: goto label_1a91a0;
        case 0x1a91a4u: goto label_1a91a4;
        case 0x1a91a8u: goto label_1a91a8;
        case 0x1a91acu: goto label_1a91ac;
        case 0x1a91b0u: goto label_1a91b0;
        case 0x1a91b4u: goto label_1a91b4;
        case 0x1a91b8u: goto label_1a91b8;
        case 0x1a91bcu: goto label_1a91bc;
        case 0x1a91c0u: goto label_1a91c0;
        case 0x1a91c4u: goto label_1a91c4;
        case 0x1a91c8u: goto label_1a91c8;
        case 0x1a91ccu: goto label_1a91cc;
        case 0x1a91d0u: goto label_1a91d0;
        case 0x1a91d4u: goto label_1a91d4;
        case 0x1a91d8u: goto label_1a91d8;
        case 0x1a91dcu: goto label_1a91dc;
        case 0x1a91e0u: goto label_1a91e0;
        case 0x1a91e4u: goto label_1a91e4;
        case 0x1a91e8u: goto label_1a91e8;
        case 0x1a91ecu: goto label_1a91ec;
        case 0x1a91f0u: goto label_1a91f0;
        case 0x1a91f4u: goto label_1a91f4;
        case 0x1a91f8u: goto label_1a91f8;
        case 0x1a91fcu: goto label_1a91fc;
        case 0x1a9200u: goto label_1a9200;
        case 0x1a9204u: goto label_1a9204;
        case 0x1a9208u: goto label_1a9208;
        case 0x1a920cu: goto label_1a920c;
        case 0x1a9210u: goto label_1a9210;
        case 0x1a9214u: goto label_1a9214;
        case 0x1a9218u: goto label_1a9218;
        case 0x1a921cu: goto label_1a921c;
        case 0x1a9220u: goto label_1a9220;
        case 0x1a9224u: goto label_1a9224;
        case 0x1a9228u: goto label_1a9228;
        case 0x1a922cu: goto label_1a922c;
        case 0x1a9230u: goto label_1a9230;
        case 0x1a9234u: goto label_1a9234;
        case 0x1a9238u: goto label_1a9238;
        case 0x1a923cu: goto label_1a923c;
        case 0x1a9240u: goto label_1a9240;
        case 0x1a9244u: goto label_1a9244;
        case 0x1a9248u: goto label_1a9248;
        case 0x1a924cu: goto label_1a924c;
        case 0x1a9250u: goto label_1a9250;
        case 0x1a9254u: goto label_1a9254;
        case 0x1a9258u: goto label_1a9258;
        case 0x1a925cu: goto label_1a925c;
        case 0x1a9260u: goto label_1a9260;
        case 0x1a9264u: goto label_1a9264;
        case 0x1a9268u: goto label_1a9268;
        case 0x1a926cu: goto label_1a926c;
        case 0x1a9270u: goto label_1a9270;
        case 0x1a9274u: goto label_1a9274;
        case 0x1a9278u: goto label_1a9278;
        case 0x1a927cu: goto label_1a927c;
        case 0x1a9280u: goto label_1a9280;
        case 0x1a9284u: goto label_1a9284;
        case 0x1a9288u: goto label_1a9288;
        case 0x1a928cu: goto label_1a928c;
        case 0x1a9290u: goto label_1a9290;
        case 0x1a9294u: goto label_1a9294;
        case 0x1a9298u: goto label_1a9298;
        case 0x1a929cu: goto label_1a929c;
        case 0x1a92a0u: goto label_1a92a0;
        case 0x1a92a4u: goto label_1a92a4;
        case 0x1a92a8u: goto label_1a92a8;
        case 0x1a92acu: goto label_1a92ac;
        case 0x1a92b0u: goto label_1a92b0;
        case 0x1a92b4u: goto label_1a92b4;
        case 0x1a92b8u: goto label_1a92b8;
        case 0x1a92bcu: goto label_1a92bc;
        case 0x1a92c0u: goto label_1a92c0;
        case 0x1a92c4u: goto label_1a92c4;
        case 0x1a92c8u: goto label_1a92c8;
        case 0x1a92ccu: goto label_1a92cc;
        case 0x1a92d0u: goto label_1a92d0;
        case 0x1a92d4u: goto label_1a92d4;
        case 0x1a92d8u: goto label_1a92d8;
        case 0x1a92dcu: goto label_1a92dc;
        case 0x1a92e0u: goto label_1a92e0;
        case 0x1a92e4u: goto label_1a92e4;
        case 0x1a92e8u: goto label_1a92e8;
        case 0x1a92ecu: goto label_1a92ec;
        case 0x1a92f0u: goto label_1a92f0;
        case 0x1a92f4u: goto label_1a92f4;
        case 0x1a92f8u: goto label_1a92f8;
        case 0x1a92fcu: goto label_1a92fc;
        default: break;
    }

    ctx->pc = 0x1a85e0u;

label_1a85e0:
    // 0x1a85e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1a85e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1a85e4:
    // 0x1a85e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a85e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1a85e8:
    // 0x1a85e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1a85e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1a85ec:
    // 0x1a85ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a85ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1a85f0:
    // 0x1a85f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a85f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1a85f4:
    // 0x1a85f4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1a85f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a85f8:
    // 0x1a85f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a85f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1a85fc:
    // 0x1a85fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a85fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1a8600:
    // 0x1a8600: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a8600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a8604:
    // 0x1a8604: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a8604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a8608:
    // 0x1a8608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a8608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a860c:
    // 0x1a860c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a860cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a8610:
    // 0x1a8610: 0x8c820664  lw          $v0, 0x664($a0)
    ctx->pc = 0x1a8610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1636)));
label_1a8614:
    // 0x1a8614: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1a8614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a8618:
    // 0x1a8618: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a8618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a861c:
    // 0x1a861c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1a8620:
    if (ctx->pc == 0x1A8620u) {
        ctx->pc = 0x1A8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A861Cu;
        // 0x1a8620: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8624u;
        goto label_1a8624;
    }
    ctx->pc = 0x1A861Cu;
    {
        const bool branch_taken_0x1a861c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A861Cu;
        // 0x1a8620: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a861c) {
            ctx->pc = 0x1A865Cu;
            goto label_1a865c;
        }
    }
    ctx->pc = 0x1A8624u;
label_1a8624:
    // 0x1a8624: 0xc064918  jal         func_192460
label_1a8628:
    if (ctx->pc == 0x1A8628u) {
        ctx->pc = 0x1A8628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8624u;
        // 0x1a8628: 0x8f8580f8  lw          $a1, -0x7F08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A862Cu;
        goto label_1a862c;
    }
    ctx->pc = 0x1A8624u;
    SET_GPR_U32(ctx, 31, 0x1A862Cu);
    ctx->pc = 0x1A8628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8624u;
    // 0x1a8628: 0x8f8580f8  lw          $a1, -0x7F08($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x1A8624u, 0x1A862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A862Cu;
label_1a862c:
    // 0x1a862c: 0x8c430320  lw          $v1, 0x320($v0)
    ctx->pc = 0x1a862cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
label_1a8630:
    // 0x1a8630: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1a8634:
    if (ctx->pc == 0x1A8634u) {
        ctx->pc = 0x1A8634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8630u;
        // 0x1a8634: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8638u;
        goto label_1a8638;
    }
    ctx->pc = 0x1A8630u;
    {
        const bool branch_taken_0x1a8630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8630u;
        // 0x1a8634: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8630) {
            ctx->pc = 0x1A8660u;
            goto label_1a8660;
        }
    }
    ctx->pc = 0x1A8638u;
label_1a8638:
    // 0x1a8638: 0x12800325  beqz        $s4, . + 4 + (0x325 << 2)
label_1a863c:
    if (ctx->pc == 0x1A863Cu) {
        ctx->pc = 0x1A8640u;
        goto label_1a8640;
    }
    ctx->pc = 0x1A8638u;
    {
        const bool branch_taken_0x1a8638 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8638) {
            ctx->pc = 0x1A92D0u;
            goto label_1a92d0;
        }
    }
    ctx->pc = 0x1A8640u;
label_1a8640:
    // 0x1a8640: 0x8e99031c  lw          $t9, 0x31C($s4)
    ctx->pc = 0x1a8640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 796)));
label_1a8644:
    // 0x1a8644: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a8644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a8648:
    // 0x1a8648: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a8648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a864c:
    // 0x1a864c: 0x320f809  jalr        $t9
label_1a8650:
    if (ctx->pc == 0x1A8650u) {
        ctx->pc = 0x1A8650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A864Cu;
        // 0x1a8650: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8654u;
        goto label_1a8654;
    }
    ctx->pc = 0x1A864Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A8654u);
        ctx->pc = 0x1A8650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A864Cu;
        // 0x1a8650: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A864Cu, 0x1A8654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8654u;
label_1a8654:
    // 0x1a8654: 0x1000031f  b           . + 4 + (0x31F << 2)
label_1a8658:
    if (ctx->pc == 0x1A8658u) {
        ctx->pc = 0x1A8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8654u;
        // 0x1a8658: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A865Cu;
        goto label_1a865c;
    }
    ctx->pc = 0x1A8654u;
    {
        const bool branch_taken_0x1a8654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8654u;
        // 0x1a8658: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8654) {
            ctx->pc = 0x1A92D4u;
            goto label_1a92d4;
        }
    }
    ctx->pc = 0x1A865Cu;
label_1a865c:
    // 0x1a865c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1a865cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a8660:
    // 0x1a8660: 0xc063dd4  jal         func_18F750
label_1a8664:
    if (ctx->pc == 0x1A8664u) {
        ctx->pc = 0x1A8668u;
        goto label_1a8668;
    }
    ctx->pc = 0x1A8660u;
    SET_GPR_U32(ctx, 31, 0x1A8668u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1A8660u, 0x1A8668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8668u;
label_1a8668:
    // 0x1a8668: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a8668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a866c:
    // 0x1a866c: 0x10430151  beq         $v0, $v1, . + 4 + (0x151 << 2)
label_1a8670:
    if (ctx->pc == 0x1A8670u) {
        ctx->pc = 0x1A8674u;
        goto label_1a8674;
    }
    ctx->pc = 0x1A866Cu;
    {
        const bool branch_taken_0x1a866c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a866c) {
            ctx->pc = 0x1A8BB4u;
            goto label_1a8bb4;
        }
    }
    ctx->pc = 0x1A8674u;
label_1a8674:
    // 0x1a8674: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a8674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8678:
    // 0x1a8678: 0x1045000a  beq         $v0, $a1, . + 4 + (0xA << 2)
label_1a867c:
    if (ctx->pc == 0x1A867Cu) {
        ctx->pc = 0x1A8680u;
        goto label_1a8680;
    }
    ctx->pc = 0x1A8678u;
    {
        const bool branch_taken_0x1a8678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1a8678) {
            ctx->pc = 0x1A86A4u;
            goto label_1a86a4;
        }
    }
    ctx->pc = 0x1A8680u;
label_1a8680:
    // 0x1a8680: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a8684:
    if (ctx->pc == 0x1A8684u) {
        ctx->pc = 0x1A8684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8680u;
        // 0x1a8684: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8688u;
        goto label_1a8688;
    }
    ctx->pc = 0x1A8680u;
    {
        const bool branch_taken_0x1a8680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8680u;
        // 0x1a8684: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8680) {
            ctx->pc = 0x1A8694u;
            goto label_1a8694;
        }
    }
    ctx->pc = 0x1A8688u;
label_1a8688:
    // 0x1a8688: 0x100002e0  b           . + 4 + (0x2E0 << 2)
label_1a868c:
    if (ctx->pc == 0x1A868Cu) {
        ctx->pc = 0x1A868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8688u;
        // 0x1a868c: 0xc7808028  lwc1        $f0, -0x7FD8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8690u;
        goto label_1a8690;
    }
    ctx->pc = 0x1A8688u;
    {
        const bool branch_taken_0x1a8688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8688u;
        // 0x1a868c: 0xc7808028  lwc1        $f0, -0x7FD8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8688) {
            ctx->pc = 0x1A920Cu;
            goto label_1a920c;
        }
    }
    ctx->pc = 0x1A8690u;
label_1a8690:
    // 0x1a8690: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1a8690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a8694:
    // 0x1a8694: 0xc063e14  jal         func_18F850
label_1a8698:
    if (ctx->pc == 0x1A8698u) {
        ctx->pc = 0x1A869Cu;
        goto label_1a869c;
    }
    ctx->pc = 0x1A8694u;
    SET_GPR_U32(ctx, 31, 0x1A869Cu);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A8694u, 0x1A869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A869Cu;
label_1a869c:
    // 0x1a869c: 0x1000030c  b           . + 4 + (0x30C << 2)
label_1a86a0:
    if (ctx->pc == 0x1A86A0u) {
        ctx->pc = 0x1A86A4u;
        goto label_1a86a4;
    }
    ctx->pc = 0x1A869Cu;
    {
        const bool branch_taken_0x1a869c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a869c) {
            ctx->pc = 0x1A92D0u;
            goto label_1a92d0;
        }
    }
    ctx->pc = 0x1A86A4u;
label_1a86a4:
    // 0x1a86a4: 0xae8009c8  sw          $zero, 0x9C8($s4)
    ctx->pc = 0x1a86a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2504), GPR_U32(ctx, 0));
label_1a86a8:
    // 0x1a86a8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1a86ac:
    // 0x1a86ac: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a86acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a86b0:
    // 0x1a86b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a86b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a86b4:
    // 0x1a86b4: 0x8e8209b4  lw          $v0, 0x9B4($s4)
    ctx->pc = 0x1a86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
label_1a86b8:
    // 0x1a86b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a86b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a86bc:
    // 0x1a86bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a86bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a86c0:
    // 0x1a86c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a86c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a86c4:
    // 0x1a86c4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1a86c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1a86c8:
    // 0x1a86c8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1a86cc:
    if (ctx->pc == 0x1A86CCu) {
        ctx->pc = 0x1A86D0u;
        goto label_1a86d0;
    }
    ctx->pc = 0x1A86C8u;
    {
        const bool branch_taken_0x1a86c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a86c8) {
            ctx->pc = 0x1A86D8u;
            goto label_1a86d8;
        }
    }
    ctx->pc = 0x1A86D0u;
label_1a86d0:
    // 0x1a86d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a86d4:
    if (ctx->pc == 0x1A86D4u) {
        ctx->pc = 0x1A86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86D0u;
        // 0x1a86d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A86D8u;
        goto label_1a86d8;
    }
    ctx->pc = 0x1A86D0u;
    {
        const bool branch_taken_0x1a86d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86D0u;
        // 0x1a86d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86d0) {
            ctx->pc = 0x1A86E0u;
            goto label_1a86e0;
        }
    }
    ctx->pc = 0x1A86D8u;
label_1a86d8:
    // 0x1a86d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a86d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a86dc:
    // 0x1a86dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a86dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a86e0:
    // 0x1a86e0: 0xc06a4e4  jal         func_1A9390
label_1a86e4:
    if (ctx->pc == 0x1A86E4u) {
        ctx->pc = 0x1A86E8u;
        goto label_1a86e8;
    }
    ctx->pc = 0x1A86E0u;
    SET_GPR_U32(ctx, 31, 0x1A86E8u);
    ctx->pc = 0x1A9390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9390u, 0x1A86E0u, 0x1A86E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86E8u;
label_1a86e8:
    // 0x1a86e8: 0x8f83870c  lw          $v1, -0x78F4($gp)
    ctx->pc = 0x1a86e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936332)));
label_1a86ec:
    // 0x1a86ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a86f0:
    // 0x1a86f0: 0xae8309b4  sw          $v1, 0x9B4($s4)
    ctx->pc = 0x1a86f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2484), GPR_U32(ctx, 3));
label_1a86f4:
    // 0x1a86f4: 0xae8009c0  sw          $zero, 0x9C0($s4)
    ctx->pc = 0x1a86f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2496), GPR_U32(ctx, 0));
label_1a86f8:
    // 0x1a86f8: 0x8e8309b4  lw          $v1, 0x9B4($s4)
    ctx->pc = 0x1a86f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
label_1a86fc:
    // 0x1a86fc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1a8700:
    if (ctx->pc == 0x1A8700u) {
        ctx->pc = 0x1A8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86FCu;
        // 0x1a8700: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8704u;
        goto label_1a8704;
    }
    ctx->pc = 0x1A86FCu;
    {
        const bool branch_taken_0x1a86fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86FCu;
        // 0x1a8700: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86fc) {
            ctx->pc = 0x1A8710u;
            goto label_1a8710;
        }
    }
    ctx->pc = 0x1A8704u;
label_1a8704:
    // 0x1a8704: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a8708:
    if (ctx->pc == 0x1A8708u) {
        ctx->pc = 0x1A8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8704u;
        // 0x1a8708: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A870Cu;
        goto label_1a870c;
    }
    ctx->pc = 0x1A8704u;
    {
        const bool branch_taken_0x1a8704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8704u;
        // 0x1a8708: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8704) {
            ctx->pc = 0x1A8710u;
            goto label_1a8710;
        }
    }
    ctx->pc = 0x1A870Cu;
label_1a870c:
    // 0x1a870c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1a870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1a8710:
    // 0x1a8710: 0xae8209c4  sw          $v0, 0x9C4($s4)
    ctx->pc = 0x1a8710u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2500), GPR_U32(ctx, 2));
label_1a8714:
    // 0x1a8714: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a8714u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8718:
    // 0x1a8718: 0xae8009b0  sw          $zero, 0x9B0($s4)
    ctx->pc = 0x1a8718u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2480), GPR_U32(ctx, 0));
label_1a871c:
    // 0x1a871c: 0xae8006d4  sw          $zero, 0x6D4($s4)
    ctx->pc = 0x1a871cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1748), GPR_U32(ctx, 0));
label_1a8720:
    // 0x1a8720: 0xae8006d0  sw          $zero, 0x6D0($s4)
    ctx->pc = 0x1a8720u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1744), GPR_U32(ctx, 0));
label_1a8724:
    // 0x1a8724: 0xae80073c  sw          $zero, 0x73C($s4)
    ctx->pc = 0x1a8724u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1852), GPR_U32(ctx, 0));
label_1a8728:
    // 0x1a8728: 0xae800738  sw          $zero, 0x738($s4)
    ctx->pc = 0x1a8728u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1848), GPR_U32(ctx, 0));
label_1a872c:
    // 0x1a872c: 0xae8007a4  sw          $zero, 0x7A4($s4)
    ctx->pc = 0x1a872cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1956), GPR_U32(ctx, 0));
label_1a8730:
    // 0x1a8730: 0xae8007a0  sw          $zero, 0x7A0($s4)
    ctx->pc = 0x1a8730u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1952), GPR_U32(ctx, 0));
label_1a8734:
    // 0x1a8734: 0xae80080c  sw          $zero, 0x80C($s4)
    ctx->pc = 0x1a8734u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2060), GPR_U32(ctx, 0));
label_1a8738:
    // 0x1a8738: 0xae800808  sw          $zero, 0x808($s4)
    ctx->pc = 0x1a8738u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2056), GPR_U32(ctx, 0));
label_1a873c:
    // 0x1a873c: 0xae800874  sw          $zero, 0x874($s4)
    ctx->pc = 0x1a873cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2164), GPR_U32(ctx, 0));
label_1a8740:
    // 0x1a8740: 0xae800870  sw          $zero, 0x870($s4)
    ctx->pc = 0x1a8740u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2160), GPR_U32(ctx, 0));
label_1a8744:
    // 0x1a8744: 0xae8008dc  sw          $zero, 0x8DC($s4)
    ctx->pc = 0x1a8744u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2268), GPR_U32(ctx, 0));
label_1a8748:
    // 0x1a8748: 0xae8008d8  sw          $zero, 0x8D8($s4)
    ctx->pc = 0x1a8748u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2264), GPR_U32(ctx, 0));
label_1a874c:
    // 0x1a874c: 0xae800944  sw          $zero, 0x944($s4)
    ctx->pc = 0x1a874cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2372), GPR_U32(ctx, 0));
label_1a8750:
    // 0x1a8750: 0xae800940  sw          $zero, 0x940($s4)
    ctx->pc = 0x1a8750u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2368), GPR_U32(ctx, 0));
label_1a8754:
    // 0x1a8754: 0xae8009ac  sw          $zero, 0x9AC($s4)
    ctx->pc = 0x1a8754u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2476), GPR_U32(ctx, 0));
label_1a8758:
    // 0x1a8758: 0xae8009a8  sw          $zero, 0x9A8($s4)
    ctx->pc = 0x1a8758u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2472), GPR_U32(ctx, 0));
label_1a875c:
    // 0x1a875c: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x1a875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_1a8760:
    // 0x1a8760: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x1a8760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1a8764:
    // 0x1a8764: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x1a8764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1a8768:
    // 0x1a8768: 0x1040fffe  beqz        $v0, . + 4 + (-0x2 << 2)
label_1a876c:
    if (ctx->pc == 0x1A876Cu) {
        ctx->pc = 0x1A8770u;
        goto label_1a8770;
    }
    ctx->pc = 0x1A8768u;
    {
        const bool branch_taken_0x1a8768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8768) {
            ctx->pc = 0x1A8764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8764;
        }
    }
    ctx->pc = 0x1A8770u;
label_1a8770:
    // 0x1a8770: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1a8770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1a8774:
    // 0x1a8774: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1a8774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a8778:
    // 0x1a8778: 0xc057040  jal         func_15C100
label_1a877c:
    if (ctx->pc == 0x1A877Cu) {
        ctx->pc = 0x1A877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8778u;
        // 0x1a877c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8780u;
        goto label_1a8780;
    }
    ctx->pc = 0x1A8778u;
    SET_GPR_U32(ctx, 31, 0x1A8780u);
    ctx->pc = 0x1A877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8778u;
    // 0x1a877c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A8778u, 0x1A8780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8780u;
label_1a8780:
    // 0x1a8780: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x1a8780u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1a8784:
    // 0x1a8784: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x1a8784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_1a8788:
    // 0x1a8788: 0x10830068  beq         $a0, $v1, . + 4 + (0x68 << 2)
label_1a878c:
    if (ctx->pc == 0x1A878Cu) {
        ctx->pc = 0x1A878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8788u;
        // 0x1a878c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8790u;
        goto label_1a8790;
    }
    ctx->pc = 0x1A8788u;
    {
        const bool branch_taken_0x1a8788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8788u;
        // 0x1a878c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8788) {
            ctx->pc = 0x1A892Cu;
            goto label_1a892c;
        }
    }
    ctx->pc = 0x1A8790u;
label_1a8790:
    // 0x1a8790: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1a8790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1a8794:
    // 0x1a8794: 0x10830063  beq         $a0, $v1, . + 4 + (0x63 << 2)
label_1a8798:
    if (ctx->pc == 0x1A8798u) {
        ctx->pc = 0x1A879Cu;
        goto label_1a879c;
    }
    ctx->pc = 0x1A8794u;
    {
        const bool branch_taken_0x1a8794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a8794) {
            ctx->pc = 0x1A8924u;
            goto label_1a8924;
        }
    }
    ctx->pc = 0x1A879Cu;
label_1a879c:
    // 0x1a879c: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x1a879cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1a87a0:
    // 0x1a87a0: 0x1083005e  beq         $a0, $v1, . + 4 + (0x5E << 2)
label_1a87a4:
    if (ctx->pc == 0x1A87A4u) {
        ctx->pc = 0x1A87A8u;
        goto label_1a87a8;
    }
    ctx->pc = 0x1A87A0u;
    {
        const bool branch_taken_0x1a87a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a87a0) {
            ctx->pc = 0x1A891Cu;
            goto label_1a891c;
        }
    }
    ctx->pc = 0x1A87A8u;
label_1a87a8:
    // 0x1a87a8: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x1a87a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_1a87ac:
    // 0x1a87ac: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
label_1a87b0:
    if (ctx->pc == 0x1A87B0u) {
        ctx->pc = 0x1A87B4u;
        goto label_1a87b4;
    }
    ctx->pc = 0x1A87ACu;
    {
        const bool branch_taken_0x1a87ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a87ac) {
            ctx->pc = 0x1A8914u;
            goto label_1a8914;
        }
    }
    ctx->pc = 0x1A87B4u;
label_1a87b4:
    // 0x1a87b4: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1a87b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1a87b8:
    // 0x1a87b8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1a87bc:
    if (ctx->pc == 0x1A87BCu) {
        ctx->pc = 0x1A87C0u;
        goto label_1a87c0;
    }
    ctx->pc = 0x1A87B8u;
    {
        const bool branch_taken_0x1a87b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a87b8) {
            ctx->pc = 0x1A87C8u;
            goto label_1a87c8;
        }
    }
    ctx->pc = 0x1A87C0u;
label_1a87c0:
    // 0x1a87c0: 0x100000ba  b           . + 4 + (0xBA << 2)
label_1a87c4:
    if (ctx->pc == 0x1A87C4u) {
        ctx->pc = 0x1A87C8u;
        goto label_1a87c8;
    }
    ctx->pc = 0x1A87C0u;
    {
        const bool branch_taken_0x1a87c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a87c0) {
            ctx->pc = 0x1A8AACu;
            goto label_1a8aac;
        }
    }
    ctx->pc = 0x1A87C8u;
label_1a87c8:
    // 0x1a87c8: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_1a87cc:
    if (ctx->pc == 0x1A87CCu) {
        ctx->pc = 0x1A87D0u;
        goto label_1a87d0;
    }
    ctx->pc = 0x1A87C8u;
    {
        const bool branch_taken_0x1a87c8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a87c8) {
            ctx->pc = 0x1A87E0u;
            goto label_1a87e0;
        }
    }
    ctx->pc = 0x1A87D0u;
label_1a87d0:
    // 0x1a87d0: 0x8e8309b0  lw          $v1, 0x9B0($s4)
    ctx->pc = 0x1a87d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
label_1a87d4:
    // 0x1a87d4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a87d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a87d8:
    // 0x1a87d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a87d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a87dc:
    // 0x1a87dc: 0xae8309b0  sw          $v1, 0x9B0($s4)
    ctx->pc = 0x1a87dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2480), GPR_U32(ctx, 3));
label_1a87e0:
    // 0x1a87e0: 0x8e8409b0  lw          $a0, 0x9B0($s4)
    ctx->pc = 0x1a87e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
label_1a87e4:
    // 0x1a87e4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a87e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1a87e8:
    // 0x1a87e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a87e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a87ec:
    // 0x1a87ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a87ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a87f0:
    // 0x1a87f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a87f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a87f4:
    // 0x1a87f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a87f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a87f8:
    // 0x1a87f8: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x1a87f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1a87fc:
    // 0x1a87fc: 0x8c8606d0  lw          $a2, 0x6D0($a0)
    ctx->pc = 0x1a87fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
label_1a8800:
    // 0x1a8800: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1a8800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a8804:
    // 0x1a8804: 0x68900  sll         $s1, $a2, 4
    ctx->pc = 0x1a8804u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1a8808:
    // 0x1a8808: 0xac8306d0  sw          $v1, 0x6D0($a0)
    ctx->pc = 0x1a8808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1744), GPR_U32(ctx, 3));
label_1a880c:
    // 0x1a880c: 0x8e8409b0  lw          $a0, 0x9B0($s4)
    ctx->pc = 0x1a880cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
label_1a8810:
    // 0x1a8810: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a8810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1a8814:
    // 0x1a8814: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8818:
    // 0x1a8818: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a881c:
    // 0x1a881c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8820:
    // 0x1a8820: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a8820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a8824:
    // 0x1a8824: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1a8824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1a8828:
    // 0x1a8828: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a8828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1a882c:
    // 0x1a882c: 0xac620670  sw          $v0, 0x670($v1)
    ctx->pc = 0x1a882cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 2));
label_1a8830:
    // 0x1a8830: 0xac600678  sw          $zero, 0x678($v1)
    ctx->pc = 0x1a8830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1656), GPR_U32(ctx, 0));
label_1a8834:
    // 0x1a8834: 0x8e8409b0  lw          $a0, 0x9B0($s4)
    ctx->pc = 0x1a8834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
label_1a8838:
    // 0x1a8838: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a8838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a883c:
    // 0x1a883c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a883cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1a8840:
    // 0x1a8840: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8844:
    // 0x1a8844: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a8848:
    // 0x1a8848: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a884c:
    // 0x1a884c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a884cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a8850:
    // 0x1a8850: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1a8850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1a8854:
    // 0x1a8854: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a8854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1a8858:
    // 0x1a8858: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a8858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1a885c:
    // 0x1a885c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a885cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a8860:
    // 0x1a8860: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8864:
    // 0x1a8864: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a8864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a8868:
    // 0x1a8868: 0xc042570  jal         func_1095C0
label_1a886c:
    if (ctx->pc == 0x1A886Cu) {
        ctx->pc = 0x1A886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8868u;
        // 0x1a886c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8870u;
        goto label_1a8870;
    }
    ctx->pc = 0x1A8868u;
    SET_GPR_U32(ctx, 31, 0x1A8870u);
    ctx->pc = 0x1A886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8868u;
    // 0x1a886c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1A8868u, 0x1A8870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8870u;
label_1a8870:
    // 0x1a8870: 0x8e8409b0  lw          $a0, 0x9B0($s4)
    ctx->pc = 0x1a8870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
label_1a8874:
    // 0x1a8874: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a8874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8878:
    // 0x1a8878: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a8878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a887c:
    // 0x1a887c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a887cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1a8880:
    // 0x1a8880: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8884:
    // 0x1a8884: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a8888:
    // 0x1a8888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a888c:
    // 0x1a888c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a888cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a8890:
    // 0x1a8890: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1a8890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1a8894:
    // 0x1a8894: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a8894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1a8898:
    // 0x1a8898: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a8898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1a889c:
    // 0x1a889c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a889cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a88a0:
    // 0x1a88a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a88a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a88a4:
    // 0x1a88a4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a88a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a88a8:
    // 0x1a88a8: 0xa04001d3  sb          $zero, 0x1D3($v0)
    ctx->pc = 0x1a88a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 467), (uint8_t)GPR_U32(ctx, 0));
label_1a88ac:
    // 0x1a88ac: 0x8e8609b4  lw          $a2, 0x9B4($s4)
    ctx->pc = 0x1a88acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
label_1a88b0:
    // 0x1a88b0: 0x8e8409b0  lw          $a0, 0x9B0($s4)
    ctx->pc = 0x1a88b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
label_1a88b4:
    // 0x1a88b4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a88b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a88b8:
    // 0x1a88b8: 0x38c30002  xori        $v1, $a2, 0x2
    ctx->pc = 0x1a88b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
label_1a88bc:
    // 0x1a88bc: 0x3902b  sltu        $s2, $zero, $v1
    ctx->pc = 0x1a88bcu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a88c0:
    // 0x1a88c0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a88c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1a88c4:
    // 0x1a88c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a88c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a88c8:
    // 0x1a88c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a88c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a88cc:
    // 0x1a88cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a88d0:
    // 0x1a88d0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a88d4:
    // 0x1a88d4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1a88d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1a88d8:
    // 0x1a88d8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1a88dc:
    // 0x1a88dc: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a88dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1a88e0:
    // 0x1a88e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a88e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a88e4:
    // 0x1a88e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a88e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a88e8:
    // 0x1a88e8: 0x14c50002  bne         $a2, $a1, . + 4 + (0x2 << 2)
label_1a88ec:
    if (ctx->pc == 0x1A88ECu) {
        ctx->pc = 0x1A88ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88E8u;
        // 0x1a88ec: 0x8c512cd8  lw          $s1, 0x2CD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A88F0u;
        goto label_1a88f0;
    }
    ctx->pc = 0x1A88E8u;
    {
        const bool branch_taken_0x1a88e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A88ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88E8u;
        // 0x1a88ec: 0x8c512cd8  lw          $s1, 0x2CD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a88e8) {
            ctx->pc = 0x1A88F4u;
            goto label_1a88f4;
        }
    }
    ctx->pc = 0x1A88F0u;
label_1a88f0:
    // 0x1a88f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a88f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a88f4:
    // 0x1a88f4: 0xc05ee1c  jal         func_17B870
label_1a88f8:
    if (ctx->pc == 0x1A88F8u) {
        ctx->pc = 0x1A88F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88F4u;
        // 0x1a88f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A88FCu;
        goto label_1a88fc;
    }
    ctx->pc = 0x1A88F4u;
    SET_GPR_U32(ctx, 31, 0x1A88FCu);
    ctx->pc = 0x1A88F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A88F4u;
    // 0x1a88f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B870u, 0x1A88F4u, 0x1A88FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A88FCu;
label_1a88fc:
    // 0x1a88fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a88fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8900:
    // 0x1a8900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8904:
    // 0x1a8904: 0xc05ee30  jal         func_17B8C0
label_1a8908:
    if (ctx->pc == 0x1A8908u) {
        ctx->pc = 0x1A8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8904u;
        // 0x1a8908: 0x12280a  movz        $a1, $zero, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A890Cu;
        goto label_1a890c;
    }
    ctx->pc = 0x1A8904u;
    SET_GPR_U32(ctx, 31, 0x1A890Cu);
    ctx->pc = 0x1A8908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8904u;
    // 0x1a8908: 0x12280a  movz        $a1, $zero, $s2 (Delay Slot)
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8C0u, 0x1A8904u, 0x1A890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A890Cu;
label_1a890c:
    // 0x1a890c: 0x10000067  b           . + 4 + (0x67 << 2)
label_1a8910:
    if (ctx->pc == 0x1A8910u) {
        ctx->pc = 0x1A8914u;
        goto label_1a8914;
    }
    ctx->pc = 0x1A890Cu;
    {
        const bool branch_taken_0x1a890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a890c) {
            ctx->pc = 0x1A8AACu;
            goto label_1a8aac;
        }
    }
    ctx->pc = 0x1A8914u;
label_1a8914:
    // 0x1a8914: 0x0  nop
    ctx->pc = 0x1a8914u;
    // NOP
label_1a8918:
    // 0x1a8918: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a8918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a891c:
    // 0x1a891c: 0x0  nop
    ctx->pc = 0x1a891cu;
    // NOP
label_1a8920:
    // 0x1a8920: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a8920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a8924:
    // 0x1a8924: 0x0  nop
    ctx->pc = 0x1a8924u;
    // NOP
label_1a8928:
    // 0x1a8928: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a8928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a892c:
    // 0x1a892c: 0x0  nop
    ctx->pc = 0x1a892cu;
    // NOP
label_1a8930:
    // 0x1a8930: 0x8e8409b0  lw          $a0, 0x9B0($s4)
    ctx->pc = 0x1a8930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
label_1a8934:
    // 0x1a8934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a8934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8938:
    // 0x1a8938: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a8938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1a893c:
    // 0x1a893c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a893cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8940:
    // 0x1a8940: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a8944:
    // 0x1a8944: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8948:
    // 0x1a8948: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a8948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a894c:
    // 0x1a894c: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x1a894cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1a8950:
    // 0x1a8950: 0x8c9306d4  lw          $s3, 0x6D4($a0)
    ctx->pc = 0x1a8950u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1748)));
label_1a8954:
    // 0x1a8954: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x1a8954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1a8958:
    // 0x1a8958: 0x139100  sll         $s2, $s3, 4
    ctx->pc = 0x1a8958u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1a895c:
    // 0x1a895c: 0xac8306d4  sw          $v1, 0x6D4($a0)
    ctx->pc = 0x1a895cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1748), GPR_U32(ctx, 3));
label_1a8960:
    // 0x1a8960: 0x8e8409b0  lw          $a0, 0x9B0($s4)
    ctx->pc = 0x1a8960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
label_1a8964:
    // 0x1a8964: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a8964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1a8968:
    // 0x1a8968: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a896c:
    // 0x1a896c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a896cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a8970:
    // 0x1a8970: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8974:
    // 0x1a8974: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a8974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a8978:
    // 0x1a8978: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1a8978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1a897c:
    // 0x1a897c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a897cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1a8980:
    // 0x1a8980: 0xac6206b0  sw          $v0, 0x6B0($v1)
    ctx->pc = 0x1a8980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1712), GPR_U32(ctx, 2));
label_1a8984:
    // 0x1a8984: 0xac6006b8  sw          $zero, 0x6B8($v1)
    ctx->pc = 0x1a8984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1720), GPR_U32(ctx, 0));
label_1a8988:
    // 0x1a8988: 0x8e8409b0  lw          $a0, 0x9B0($s4)
    ctx->pc = 0x1a8988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
label_1a898c:
    // 0x1a898c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a898cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a8990:
    // 0x1a8990: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a8990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1a8994:
    // 0x1a8994: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8998:
    // 0x1a8998: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a899c:
    // 0x1a899c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a899cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a89a0:
    // 0x1a89a0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a89a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a89a4:
    // 0x1a89a4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1a89a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1a89a8:
    // 0x1a89a8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a89a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1a89ac:
    // 0x1a89ac: 0x8c6306b0  lw          $v1, 0x6B0($v1)
    ctx->pc = 0x1a89acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1712)));
label_1a89b0:
    // 0x1a89b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a89b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a89b4:
    // 0x1a89b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a89b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a89b8:
    // 0x1a89b8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a89b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a89bc:
    // 0x1a89bc: 0xc042570  jal         func_1095C0
label_1a89c0:
    if (ctx->pc == 0x1A89C0u) {
        ctx->pc = 0x1A89C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89BCu;
        // 0x1a89c0: 0x64160001  daddiu      $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A89C4u;
        goto label_1a89c4;
    }
    ctx->pc = 0x1A89BCu;
    SET_GPR_U32(ctx, 31, 0x1A89C4u);
    ctx->pc = 0x1A89C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A89BCu;
    // 0x1a89c0: 0x64160001  daddiu      $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1A89BCu, 0x1A89C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A89C4u;
label_1a89c4:
    // 0x1a89c4: 0x8e8409b0  lw          $a0, 0x9B0($s4)
    ctx->pc = 0x1a89c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
label_1a89c8:
    // 0x1a89c8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a89c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a89cc:
    // 0x1a89cc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a89ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1a89d0:
    // 0x1a89d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a89d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a89d4:
    // 0x1a89d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a89d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a89d8:
    // 0x1a89d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a89d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a89dc:
    // 0x1a89dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a89dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a89e0:
    // 0x1a89e0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1a89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1a89e4:
    // 0x1a89e4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a89e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1a89e8:
    // 0x1a89e8: 0x8c6306b0  lw          $v1, 0x6B0($v1)
    ctx->pc = 0x1a89e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1712)));
label_1a89ec:
    // 0x1a89ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a89ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a89f0:
    // 0x1a89f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a89f4:
    // 0x1a89f4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a89f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a89f8:
    // 0x1a89f8: 0xa04001d3  sb          $zero, 0x1D3($v0)
    ctx->pc = 0x1a89f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 467), (uint8_t)GPR_U32(ctx, 0));
label_1a89fc:
    // 0x1a89fc: 0x8e8309b0  lw          $v1, 0x9B0($s4)
    ctx->pc = 0x1a89fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
label_1a8a00:
    // 0x1a8a00: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1a8a04:
    // 0x1a8a04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8a08:
    // 0x1a8a08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a8a0c:
    // 0x1a8a0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8a10:
    // 0x1a8a10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1a8a14:
    // 0x1a8a14: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1a8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1a8a18:
    // 0x1a8a18: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a8a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1a8a1c:
    // 0x1a8a1c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1a8a20:
    if (ctx->pc == 0x1A8A20u) {
        ctx->pc = 0x1A8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A1Cu;
        // 0x1a8a20: 0x245506b0  addiu       $s5, $v0, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A24u;
        goto label_1a8a24;
    }
    ctx->pc = 0x1A8A1Cu;
    {
        const bool branch_taken_0x1a8a1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A1Cu;
        // 0x1a8a20: 0x245506b0  addiu       $s5, $v0, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a1c) {
            ctx->pc = 0x1A8A2Cu;
            goto label_1a8a2c;
        }
    }
    ctx->pc = 0x1A8A24u;
label_1a8a24:
    // 0x1a8a24: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a8a28:
    if (ctx->pc == 0x1A8A28u) {
        ctx->pc = 0x1A8A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A24u;
        // 0x1a8a28: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A2Cu;
        goto label_1a8a2c;
    }
    ctx->pc = 0x1A8A24u;
    {
        const bool branch_taken_0x1a8a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A24u;
        // 0x1a8a28: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a24) {
            ctx->pc = 0x1A8A30u;
            goto label_1a8a30;
        }
    }
    ctx->pc = 0x1A8A2Cu;
label_1a8a2c:
    // 0x1a8a2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a8a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8a30:
    // 0x1a8a30: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_1a8a34:
    if (ctx->pc == 0x1A8A34u) {
        ctx->pc = 0x1A8A38u;
        goto label_1a8a38;
    }
    ctx->pc = 0x1A8A30u;
    {
        const bool branch_taken_0x1a8a30 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a8a30) {
            ctx->pc = 0x1A8A40u;
            goto label_1a8a40;
        }
    }
    ctx->pc = 0x1A8A38u;
label_1a8a38:
    // 0x1a8a38: 0x11980b  movn        $s3, $zero, $s1
    ctx->pc = 0x1a8a38u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_1a8a3c:
    // 0x1a8a3c: 0xaeb30004  sw          $s3, 0x4($s5)
    ctx->pc = 0x1a8a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 19));
label_1a8a40:
    // 0x1a8a40: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1a8a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1a8a44:
    // 0x1a8a44: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1a8a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a8a48:
    // 0x1a8a48: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1a8a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1a8a4c:
    // 0x1a8a4c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a8a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a8a50:
    // 0x1a8a50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8a54:
    // 0x1a8a54: 0x8c732cd8  lw          $s3, 0x2CD8($v1)
    ctx->pc = 0x1a8a54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a8a58:
    // 0x1a8a58: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1a8a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a8a5c:
    // 0x1a8a5c: 0x8e790008  lw          $t9, 0x8($s3)
    ctx->pc = 0x1a8a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1a8a60:
    // 0x1a8a60: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1a8a60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1a8a64:
    // 0x1a8a64: 0x320f809  jalr        $t9
label_1a8a68:
    if (ctx->pc == 0x1A8A68u) {
        ctx->pc = 0x1A8A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A64u;
        // 0x1a8a68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A6Cu;
        goto label_1a8a6c;
    }
    ctx->pc = 0x1A8A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A8A6Cu);
        ctx->pc = 0x1A8A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A64u;
        // 0x1a8a68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8A64u, 0x1A8A6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8A6Cu;
label_1a8a6c:
    // 0x1a8a6c: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_1a8a70:
    if (ctx->pc == 0x1A8A70u) {
        ctx->pc = 0x1A8A74u;
        goto label_1a8a74;
    }
    ctx->pc = 0x1A8A6Cu;
    {
        const bool branch_taken_0x1a8a6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8a6c) {
            ctx->pc = 0x1A8A84u;
            goto label_1a8a84;
        }
    }
    ctx->pc = 0x1A8A74u;
label_1a8a74:
    // 0x1a8a74: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1a8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1a8a78:
    // 0x1a8a78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a8a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a8a7c:
    // 0x1a8a7c: 0xc05eed0  jal         func_17BB40
label_1a8a80:
    if (ctx->pc == 0x1A8A80u) {
        ctx->pc = 0x1A8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A7Cu;
        // 0x1a8a80: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A84u;
        goto label_1a8a84;
    }
    ctx->pc = 0x1A8A7Cu;
    SET_GPR_U32(ctx, 31, 0x1A8A84u);
    ctx->pc = 0x1A8A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A7Cu;
    // 0x1a8a80: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BB40u, 0x1A8A7Cu, 0x1A8A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8A84u;
label_1a8a84:
    // 0x1a8a84: 0x0  nop
    ctx->pc = 0x1a8a84u;
    // NOP
label_1a8a88:
    // 0x1a8a88: 0x8e8309b0  lw          $v1, 0x9B0($s4)
    ctx->pc = 0x1a8a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
label_1a8a8c:
    // 0x1a8a8c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a8a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1a8a90:
    // 0x1a8a90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8a94:
    // 0x1a8a94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a8a98:
    // 0x1a8a98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8a9c:
    // 0x1a8a9c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1a8aa0:
    // 0x1a8aa0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1a8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1a8aa4:
    // 0x1a8aa4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a8aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1a8aa8:
    // 0x1a8aa8: 0xac5106bc  sw          $s1, 0x6BC($v0)
    ctx->pc = 0x1a8aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1724), GPR_U32(ctx, 17));
label_1a8aac:
    // 0x1a8aac: 0x0  nop
    ctx->pc = 0x1a8aacu;
    // NOP
label_1a8ab0:
    // 0x1a8ab0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1a8ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1a8ab4:
    // 0x1a8ab4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a8ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a8ab8:
    // 0x1a8ab8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a8abc:
    // 0x1a8abc: 0x1062ff29  beq         $v1, $v0, . + 4 + (-0xD7 << 2)
label_1a8ac0:
    if (ctx->pc == 0x1A8AC0u) {
        ctx->pc = 0x1A8AC4u;
        goto label_1a8ac4;
    }
    ctx->pc = 0x1A8ABCu;
    {
        const bool branch_taken_0x1a8abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a8abc) {
            ctx->pc = 0x1A8764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8764;
        }
    }
    ctx->pc = 0x1A8AC4u;
label_1a8ac4:
    // 0x1a8ac4: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_1a8ac8:
    if (ctx->pc == 0x1A8AC8u) {
        ctx->pc = 0x1A8ACCu;
        goto label_1a8acc;
    }
    ctx->pc = 0x1A8AC4u;
    {
        const bool branch_taken_0x1a8ac4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8ac4) {
            ctx->pc = 0x1A8AD8u;
            goto label_1a8ad8;
        }
    }
    ctx->pc = 0x1A8ACCu;
label_1a8acc:
    // 0x1a8acc: 0x8e8209b0  lw          $v0, 0x9B0($s4)
    ctx->pc = 0x1a8accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
label_1a8ad0:
    // 0x1a8ad0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a8ad4:
    // 0x1a8ad4: 0xae8209b0  sw          $v0, 0x9B0($s4)
    ctx->pc = 0x1a8ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2480), GPR_U32(ctx, 2));
label_1a8ad8:
    // 0x1a8ad8: 0xae800a94  sw          $zero, 0xA94($s4)
    ctx->pc = 0x1a8ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2708), GPR_U32(ctx, 0));
label_1a8adc:
    // 0x1a8adc: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_1a8ae0:
    // 0x1a8ae0: 0xae800a98  sw          $zero, 0xA98($s4)
    ctx->pc = 0x1a8ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2712), GPR_U32(ctx, 0));
label_1a8ae4:
    // 0x1a8ae4: 0x24422c38  addiu       $v0, $v0, 0x2C38
    ctx->pc = 0x1a8ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11320));
label_1a8ae8:
    // 0x1a8ae8: 0xae800a9c  sw          $zero, 0xA9C($s4)
    ctx->pc = 0x1a8ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2716), GPR_U32(ctx, 0));
label_1a8aec:
    // 0x1a8aec: 0xa2800aa0  sb          $zero, 0xAA0($s4)
    ctx->pc = 0x1a8aecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2720), (uint8_t)GPR_U32(ctx, 0));
label_1a8af0:
    // 0x1a8af0: 0xae800aa4  sw          $zero, 0xAA4($s4)
    ctx->pc = 0x1a8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2724), GPR_U32(ctx, 0));
label_1a8af4:
    // 0x1a8af4: 0xae800aa8  sw          $zero, 0xAA8($s4)
    ctx->pc = 0x1a8af4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2728), GPR_U32(ctx, 0));
label_1a8af8:
    // 0x1a8af8: 0xa2800aac  sb          $zero, 0xAAC($s4)
    ctx->pc = 0x1a8af8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2732), (uint8_t)GPR_U32(ctx, 0));
label_1a8afc:
    // 0x1a8afc: 0xae800ab0  sw          $zero, 0xAB0($s4)
    ctx->pc = 0x1a8afcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2736), GPR_U32(ctx, 0));
label_1a8b00:
    // 0x1a8b00: 0xae800ab4  sw          $zero, 0xAB4($s4)
    ctx->pc = 0x1a8b00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2740), GPR_U32(ctx, 0));
label_1a8b04:
    // 0x1a8b04: 0xa2800ab8  sb          $zero, 0xAB8($s4)
    ctx->pc = 0x1a8b04u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2744), (uint8_t)GPR_U32(ctx, 0));
label_1a8b08:
    // 0x1a8b08: 0xae800abc  sw          $zero, 0xABC($s4)
    ctx->pc = 0x1a8b08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2748), GPR_U32(ctx, 0));
label_1a8b0c:
    // 0x1a8b0c: 0xae800ac0  sw          $zero, 0xAC0($s4)
    ctx->pc = 0x1a8b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2752), GPR_U32(ctx, 0));
label_1a8b10:
    // 0x1a8b10: 0xa2800ac4  sb          $zero, 0xAC4($s4)
    ctx->pc = 0x1a8b10u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2756), (uint8_t)GPR_U32(ctx, 0));
label_1a8b14:
    // 0x1a8b14: 0xae800ac8  sw          $zero, 0xAC8($s4)
    ctx->pc = 0x1a8b14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2760), GPR_U32(ctx, 0));
label_1a8b18:
    // 0x1a8b18: 0xae800acc  sw          $zero, 0xACC($s4)
    ctx->pc = 0x1a8b18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2764), GPR_U32(ctx, 0));
label_1a8b1c:
    // 0x1a8b1c: 0xa2800ad0  sb          $zero, 0xAD0($s4)
    ctx->pc = 0x1a8b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2768), (uint8_t)GPR_U32(ctx, 0));
label_1a8b20:
    // 0x1a8b20: 0xae800ad4  sw          $zero, 0xAD4($s4)
    ctx->pc = 0x1a8b20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2772), GPR_U32(ctx, 0));
label_1a8b24:
    // 0x1a8b24: 0xae800ad8  sw          $zero, 0xAD8($s4)
    ctx->pc = 0x1a8b24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2776), GPR_U32(ctx, 0));
label_1a8b28:
    // 0x1a8b28: 0xa2800adc  sb          $zero, 0xADC($s4)
    ctx->pc = 0x1a8b28u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2780), (uint8_t)GPR_U32(ctx, 0));
label_1a8b2c:
    // 0x1a8b2c: 0x8e8309b4  lw          $v1, 0x9B4($s4)
    ctx->pc = 0x1a8b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
label_1a8b30:
    // 0x1a8b30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a8b34:
    // 0x1a8b34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8b38:
    // 0x1a8b38: 0xc046458  jal         func_119160
label_1a8b3c:
    if (ctx->pc == 0x1A8B3Cu) {
        ctx->pc = 0x1A8B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B38u;
        // 0x1a8b3c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B40u;
        goto label_1a8b40;
    }
    ctx->pc = 0x1A8B38u;
    SET_GPR_U32(ctx, 31, 0x1A8B40u);
    ctx->pc = 0x1A8B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B38u;
    // 0x1a8b3c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1A8B38u, 0x1A8B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B40u;
label_1a8b40:
    // 0x1a8b40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a8b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8b44:
    // 0x1a8b44: 0xc069b8c  jal         func_1A6E30
label_1a8b48:
    if (ctx->pc == 0x1A8B48u) {
        ctx->pc = 0x1A8B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B44u;
        // 0x1a8b48: 0x26840a90  addiu       $a0, $s4, 0xA90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B4Cu;
        goto label_1a8b4c;
    }
    ctx->pc = 0x1A8B44u;
    SET_GPR_U32(ctx, 31, 0x1A8B4Cu);
    ctx->pc = 0x1A8B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B44u;
    // 0x1a8b48: 0x26840a90  addiu       $a0, $s4, 0xA90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E30u, 0x1A8B44u, 0x1A8B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B4Cu;
label_1a8b4c:
    // 0x1a8b4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a8b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8b50:
    // 0x1a8b50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a8b54:
    // 0x1a8b54: 0x26840a90  addiu       $a0, $s4, 0xA90
    ctx->pc = 0x1a8b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2704));
label_1a8b58:
    // 0x1a8b58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a8b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a8b5c:
    // 0x1a8b5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a8b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8b60:
    // 0x1a8b60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8b64:
    // 0x1a8b64: 0xc069bec  jal         func_1A6FB0
label_1a8b68:
    if (ctx->pc == 0x1A8B68u) {
        ctx->pc = 0x1A8B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B64u;
        // 0x1a8b68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B6Cu;
        goto label_1a8b6c;
    }
    ctx->pc = 0x1A8B64u;
    SET_GPR_U32(ctx, 31, 0x1A8B6Cu);
    ctx->pc = 0x1A8B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B64u;
    // 0x1a8b68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB0u, 0x1A8B64u, 0x1A8B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B6Cu;
label_1a8b6c:
    // 0x1a8b6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a8b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a8b70:
    // 0x1a8b70: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1a8b70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_1a8b74:
    // 0x1a8b74: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1a8b78:
    if (ctx->pc == 0x1A8B78u) {
        ctx->pc = 0x1A8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B74u;
        // 0x1a8b78: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B7Cu;
        goto label_1a8b7c;
    }
    ctx->pc = 0x1A8B74u;
    {
        const bool branch_taken_0x1a8b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B74u;
        // 0x1a8b78: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b74) {
            ctx->pc = 0x1A8B54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8b54;
        }
    }
    ctx->pc = 0x1A8B7Cu;
label_1a8b7c:
    // 0x1a8b7c: 0x8e8209b4  lw          $v0, 0x9B4($s4)
    ctx->pc = 0x1a8b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
label_1a8b80:
    // 0x1a8b80: 0x8e830664  lw          $v1, 0x664($s4)
    ctx->pc = 0x1a8b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_1a8b84:
    // 0x1a8b84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a8b88:
    // 0x1a8b88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8b8c:
    // 0x1a8b8c: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x1a8b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a8b90:
    // 0x1a8b90: 0xc064fb8  jal         func_193EE0
label_1a8b94:
    if (ctx->pc == 0x1A8B94u) {
        ctx->pc = 0x1A8B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B90u;
        // 0x1a8b94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B98u;
        goto label_1a8b98;
    }
    ctx->pc = 0x1A8B90u;
    SET_GPR_U32(ctx, 31, 0x1A8B98u);
    ctx->pc = 0x1A8B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B90u;
    // 0x1a8b94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A8B90u, 0x1A8B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B98u;
label_1a8b98:
    // 0x1a8b98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a8b9c:
    // 0x1a8b9c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1a8b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a8ba0:
    // 0x1a8ba0: 0xae820ae4  sw          $v0, 0xAE4($s4)
    ctx->pc = 0x1a8ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2788), GPR_U32(ctx, 2));
label_1a8ba4:
    // 0x1a8ba4: 0xae800ae8  sw          $zero, 0xAE8($s4)
    ctx->pc = 0x1a8ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2792), GPR_U32(ctx, 0));
label_1a8ba8:
    // 0x1a8ba8: 0xae800aec  sw          $zero, 0xAEC($s4)
    ctx->pc = 0x1a8ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2796), GPR_U32(ctx, 0));
label_1a8bac:
    // 0x1a8bac: 0xc063e14  jal         func_18F850
label_1a8bb0:
    if (ctx->pc == 0x1A8BB0u) {
        ctx->pc = 0x1A8BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BACu;
        // 0x1a8bb0: 0xae800af0  sw          $zero, 0xAF0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8BB4u;
        goto label_1a8bb4;
    }
    ctx->pc = 0x1A8BACu;
    SET_GPR_U32(ctx, 31, 0x1A8BB4u);
    ctx->pc = 0x1A8BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8BACu;
    // 0x1a8bb0: 0xae800af0  sw          $zero, 0xAF0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 2800), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A8BACu, 0x1A8BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8BB4u;
label_1a8bb4:
    // 0x1a8bb4: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1a8bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_1a8bb8:
    // 0x1a8bb8: 0x10000090  b           . + 4 + (0x90 << 2)
label_1a8bbc:
    if (ctx->pc == 0x1A8BBCu) {
        ctx->pc = 0x1A8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BB8u;
        // 0x1a8bbc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8BC0u;
        goto label_1a8bc0;
    }
    ctx->pc = 0x1A8BB8u;
    {
        const bool branch_taken_0x1a8bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BB8u;
        // 0x1a8bbc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8bb8) {
            ctx->pc = 0x1A8DFCu;
            goto label_1a8dfc;
        }
    }
    ctx->pc = 0x1A8BC0u;
label_1a8bc0:
    // 0x1a8bc0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a8bc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8bc4:
    // 0x1a8bc4: 0x10000084  b           . + 4 + (0x84 << 2)
label_1a8bc8:
    if (ctx->pc == 0x1A8BC8u) {
        ctx->pc = 0x1A8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BC4u;
        // 0x1a8bc8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8BCCu;
        goto label_1a8bcc;
    }
    ctx->pc = 0x1A8BC4u;
    {
        const bool branch_taken_0x1a8bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BC4u;
        // 0x1a8bc8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8bc4) {
            ctx->pc = 0x1A8DD8u;
            goto label_1a8dd8;
        }
    }
    ctx->pc = 0x1A8BCCu;
label_1a8bcc:
    // 0x1a8bcc: 0x0  nop
    ctx->pc = 0x1a8bccu;
    // NOP
label_1a8bd0:
    // 0x1a8bd0: 0x2571021  addu        $v0, $s2, $s7
    ctx->pc = 0x1a8bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
label_1a8bd4:
    // 0x1a8bd4: 0x8c430670  lw          $v1, 0x670($v0)
    ctx->pc = 0x1a8bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
label_1a8bd8:
    // 0x1a8bd8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a8bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a8bdc:
    // 0x1a8bdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a8be0:
    // 0x1a8be0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a8be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8be4:
    // 0x1a8be4: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a8be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a8be8:
    // 0x1a8be8: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1a8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_1a8bec:
    // 0x1a8bec: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
label_1a8bf0:
    if (ctx->pc == 0x1A8BF0u) {
        ctx->pc = 0x1A8BF4u;
        goto label_1a8bf4;
    }
    ctx->pc = 0x1A8BECu;
    {
        const bool branch_taken_0x1a8bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8bec) {
            ctx->pc = 0x1A8DD0u;
            goto label_1a8dd0;
        }
    }
    ctx->pc = 0x1A8BF4u;
label_1a8bf4:
    // 0x1a8bf4: 0x8e8409b4  lw          $a0, 0x9B4($s4)
    ctx->pc = 0x1a8bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
label_1a8bf8:
    // 0x1a8bf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a8bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8bfc:
    // 0x1a8bfc: 0x14830044  bne         $a0, $v1, . + 4 + (0x44 << 2)
label_1a8c00:
    if (ctx->pc == 0x1A8C00u) {
        ctx->pc = 0x1A8C04u;
        goto label_1a8c04;
    }
    ctx->pc = 0x1A8BFCu;
    {
        const bool branch_taken_0x1a8bfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a8bfc) {
            ctx->pc = 0x1A8D10u;
            goto label_1a8d10;
        }
    }
    ctx->pc = 0x1A8C04u;
label_1a8c04:
    // 0x1a8c04: 0x2ac10003  slti        $at, $s6, 0x3
    ctx->pc = 0x1a8c04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
label_1a8c08:
    // 0x1a8c08: 0x10200071  beqz        $at, . + 4 + (0x71 << 2)
label_1a8c0c:
    if (ctx->pc == 0x1A8C0Cu) {
        ctx->pc = 0x1A8C10u;
        goto label_1a8c10;
    }
    ctx->pc = 0x1A8C08u;
    {
        const bool branch_taken_0x1a8c08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8c08) {
            ctx->pc = 0x1A8DD0u;
            goto label_1a8dd0;
        }
    }
    ctx->pc = 0x1A8C10u;
label_1a8c10:
    // 0x1a8c10: 0x8e430670  lw          $v1, 0x670($s2)
    ctx->pc = 0x1a8c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1a8c14:
    // 0x1a8c14: 0x27a400c4  addiu       $a0, $sp, 0xC4
    ctx->pc = 0x1a8c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_1a8c18:
    // 0x1a8c18: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x1a8c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1a8c1c:
    // 0x1a8c1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a8c20:
    // 0x1a8c20: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a8c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8c24:
    // 0x1a8c24: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a8c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a8c28:
    // 0x1a8c28: 0x8c6301d4  lw          $v1, 0x1D4($v1)
    ctx->pc = 0x1a8c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
label_1a8c2c:
    // 0x1a8c2c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1a8c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_1a8c30:
    // 0x1a8c30: 0x8e430680  lw          $v1, 0x680($s2)
    ctx->pc = 0x1a8c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1664)));
label_1a8c34:
    // 0x1a8c34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a8c38:
    // 0x1a8c38: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a8c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8c3c:
    // 0x1a8c3c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a8c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a8c40:
    // 0x1a8c40: 0x8c6301d4  lw          $v1, 0x1D4($v1)
    ctx->pc = 0x1a8c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
label_1a8c44:
    // 0x1a8c44: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a8c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1a8c48:
    // 0x1a8c48: 0x8e430690  lw          $v1, 0x690($s2)
    ctx->pc = 0x1a8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
label_1a8c4c:
    // 0x1a8c4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a8c50:
    // 0x1a8c50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8c54:
    // 0x1a8c54: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a8c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a8c58:
    // 0x1a8c58: 0x8c4201d4  lw          $v0, 0x1D4($v0)
    ctx->pc = 0x1a8c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
label_1a8c5c:
    // 0x1a8c5c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a8c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1a8c60:
    // 0x1a8c60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a8c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a8c64:
    // 0x1a8c64: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1a8c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1a8c68:
    // 0x1a8c68: 0x14620059  bne         $v1, $v0, . + 4 + (0x59 << 2)
label_1a8c6c:
    if (ctx->pc == 0x1A8C6Cu) {
        ctx->pc = 0x1A8C70u;
        goto label_1a8c70;
    }
    ctx->pc = 0x1A8C68u;
    {
        const bool branch_taken_0x1a8c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8c68) {
            ctx->pc = 0x1A8DD0u;
            goto label_1a8dd0;
        }
    }
    ctx->pc = 0x1A8C70u;
label_1a8c70:
    // 0x1a8c70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a8c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a8c74:
    // 0x1a8c74: 0x14620056  bne         $v1, $v0, . + 4 + (0x56 << 2)
label_1a8c78:
    if (ctx->pc == 0x1A8C78u) {
        ctx->pc = 0x1A8C7Cu;
        goto label_1a8c7c;
    }
    ctx->pc = 0x1A8C74u;
    {
        const bool branch_taken_0x1a8c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8c74) {
            ctx->pc = 0x1A8DD0u;
            goto label_1a8dd0;
        }
    }
    ctx->pc = 0x1A8C7Cu;
label_1a8c7c:
    // 0x1a8c7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a8c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8c80:
    // 0x1a8c80: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1a8c84:
    if (ctx->pc == 0x1A8C84u) {
        ctx->pc = 0x1A8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C80u;
        // 0x1a8c84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8C88u;
        goto label_1a8c88;
    }
    ctx->pc = 0x1A8C80u;
    {
        const bool branch_taken_0x1a8c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C80u;
        // 0x1a8c84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c80) {
            ctx->pc = 0x1A8CF8u;
            goto label_1a8cf8;
        }
    }
    ctx->pc = 0x1A8C88u;
label_1a8c88:
    // 0x1a8c88: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x1a8c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1a8c8c:
    // 0x1a8c8c: 0x8ca206bc  lw          $v0, 0x6BC($a1)
    ctx->pc = 0x1a8c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1724)));
label_1a8c90:
    // 0x1a8c90: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1a8c94:
    if (ctx->pc == 0x1A8C94u) {
        ctx->pc = 0x1A8C98u;
        goto label_1a8c98;
    }
    ctx->pc = 0x1A8C90u;
    {
        const bool branch_taken_0x1a8c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8c90) {
            ctx->pc = 0x1A8CF0u;
            goto label_1a8cf0;
        }
    }
    ctx->pc = 0x1A8C98u;
label_1a8c98:
    // 0x1a8c98: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1a8c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1a8c9c:
    // 0x1a8c9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a8ca0:
    // 0x1a8ca0: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
label_1a8ca4:
    if (ctx->pc == 0x1A8CA4u) {
        ctx->pc = 0x1A8CA8u;
        goto label_1a8ca8;
    }
    ctx->pc = 0x1A8CA0u;
    {
        const bool branch_taken_0x1a8ca0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a8ca0) {
            ctx->pc = 0x1A8CACu;
            goto label_1a8cac;
        }
    }
    ctx->pc = 0x1A8CA8u;
label_1a8ca8:
    // 0x1a8ca8: 0xaca206b4  sw          $v0, 0x6B4($a1)
    ctx->pc = 0x1a8ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1716), GPR_U32(ctx, 2));
label_1a8cac:
    // 0x1a8cac: 0x0  nop
    ctx->pc = 0x1a8cacu;
    // NOP
label_1a8cb0:
    // 0x1a8cb0: 0x8ca406b0  lw          $a0, 0x6B0($a1)
    ctx->pc = 0x1a8cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1712)));
label_1a8cb4:
    // 0x1a8cb4: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1a8cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a8cb8:
    // 0x1a8cb8: 0x24b506b4  addiu       $s5, $a1, 0x6B4
    ctx->pc = 0x1a8cb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 1716));
label_1a8cbc:
    // 0x1a8cbc: 0x8ca206b4  lw          $v0, 0x6B4($a1)
    ctx->pc = 0x1a8cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1716)));
label_1a8cc0:
    // 0x1a8cc0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a8cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a8cc4:
    // 0x1a8cc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8cc8:
    // 0x1a8cc8: 0x8c712cd8  lw          $s1, 0x2CD8($v1)
    ctx->pc = 0x1a8cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a8ccc:
    // 0x1a8ccc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1a8cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a8cd0:
    // 0x1a8cd0: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x1a8cd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a8cd4:
    // 0x1a8cd4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1a8cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1a8cd8:
    // 0x1a8cd8: 0x320f809  jalr        $t9
label_1a8cdc:
    if (ctx->pc == 0x1A8CDCu) {
        ctx->pc = 0x1A8CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CD8u;
        // 0x1a8cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8CE0u;
        goto label_1a8ce0;
    }
    ctx->pc = 0x1A8CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A8CE0u);
        ctx->pc = 0x1A8CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CD8u;
        // 0x1a8cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8CD8u, 0x1A8CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8CE0u;
label_1a8ce0:
    // 0x1a8ce0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1a8ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1a8ce4:
    // 0x1a8ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8ce8:
    // 0x1a8ce8: 0xc05eed0  jal         func_17BB40
label_1a8cec:
    if (ctx->pc == 0x1A8CECu) {
        ctx->pc = 0x1A8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CE8u;
        // 0x1a8cec: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8CF0u;
        goto label_1a8cf0;
    }
    ctx->pc = 0x1A8CE8u;
    SET_GPR_U32(ctx, 31, 0x1A8CF0u);
    ctx->pc = 0x1A8CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8CE8u;
    // 0x1a8cec: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BB40u, 0x1A8CE8u, 0x1A8CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8CF0u;
label_1a8cf0:
    // 0x1a8cf0: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1a8cf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1a8cf4:
    // 0x1a8cf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a8cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a8cf8:
    // 0x1a8cf8: 0x8e4206d4  lw          $v0, 0x6D4($s2)
    ctx->pc = 0x1a8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1748)));
label_1a8cfc:
    // 0x1a8cfc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a8cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a8d00:
    // 0x1a8d00: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_1a8d04:
    if (ctx->pc == 0x1A8D04u) {
        ctx->pc = 0x1A8D08u;
        goto label_1a8d08;
    }
    ctx->pc = 0x1A8D00u;
    {
        const bool branch_taken_0x1a8d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8d00) {
            ctx->pc = 0x1A8C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8c88;
        }
    }
    ctx->pc = 0x1A8D08u;
label_1a8d08:
    // 0x1a8d08: 0x10000031  b           . + 4 + (0x31 << 2)
label_1a8d0c:
    if (ctx->pc == 0x1A8D0Cu) {
        ctx->pc = 0x1A8D10u;
        goto label_1a8d10;
    }
    ctx->pc = 0x1A8D08u;
    {
        const bool branch_taken_0x1a8d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8d08) {
            ctx->pc = 0x1A8DD0u;
            goto label_1a8dd0;
        }
    }
    ctx->pc = 0x1A8D10u;
label_1a8d10:
    // 0x1a8d10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a8d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8d14:
    // 0x1a8d14: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1a8d18:
    if (ctx->pc == 0x1A8D18u) {
        ctx->pc = 0x1A8D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D14u;
        // 0x1a8d18: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D1Cu;
        goto label_1a8d1c;
    }
    ctx->pc = 0x1A8D14u;
    {
        const bool branch_taken_0x1a8d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D14u;
        // 0x1a8d18: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d14) {
            ctx->pc = 0x1A8DC0u;
            goto label_1a8dc0;
        }
    }
    ctx->pc = 0x1A8D1Cu;
label_1a8d1c:
    // 0x1a8d1c: 0x0  nop
    ctx->pc = 0x1a8d1cu;
    // NOP
label_1a8d20:
    // 0x1a8d20: 0x2552021  addu        $a0, $s2, $s5
    ctx->pc = 0x1a8d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_1a8d24:
    // 0x1a8d24: 0x8c8206bc  lw          $v0, 0x6BC($a0)
    ctx->pc = 0x1a8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1724)));
label_1a8d28:
    // 0x1a8d28: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_1a8d2c:
    if (ctx->pc == 0x1A8D2Cu) {
        ctx->pc = 0x1A8D30u;
        goto label_1a8d30;
    }
    ctx->pc = 0x1A8D28u;
    {
        const bool branch_taken_0x1a8d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8d28) {
            ctx->pc = 0x1A8DB4u;
            goto label_1a8db4;
        }
    }
    ctx->pc = 0x1A8D30u;
label_1a8d30:
    // 0x1a8d30: 0x8c8206b4  lw          $v0, 0x6B4($a0)
    ctx->pc = 0x1a8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
label_1a8d34:
    // 0x1a8d34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a8d38:
    // 0x1a8d38: 0xac8206b4  sw          $v0, 0x6B4($a0)
    ctx->pc = 0x1a8d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 2));
label_1a8d3c:
    // 0x1a8d3c: 0x8c8206b4  lw          $v0, 0x6B4($a0)
    ctx->pc = 0x1a8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
label_1a8d40:
    // 0x1a8d40: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1a8d44:
    if (ctx->pc == 0x1A8D44u) {
        ctx->pc = 0x1A8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D40u;
        // 0x1a8d44: 0x249306b4  addiu       $s3, $a0, 0x6B4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1716));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D48u;
        goto label_1a8d48;
    }
    ctx->pc = 0x1A8D40u;
    {
        const bool branch_taken_0x1a8d40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D40u;
        // 0x1a8d44: 0x249306b4  addiu       $s3, $a0, 0x6B4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1716));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d40) {
            ctx->pc = 0x1A8D50u;
            goto label_1a8d50;
        }
    }
    ctx->pc = 0x1A8D48u;
label_1a8d48:
    // 0x1a8d48: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1a8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1a8d4c:
    // 0x1a8d4c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a8d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1a8d50:
    // 0x1a8d50: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1a8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a8d54:
    // 0x1a8d54: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1a8d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1a8d58:
    // 0x1a8d58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a8d5c:
    if (ctx->pc == 0x1A8D5Cu) {
        ctx->pc = 0x1A8D60u;
        goto label_1a8d60;
    }
    ctx->pc = 0x1A8D58u;
    {
        const bool branch_taken_0x1a8d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8d58) {
            ctx->pc = 0x1A8D68u;
            goto label_1a8d68;
        }
    }
    ctx->pc = 0x1A8D60u;
label_1a8d60:
    // 0x1a8d60: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x1a8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_1a8d64:
    // 0x1a8d64: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a8d64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1a8d68:
    // 0x1a8d68: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a8d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a8d6c:
    // 0x1a8d6c: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
label_1a8d70:
    if (ctx->pc == 0x1A8D70u) {
        ctx->pc = 0x1A8D74u;
        goto label_1a8d74;
    }
    ctx->pc = 0x1A8D6Cu;
    {
        const bool branch_taken_0x1a8d6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a8d6c) {
            ctx->pc = 0x1A8D78u;
            goto label_1a8d78;
        }
    }
    ctx->pc = 0x1A8D74u;
label_1a8d74:
    // 0x1a8d74: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a8d74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1a8d78:
    // 0x1a8d78: 0x8c8406b0  lw          $a0, 0x6B0($a0)
    ctx->pc = 0x1a8d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1712)));
label_1a8d7c:
    // 0x1a8d7c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1a8d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a8d80:
    // 0x1a8d80: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a8d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a8d84:
    // 0x1a8d84: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a8d84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a8d88:
    // 0x1a8d88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8d8c:
    // 0x1a8d8c: 0x8c712cd8  lw          $s1, 0x2CD8($v1)
    ctx->pc = 0x1a8d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a8d90:
    // 0x1a8d90: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1a8d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a8d94:
    // 0x1a8d94: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x1a8d94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a8d98:
    // 0x1a8d98: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1a8d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1a8d9c:
    // 0x1a8d9c: 0x320f809  jalr        $t9
label_1a8da0:
    if (ctx->pc == 0x1A8DA0u) {
        ctx->pc = 0x1A8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D9Cu;
        // 0x1a8da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DA4u;
        goto label_1a8da4;
    }
    ctx->pc = 0x1A8D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A8DA4u);
        ctx->pc = 0x1A8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D9Cu;
        // 0x1a8da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8D9Cu, 0x1A8DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8DA4u;
label_1a8da4:
    // 0x1a8da4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a8da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a8da8:
    // 0x1a8da8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8dac:
    // 0x1a8dac: 0xc05eed0  jal         func_17BB40
label_1a8db0:
    if (ctx->pc == 0x1A8DB0u) {
        ctx->pc = 0x1A8DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DACu;
        // 0x1a8db0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DB4u;
        goto label_1a8db4;
    }
    ctx->pc = 0x1A8DACu;
    SET_GPR_U32(ctx, 31, 0x1A8DB4u);
    ctx->pc = 0x1A8DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8DACu;
    // 0x1a8db0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BB40u, 0x1A8DACu, 0x1A8DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8DB4u;
label_1a8db4:
    // 0x1a8db4: 0x0  nop
    ctx->pc = 0x1a8db4u;
    // NOP
label_1a8db8:
    // 0x1a8db8: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1a8db8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_1a8dbc:
    // 0x1a8dbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a8dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a8dc0:
    // 0x1a8dc0: 0x8e4206d4  lw          $v0, 0x6D4($s2)
    ctx->pc = 0x1a8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1748)));
label_1a8dc4:
    // 0x1a8dc4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a8dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a8dc8:
    // 0x1a8dc8: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_1a8dcc:
    if (ctx->pc == 0x1A8DCCu) {
        ctx->pc = 0x1A8DD0u;
        goto label_1a8dd0;
    }
    ctx->pc = 0x1A8DC8u;
    {
        const bool branch_taken_0x1a8dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8dc8) {
            ctx->pc = 0x1A8D1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8d1c;
        }
    }
    ctx->pc = 0x1A8DD0u;
label_1a8dd0:
    // 0x1a8dd0: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1a8dd0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_1a8dd4:
    // 0x1a8dd4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1a8dd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1a8dd8:
    // 0x1a8dd8: 0x29e9021  addu        $s2, $s4, $fp
    ctx->pc = 0x1a8dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
label_1a8ddc:
    // 0x1a8ddc: 0x8e4206d0  lw          $v0, 0x6D0($s2)
    ctx->pc = 0x1a8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1744)));
label_1a8de0:
    // 0x1a8de0: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x1a8de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a8de4:
    // 0x1a8de4: 0x1440ff79  bnez        $v0, . + 4 + (-0x87 << 2)
label_1a8de8:
    if (ctx->pc == 0x1A8DE8u) {
        ctx->pc = 0x1A8DECu;
        goto label_1a8dec;
    }
    ctx->pc = 0x1A8DE4u;
    {
        const bool branch_taken_0x1a8de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8de4) {
            ctx->pc = 0x1A8BCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8bcc;
        }
    }
    ctx->pc = 0x1A8DECu;
label_1a8dec:
    // 0x1a8dec: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1a8decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1a8df0:
    // 0x1a8df0: 0x27de0068  addiu       $fp, $fp, 0x68
    ctx->pc = 0x1a8df0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 104));
label_1a8df4:
    // 0x1a8df4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a8df8:
    // 0x1a8df8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1a8df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1a8dfc:
    // 0x1a8dfc: 0x0  nop
    ctx->pc = 0x1a8dfcu;
    // NOP
label_1a8e00:
    // 0x1a8e00: 0x8e8409b4  lw          $a0, 0x9B4($s4)
    ctx->pc = 0x1a8e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
label_1a8e04:
    // 0x1a8e04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a8e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a8e08:
    // 0x1a8e08: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_1a8e0c:
    if (ctx->pc == 0x1A8E0Cu) {
        ctx->pc = 0x1A8E10u;
        goto label_1a8e10;
    }
    ctx->pc = 0x1A8E08u;
    {
        const bool branch_taken_0x1a8e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a8e08) {
            ctx->pc = 0x1A8E24u;
            goto label_1a8e24;
        }
    }
    ctx->pc = 0x1A8E10u;
label_1a8e10:
    // 0x1a8e10: 0x8e8309b0  lw          $v1, 0x9B0($s4)
    ctx->pc = 0x1a8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
label_1a8e14:
    // 0x1a8e14: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1a8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1a8e18:
    // 0x1a8e18: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a8e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a8e1c:
    // 0x1a8e1c: 0x1440ff69  bnez        $v0, . + 4 + (-0x97 << 2)
label_1a8e20:
    if (ctx->pc == 0x1A8E20u) {
        ctx->pc = 0x1A8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E1Cu;
        // 0x1a8e20: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E24u;
        goto label_1a8e24;
    }
    ctx->pc = 0x1A8E1Cu;
    {
        const bool branch_taken_0x1a8e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E1Cu;
        // 0x1a8e20: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e1c) {
            ctx->pc = 0x1A8BC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8bc4;
        }
    }
    ctx->pc = 0x1A8E24u;
label_1a8e24:
    // 0x1a8e24: 0x0  nop
    ctx->pc = 0x1a8e24u;
    // NOP
label_1a8e28:
    // 0x1a8e28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a8e2c:
    // 0x1a8e2c: 0x14820049  bne         $a0, $v0, . + 4 + (0x49 << 2)
label_1a8e30:
    if (ctx->pc == 0x1A8E30u) {
        ctx->pc = 0x1A8E34u;
        goto label_1a8e34;
    }
    ctx->pc = 0x1A8E2Cu;
    {
        const bool branch_taken_0x1a8e2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8e2c) {
            ctx->pc = 0x1A8F54u;
            goto label_1a8f54;
        }
    }
    ctx->pc = 0x1A8E34u;
label_1a8e34:
    // 0x1a8e34: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a8e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8e38:
    // 0x1a8e38: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1a8e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1a8e3c:
    // 0x1a8e3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a8e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a8e40:
    // 0x1a8e40: 0x8e8309c8  lw          $v1, 0x9C8($s4)
    ctx->pc = 0x1a8e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2504)));
label_1a8e44:
    // 0x1a8e44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a8e44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a8e48:
    // 0x1a8e48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a8e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a8e4c:
    // 0x1a8e4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a8e4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a8e50:
    // 0x1a8e50: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a8e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a8e54:
    // 0x1a8e54: 0x0  nop
    ctx->pc = 0x1a8e54u;
    // NOP
label_1a8e58:
    // 0x1a8e58: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1a8e58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a8e5c:
    // 0x1a8e5c: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
label_1a8e60:
    if (ctx->pc == 0x1A8E60u) {
        ctx->pc = 0x1A8E64u;
        goto label_1a8e64;
    }
    ctx->pc = 0x1A8E5Cu;
    {
        const bool branch_taken_0x1a8e5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8e5c) {
            ctx->pc = 0x1A8F54u;
            goto label_1a8f54;
        }
    }
    ctx->pc = 0x1A8E64u;
label_1a8e64:
    // 0x1a8e64: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a8e64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8e68:
    // 0x1a8e68: 0x10000034  b           . + 4 + (0x34 << 2)
label_1a8e6c:
    if (ctx->pc == 0x1A8E6Cu) {
        ctx->pc = 0x1A8E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E68u;
        // 0x1a8e6c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E70u;
        goto label_1a8e70;
    }
    ctx->pc = 0x1A8E68u;
    {
        const bool branch_taken_0x1a8e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E68u;
        // 0x1a8e6c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e68) {
            ctx->pc = 0x1A8F3Cu;
            goto label_1a8f3c;
        }
    }
    ctx->pc = 0x1A8E70u;
label_1a8e70:
    // 0x1a8e70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a8e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8e74:
    // 0x1a8e74: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1a8e78:
    if (ctx->pc == 0x1A8E78u) {
        ctx->pc = 0x1A8E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E74u;
        // 0x1a8e78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E7Cu;
        goto label_1a8e7c;
    }
    ctx->pc = 0x1A8E74u;
    {
        const bool branch_taken_0x1a8e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E74u;
        // 0x1a8e78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e74) {
            ctx->pc = 0x1A8F20u;
            goto label_1a8f20;
        }
    }
    ctx->pc = 0x1A8E7Cu;
label_1a8e7c:
    // 0x1a8e7c: 0x0  nop
    ctx->pc = 0x1a8e7cu;
    // NOP
label_1a8e80:
    // 0x1a8e80: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x1a8e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1a8e84:
    // 0x1a8e84: 0x8c8206bc  lw          $v0, 0x6BC($a0)
    ctx->pc = 0x1a8e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1724)));
label_1a8e88:
    // 0x1a8e88: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_1a8e8c:
    if (ctx->pc == 0x1A8E8Cu) {
        ctx->pc = 0x1A8E90u;
        goto label_1a8e90;
    }
    ctx->pc = 0x1A8E88u;
    {
        const bool branch_taken_0x1a8e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8e88) {
            ctx->pc = 0x1A8F14u;
            goto label_1a8f14;
        }
    }
    ctx->pc = 0x1A8E90u;
label_1a8e90:
    // 0x1a8e90: 0x8c8206b4  lw          $v0, 0x6B4($a0)
    ctx->pc = 0x1a8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
label_1a8e94:
    // 0x1a8e94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a8e98:
    // 0x1a8e98: 0xac8206b4  sw          $v0, 0x6B4($a0)
    ctx->pc = 0x1a8e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 2));
label_1a8e9c:
    // 0x1a8e9c: 0x8c8206b4  lw          $v0, 0x6B4($a0)
    ctx->pc = 0x1a8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
label_1a8ea0:
    // 0x1a8ea0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1a8ea4:
    if (ctx->pc == 0x1A8EA4u) {
        ctx->pc = 0x1A8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EA0u;
        // 0x1a8ea4: 0x249306b4  addiu       $s3, $a0, 0x6B4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1716));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8EA8u;
        goto label_1a8ea8;
    }
    ctx->pc = 0x1A8EA0u;
    {
        const bool branch_taken_0x1a8ea0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EA0u;
        // 0x1a8ea4: 0x249306b4  addiu       $s3, $a0, 0x6B4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1716));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ea0) {
            ctx->pc = 0x1A8EB0u;
            goto label_1a8eb0;
        }
    }
    ctx->pc = 0x1A8EA8u;
label_1a8ea8:
    // 0x1a8ea8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1a8ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1a8eac:
    // 0x1a8eac: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a8eacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1a8eb0:
    // 0x1a8eb0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1a8eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a8eb4:
    // 0x1a8eb4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1a8eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1a8eb8:
    // 0x1a8eb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a8ebc:
    if (ctx->pc == 0x1A8EBCu) {
        ctx->pc = 0x1A8EC0u;
        goto label_1a8ec0;
    }
    ctx->pc = 0x1A8EB8u;
    {
        const bool branch_taken_0x1a8eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8eb8) {
            ctx->pc = 0x1A8EC8u;
            goto label_1a8ec8;
        }
    }
    ctx->pc = 0x1A8EC0u;
label_1a8ec0:
    // 0x1a8ec0: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x1a8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_1a8ec4:
    // 0x1a8ec4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a8ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1a8ec8:
    // 0x1a8ec8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a8ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a8ecc:
    // 0x1a8ecc: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
label_1a8ed0:
    if (ctx->pc == 0x1A8ED0u) {
        ctx->pc = 0x1A8ED4u;
        goto label_1a8ed4;
    }
    ctx->pc = 0x1A8ECCu;
    {
        const bool branch_taken_0x1a8ecc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a8ecc) {
            ctx->pc = 0x1A8ED8u;
            goto label_1a8ed8;
        }
    }
    ctx->pc = 0x1A8ED4u;
label_1a8ed4:
    // 0x1a8ed4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a8ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1a8ed8:
    // 0x1a8ed8: 0x8c8406b0  lw          $a0, 0x6B0($a0)
    ctx->pc = 0x1a8ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1712)));
label_1a8edc:
    // 0x1a8edc: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1a8edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a8ee0:
    // 0x1a8ee0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a8ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a8ee4:
    // 0x1a8ee4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a8ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a8ee8:
    // 0x1a8ee8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8eec:
    // 0x1a8eec: 0x8c712cd8  lw          $s1, 0x2CD8($v1)
    ctx->pc = 0x1a8eecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a8ef0:
    // 0x1a8ef0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1a8ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a8ef4:
    // 0x1a8ef4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x1a8ef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a8ef8:
    // 0x1a8ef8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1a8ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1a8efc:
    // 0x1a8efc: 0x320f809  jalr        $t9
label_1a8f00:
    if (ctx->pc == 0x1A8F00u) {
        ctx->pc = 0x1A8F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EFCu;
        // 0x1a8f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F04u;
        goto label_1a8f04;
    }
    ctx->pc = 0x1A8EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A8F04u);
        ctx->pc = 0x1A8F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EFCu;
        // 0x1a8f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8EFCu, 0x1A8F04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8F04u;
label_1a8f04:
    // 0x1a8f04: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a8f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a8f08:
    // 0x1a8f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f0c:
    // 0x1a8f0c: 0xc05eed0  jal         func_17BB40
label_1a8f10:
    if (ctx->pc == 0x1A8F10u) {
        ctx->pc = 0x1A8F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F0Cu;
        // 0x1a8f10: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F14u;
        goto label_1a8f14;
    }
    ctx->pc = 0x1A8F0Cu;
    SET_GPR_U32(ctx, 31, 0x1A8F14u);
    ctx->pc = 0x1A8F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F0Cu;
    // 0x1a8f10: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BB40u, 0x1A8F0Cu, 0x1A8F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F14u;
label_1a8f14:
    // 0x1a8f14: 0x0  nop
    ctx->pc = 0x1a8f14u;
    // NOP
label_1a8f18:
    // 0x1a8f18: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1a8f18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1a8f1c:
    // 0x1a8f1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a8f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a8f20:
    // 0x1a8f20: 0x2951821  addu        $v1, $s4, $s5
    ctx->pc = 0x1a8f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_1a8f24:
    // 0x1a8f24: 0x8c6206d4  lw          $v0, 0x6D4($v1)
    ctx->pc = 0x1a8f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1748)));
label_1a8f28:
    // 0x1a8f28: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a8f28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a8f2c:
    // 0x1a8f2c: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_1a8f30:
    if (ctx->pc == 0x1A8F30u) {
        ctx->pc = 0x1A8F34u;
        goto label_1a8f34;
    }
    ctx->pc = 0x1A8F2Cu;
    {
        const bool branch_taken_0x1a8f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f2c) {
            ctx->pc = 0x1A8E7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8e7c;
        }
    }
    ctx->pc = 0x1A8F34u;
label_1a8f34:
    // 0x1a8f34: 0x26b50068  addiu       $s5, $s5, 0x68
    ctx->pc = 0x1a8f34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 104));
label_1a8f38:
    // 0x1a8f38: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1a8f38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1a8f3c:
    // 0x1a8f3c: 0x0  nop
    ctx->pc = 0x1a8f3cu;
    // NOP
label_1a8f40:
    // 0x1a8f40: 0x8e8209b0  lw          $v0, 0x9B0($s4)
    ctx->pc = 0x1a8f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
label_1a8f44:
    // 0x1a8f44: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x1a8f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a8f48:
    // 0x1a8f48: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
label_1a8f4c:
    if (ctx->pc == 0x1A8F4Cu) {
        ctx->pc = 0x1A8F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F48u;
        // 0x1a8f4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F50u;
        goto label_1a8f50;
    }
    ctx->pc = 0x1A8F48u;
    {
        const bool branch_taken_0x1a8f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F48u;
        // 0x1a8f4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f48) {
            ctx->pc = 0x1A8E74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8e74;
        }
    }
    ctx->pc = 0x1A8F50u;
label_1a8f50:
    // 0x1a8f50: 0xae8009c8  sw          $zero, 0x9C8($s4)
    ctx->pc = 0x1a8f50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2504), GPR_U32(ctx, 0));
label_1a8f54:
    // 0x1a8f54: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1a8f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_1a8f58:
    // 0x1a8f58: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_1a8f5c:
    if (ctx->pc == 0x1A8F5Cu) {
        ctx->pc = 0x1A8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F58u;
        // 0x1a8f5c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F60u;
        goto label_1a8f60;
    }
    ctx->pc = 0x1A8F58u;
    {
        const bool branch_taken_0x1a8f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F58u;
        // 0x1a8f5c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f58) {
            ctx->pc = 0x1A91E4u;
            goto label_1a91e4;
        }
    }
    ctx->pc = 0x1A8F60u;
label_1a8f60:
    // 0x1a8f60: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1a8f60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f64:
    // 0x1a8f64: 0x10000096  b           . + 4 + (0x96 << 2)
label_1a8f68:
    if (ctx->pc == 0x1A8F68u) {
        ctx->pc = 0x1A8F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F64u;
        // 0x1a8f68: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F6Cu;
        goto label_1a8f6c;
    }
    ctx->pc = 0x1A8F64u;
    {
        const bool branch_taken_0x1a8f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F64u;
        // 0x1a8f68: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f64) {
            ctx->pc = 0x1A91C0u;
            goto label_1a91c0;
        }
    }
    ctx->pc = 0x1A8F6Cu;
label_1a8f6c:
    // 0x1a8f6c: 0x0  nop
    ctx->pc = 0x1a8f6cu;
    // NOP
label_1a8f70:
    // 0x1a8f70: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x1a8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_1a8f74:
    // 0x1a8f74: 0x8c4306b8  lw          $v1, 0x6B8($v0)
    ctx->pc = 0x1a8f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1720)));
label_1a8f78:
    // 0x1a8f78: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1a8f7c:
    if (ctx->pc == 0x1A8F7Cu) {
        ctx->pc = 0x1A8F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F78u;
        // 0x1a8f7c: 0x245306b8  addiu       $s3, $v0, 0x6B8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F80u;
        goto label_1a8f80;
    }
    ctx->pc = 0x1A8F78u;
    {
        const bool branch_taken_0x1a8f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F78u;
        // 0x1a8f7c: 0x245306b8  addiu       $s3, $v0, 0x6B8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f78) {
            ctx->pc = 0x1A8FA8u;
            goto label_1a8fa8;
        }
    }
    ctx->pc = 0x1A8F80u;
label_1a8f80:
    // 0x1a8f80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a8f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a8f84:
    // 0x1a8f84: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_1a8f88:
    if (ctx->pc == 0x1A8F88u) {
        ctx->pc = 0x1A8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F84u;
        // 0x1a8f88: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F8Cu;
        goto label_1a8f8c;
    }
    ctx->pc = 0x1A8F84u;
    {
        const bool branch_taken_0x1a8f84 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1A8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F84u;
        // 0x1a8f88: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f84) {
            ctx->pc = 0x1A8FA8u;
            goto label_1a8fa8;
        }
    }
    ctx->pc = 0x1A8F8Cu;
label_1a8f8c:
    // 0x1a8f8c: 0x8c4406b0  lw          $a0, 0x6B0($v0)
    ctx->pc = 0x1a8f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1712)));
label_1a8f90:
    // 0x1a8f90: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1a8f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a8f94:
    // 0x1a8f94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a8f94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a8f98:
    // 0x1a8f98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8f9c:
    // 0x1a8f9c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a8f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a8fa0:
    // 0x1a8fa0: 0xa06001d3  sb          $zero, 0x1D3($v1)
    ctx->pc = 0x1a8fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 0));
label_1a8fa4:
    // 0x1a8fa4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1a8fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1a8fa8:
    // 0x1a8fa8: 0x8c4406b0  lw          $a0, 0x6B0($v0)
    ctx->pc = 0x1a8fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1712)));
label_1a8fac:
    // 0x1a8fac: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1a8facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a8fb0:
    // 0x1a8fb0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a8fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a8fb4:
    // 0x1a8fb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8fb8:
    // 0x1a8fb8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a8fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a8fbc:
    // 0x1a8fbc: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1a8fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_1a8fc0:
    // 0x1a8fc0: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
label_1a8fc4:
    if (ctx->pc == 0x1A8FC4u) {
        ctx->pc = 0x1A8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FC0u;
        // 0x1a8fc4: 0x245606b0  addiu       $s6, $v0, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8FC8u;
        goto label_1a8fc8;
    }
    ctx->pc = 0x1A8FC0u;
    {
        const bool branch_taken_0x1a8fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FC0u;
        // 0x1a8fc4: 0x245606b0  addiu       $s6, $v0, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8fc0) {
            ctx->pc = 0x1A91B8u;
            goto label_1a91b8;
        }
    }
    ctx->pc = 0x1A8FC8u;
label_1a8fc8:
    // 0x1a8fc8: 0x8e8509c0  lw          $a1, 0x9C0($s4)
    ctx->pc = 0x1a8fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2496)));
label_1a8fcc:
    // 0x1a8fcc: 0x8e8309c4  lw          $v1, 0x9C4($s4)
    ctx->pc = 0x1a8fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2500)));
label_1a8fd0:
    // 0x1a8fd0: 0x10a30079  beq         $a1, $v1, . + 4 + (0x79 << 2)
label_1a8fd4:
    if (ctx->pc == 0x1A8FD4u) {
        ctx->pc = 0x1A8FD8u;
        goto label_1a8fd8;
    }
    ctx->pc = 0x1A8FD0u;
    {
        const bool branch_taken_0x1a8fd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a8fd0) {
            ctx->pc = 0x1A91B8u;
            goto label_1a91b8;
        }
    }
    ctx->pc = 0x1A8FD8u;
label_1a8fd8:
    // 0x1a8fd8: 0x8c5106bc  lw          $s1, 0x6BC($v0)
    ctx->pc = 0x1a8fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1724)));
label_1a8fdc:
    // 0x1a8fdc: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_1a8fe0:
    if (ctx->pc == 0x1A8FE0u) {
        ctx->pc = 0x1A8FE4u;
        goto label_1a8fe4;
    }
    ctx->pc = 0x1A8FDCu;
    {
        const bool branch_taken_0x1a8fdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8fdc) {
            ctx->pc = 0x1A9000u;
            goto label_1a9000;
        }
    }
    ctx->pc = 0x1A8FE4u;
label_1a8fe4:
    // 0x1a8fe4: 0x8c4306b4  lw          $v1, 0x6B4($v0)
    ctx->pc = 0x1a8fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1716)));
label_1a8fe8:
    // 0x1a8fe8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a8fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_1a8fec:
    // 0x1a8fec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a8ff0:
    // 0x1a8ff0: 0x24422c58  addiu       $v0, $v0, 0x2C58
    ctx->pc = 0x1a8ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11352));
label_1a8ff4:
    // 0x1a8ff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8ff8:
    // 0x1a8ff8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1a8ffc:
    if (ctx->pc == 0x1A8FFCu) {
        ctx->pc = 0x1A8FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FF8u;
        // 0x1a8ffc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9000u;
        goto label_1a9000;
    }
    ctx->pc = 0x1A8FF8u;
    {
        const bool branch_taken_0x1a8ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FF8u;
        // 0x1a8ffc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ff8) {
            ctx->pc = 0x1A9068u;
            goto label_1a9068;
        }
    }
    ctx->pc = 0x1A9000u;
label_1a9000:
    // 0x1a9000: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a9000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9004:
    // 0x1a9004: 0x12230011  beq         $s1, $v1, . + 4 + (0x11 << 2)
label_1a9008:
    if (ctx->pc == 0x1A9008u) {
        ctx->pc = 0x1A900Cu;
        goto label_1a900c;
    }
    ctx->pc = 0x1A9004u;
    {
        const bool branch_taken_0x1a9004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a9004) {
            ctx->pc = 0x1A904Cu;
            goto label_1a904c;
        }
    }
    ctx->pc = 0x1A900Cu;
label_1a900c:
    // 0x1a900c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a900cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a9010:
    // 0x1a9010: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
label_1a9014:
    if (ctx->pc == 0x1A9014u) {
        ctx->pc = 0x1A9018u;
        goto label_1a9018;
    }
    ctx->pc = 0x1A9010u;
    {
        const bool branch_taken_0x1a9010 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9010) {
            ctx->pc = 0x1A9038u;
            goto label_1a9038;
        }
    }
    ctx->pc = 0x1A9018u;
label_1a9018:
    // 0x1a9018: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a9018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a901c:
    // 0x1a901c: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_1a9020:
    if (ctx->pc == 0x1A9020u) {
        ctx->pc = 0x1A9024u;
        goto label_1a9024;
    }
    ctx->pc = 0x1A901Cu;
    {
        const bool branch_taken_0x1a901c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a901c) {
            ctx->pc = 0x1A902Cu;
            goto label_1a902c;
        }
    }
    ctx->pc = 0x1A9024u;
label_1a9024:
    // 0x1a9024: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a9028:
    if (ctx->pc == 0x1A9028u) {
        ctx->pc = 0x1A902Cu;
        goto label_1a902c;
    }
    ctx->pc = 0x1A9024u;
    {
        const bool branch_taken_0x1a9024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9024) {
            ctx->pc = 0x1A9068u;
            goto label_1a9068;
        }
    }
    ctx->pc = 0x1A902Cu;
label_1a902c:
    // 0x1a902c: 0x0  nop
    ctx->pc = 0x1a902cu;
    // NOP
label_1a9030:
    // 0x1a9030: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a9034:
    if (ctx->pc == 0x1A9034u) {
        ctx->pc = 0x1A9034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9030u;
        // 0x1a9034: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9038u;
        goto label_1a9038;
    }
    ctx->pc = 0x1A9030u;
    {
        const bool branch_taken_0x1a9030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9030u;
        // 0x1a9034: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9030) {
            ctx->pc = 0x1A9068u;
            goto label_1a9068;
        }
    }
    ctx->pc = 0x1A9038u;
label_1a9038:
    // 0x1a9038: 0x8e8309b4  lw          $v1, 0x9B4($s4)
    ctx->pc = 0x1a9038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
label_1a903c:
    // 0x1a903c: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x1a903cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a9040:
    // 0x1a9040: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1a9040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a9044:
    // 0x1a9044: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a9048:
    if (ctx->pc == 0x1A9048u) {
        ctx->pc = 0x1A9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9044u;
        // 0x1a9048: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A904Cu;
        goto label_1a904c;
    }
    ctx->pc = 0x1A9044u;
    {
        const bool branch_taken_0x1a9044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9044u;
        // 0x1a9048: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9044) {
            ctx->pc = 0x1A9068u;
            goto label_1a9068;
        }
    }
    ctx->pc = 0x1A904Cu;
label_1a904c:
    // 0x1a904c: 0x0  nop
    ctx->pc = 0x1a904cu;
    // NOP
label_1a9050:
    // 0x1a9050: 0x8e8209b4  lw          $v0, 0x9B4($s4)
    ctx->pc = 0x1a9050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
label_1a9054:
    // 0x1a9054: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_1a9058:
    if (ctx->pc == 0x1A9058u) {
        ctx->pc = 0x1A9058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9054u;
        // 0x1a9058: 0x24110020  addiu       $s1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A905Cu;
        goto label_1a905c;
    }
    ctx->pc = 0x1A9054u;
    {
        const bool branch_taken_0x1a9054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A9058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9054u;
        // 0x1a9058: 0x24110020  addiu       $s1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9054) {
            ctx->pc = 0x1A9068u;
            goto label_1a9068;
        }
    }
    ctx->pc = 0x1A905Cu;
label_1a905c:
    // 0x1a905c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a9060:
    if (ctx->pc == 0x1A9060u) {
        ctx->pc = 0x1A9060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A905Cu;
        // 0x1a9060: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9064u;
        goto label_1a9064;
    }
    ctx->pc = 0x1A905Cu;
    {
        const bool branch_taken_0x1a905c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A905Cu;
        // 0x1a9060: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a905c) {
            ctx->pc = 0x1A9068u;
            goto label_1a9068;
        }
    }
    ctx->pc = 0x1A9064u;
label_1a9064:
    // 0x1a9064: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x1a9064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a9068:
    // 0x1a9068: 0x8e8309b4  lw          $v1, 0x9B4($s4)
    ctx->pc = 0x1a9068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
label_1a906c:
    // 0x1a906c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a906cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a9070:
    // 0x1a9070: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1a9074:
    if (ctx->pc == 0x1A9074u) {
        ctx->pc = 0x1A9074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9070u;
        // 0x1a9074: 0xb11024  and         $v0, $a1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9078u;
        goto label_1a9078;
    }
    ctx->pc = 0x1A9070u;
    {
        const bool branch_taken_0x1a9070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9070u;
        // 0x1a9074: 0xb11024  and         $v0, $a1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9070) {
            ctx->pc = 0x1A9088u;
            goto label_1a9088;
        }
    }
    ctx->pc = 0x1A9078u;
label_1a9078:
    // 0x1a9078: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x1a9078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
label_1a907c:
    // 0x1a907c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a9080:
    if (ctx->pc == 0x1A9080u) {
        ctx->pc = 0x1A9080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A907Cu;
        // 0x1a9080: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9084u;
        goto label_1a9084;
    }
    ctx->pc = 0x1A907Cu;
    {
        const bool branch_taken_0x1a907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A907Cu;
        // 0x1a9080: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a907c) {
            ctx->pc = 0x1A90A0u;
            goto label_1a90a0;
        }
    }
    ctx->pc = 0x1A9084u;
label_1a9084:
    // 0x1a9084: 0xb11024  and         $v0, $a1, $s1
    ctx->pc = 0x1a9084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
label_1a9088:
    // 0x1a9088: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1a9088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1a908c:
    // 0x1a908c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a908cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a9090:
    // 0x1a9090: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a9094:
    if (ctx->pc == 0x1A9094u) {
        ctx->pc = 0x1A9098u;
        goto label_1a9098;
    }
    ctx->pc = 0x1A9090u;
    {
        const bool branch_taken_0x1a9090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9090) {
            ctx->pc = 0x1A90A0u;
            goto label_1a90a0;
        }
    }
    ctx->pc = 0x1A9098u;
label_1a9098:
    // 0x1a9098: 0x3a220020  xori        $v0, $s1, 0x20
    ctx->pc = 0x1a9098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)32);
label_1a909c:
    // 0x1a909c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a909cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a90a0:
    // 0x1a90a0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1a90a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a90a4:
    // 0x1a90a4: 0x12400021  beqz        $s2, . + 4 + (0x21 << 2)
label_1a90a8:
    if (ctx->pc == 0x1A90A8u) {
        ctx->pc = 0x1A90ACu;
        goto label_1a90ac;
    }
    ctx->pc = 0x1A90A4u;
    {
        const bool branch_taken_0x1a90a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a90a4) {
            ctx->pc = 0x1A912Cu;
            goto label_1a912c;
        }
    }
    ctx->pc = 0x1A90ACu;
label_1a90ac:
    // 0x1a90ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a90acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a90b0:
    // 0x1a90b0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1a90b4:
    if (ctx->pc == 0x1A90B4u) {
        ctx->pc = 0x1A90B8u;
        goto label_1a90b8;
    }
    ctx->pc = 0x1A90B0u;
    {
        const bool branch_taken_0x1a90b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a90b0) {
            ctx->pc = 0x1A90E0u;
            goto label_1a90e0;
        }
    }
    ctx->pc = 0x1A90B8u;
label_1a90b8:
    // 0x1a90b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a90bc:
    // 0x1a90bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a90bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a90c0:
    // 0x1a90c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a90c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a90c4:
    // 0x1a90c4: 0x26840a90  addiu       $a0, $s4, 0xA90
    ctx->pc = 0x1a90c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2704));
label_1a90c8:
    // 0x1a90c8: 0xc069bec  jal         func_1A6FB0
label_1a90cc:
    if (ctx->pc == 0x1A90CCu) {
        ctx->pc = 0x1A90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90C8u;
        // 0x1a90cc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90D0u;
        goto label_1a90d0;
    }
    ctx->pc = 0x1A90C8u;
    SET_GPR_U32(ctx, 31, 0x1A90D0u);
    ctx->pc = 0x1A90CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90C8u;
    // 0x1a90cc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB0u, 0x1A90C8u, 0x1A90D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A90D0u;
label_1a90d0:
    // 0x1a90d0: 0x8e8209c0  lw          $v0, 0x9C0($s4)
    ctx->pc = 0x1a90d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2496)));
label_1a90d4:
    // 0x1a90d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a90d8:
    // 0x1a90d8: 0x10000014  b           . + 4 + (0x14 << 2)
label_1a90dc:
    if (ctx->pc == 0x1A90DCu) {
        ctx->pc = 0x1A90DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90D8u;
        // 0x1a90dc: 0xae8209c0  sw          $v0, 0x9C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90E0u;
        goto label_1a90e0;
    }
    ctx->pc = 0x1A90D8u;
    {
        const bool branch_taken_0x1a90d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A90DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90D8u;
        // 0x1a90dc: 0xae8209c0  sw          $v0, 0x9C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90d8) {
            ctx->pc = 0x1A912Cu;
            goto label_1a912c;
        }
    }
    ctx->pc = 0x1A90E0u;
label_1a90e0:
    // 0x1a90e0: 0x8e8209c0  lw          $v0, 0x9C0($s4)
    ctx->pc = 0x1a90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2496)));
label_1a90e4:
    // 0x1a90e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a90e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a90e8:
    // 0x1a90e8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1a90e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_1a90ec:
    // 0x1a90ec: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_1a90f0:
    if (ctx->pc == 0x1A90F0u) {
        ctx->pc = 0x1A90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90ECu;
        // 0x1a90f0: 0xae8209c0  sw          $v0, 0x9C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90F4u;
        goto label_1a90f4;
    }
    ctx->pc = 0x1A90ECu;
    {
        const bool branch_taken_0x1a90ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90ECu;
        // 0x1a90f0: 0xae8209c0  sw          $v0, 0x9C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90ec) {
            ctx->pc = 0x1A912Cu;
            goto label_1a912c;
        }
    }
    ctx->pc = 0x1A90F4u;
label_1a90f4:
    // 0x1a90f4: 0x0  nop
    ctx->pc = 0x1a90f4u;
    // NOP
label_1a90f8:
    // 0x1a90f8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1a90f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1a90fc:
    // 0x1a90fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a9100:
    if (ctx->pc == 0x1A9100u) {
        ctx->pc = 0x1A9104u;
        goto label_1a9104;
    }
    ctx->pc = 0x1A90FCu;
    {
        const bool branch_taken_0x1a90fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a90fc) {
            ctx->pc = 0x1A9120u;
            goto label_1a9120;
        }
    }
    ctx->pc = 0x1A9104u;
label_1a9104:
    // 0x1a9104: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a9104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a9108:
    // 0x1a9108: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a9108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a910c:
    // 0x1a910c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a910cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a9110:
    // 0x1a9110: 0x26840a90  addiu       $a0, $s4, 0xA90
    ctx->pc = 0x1a9110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2704));
label_1a9114:
    // 0x1a9114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a9114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9118:
    // 0x1a9118: 0xc069bec  jal         func_1A6FB0
label_1a911c:
    if (ctx->pc == 0x1A911Cu) {
        ctx->pc = 0x1A911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9118u;
        // 0x1a911c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9120u;
        goto label_1a9120;
    }
    ctx->pc = 0x1A9118u;
    SET_GPR_U32(ctx, 31, 0x1A9120u);
    ctx->pc = 0x1A911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9118u;
    // 0x1a911c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB0u, 0x1A9118u, 0x1A9120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9120u;
label_1a9120:
    // 0x1a9120: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x1a9120u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
label_1a9124:
    // 0x1a9124: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
label_1a9128:
    if (ctx->pc == 0x1A9128u) {
        ctx->pc = 0x1A9128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9124u;
        // 0x1a9128: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A912Cu;
        goto label_1a912c;
    }
    ctx->pc = 0x1A9124u;
    {
        const bool branch_taken_0x1a9124 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9124u;
        // 0x1a9128: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9124) {
            ctx->pc = 0x1A90F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a90f4;
        }
    }
    ctx->pc = 0x1A912Cu;
label_1a912c:
    // 0x1a912c: 0x0  nop
    ctx->pc = 0x1a912cu;
    // NOP
label_1a9130:
    // 0x1a9130: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a9130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a9134:
    // 0x1a9134: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a9134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9138:
    // 0x1a9138: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a9138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a913c:
    // 0x1a913c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a913cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a9140:
    // 0x1a9140: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a9140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a9144:
    // 0x1a9144: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a9144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a9148:
    // 0x1a9148: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a9148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a914c:
    // 0x1a914c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a914cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a9150:
    // 0x1a9150: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a9150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a9154:
    // 0x1a9154: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1a9154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1a9158:
    // 0x1a9158: 0xc06a4e4  jal         func_1A9390
label_1a915c:
    if (ctx->pc == 0x1A915Cu) {
        ctx->pc = 0x1A915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9158u;
        // 0x1a915c: 0x52280a  movz        $a1, $v0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9160u;
        goto label_1a9160;
    }
    ctx->pc = 0x1A9158u;
    SET_GPR_U32(ctx, 31, 0x1A9160u);
    ctx->pc = 0x1A915Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9158u;
    // 0x1a915c: 0x52280a  movz        $a1, $v0, $s2 (Delay Slot)
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9390u, 0x1A9158u, 0x1A9160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9160u;
label_1a9160:
    // 0x1a9160: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a9160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9164:
    // 0x1a9164: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a9164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a9168:
    // 0x1a9168: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a9168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a916c:
    // 0x1a916c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a916cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9170:
    // 0x1a9170: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a9170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a9174:
    // 0x1a9174: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a9174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a9178:
    // 0x1a9178: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a9178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a917c:
    // 0x1a917c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a917cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a9180:
    // 0x1a9180: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a9180u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1a9184:
    // 0x1a9184: 0x0  nop
    ctx->pc = 0x1a9184u;
    // NOP
label_1a9188:
    // 0x1a9188: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1a9188u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1a918c:
    // 0x1a918c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1a918cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1a9190:
    // 0x1a9190: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1a9190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9194:
    // 0x1a9194: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a9194u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a9198:
    // 0x1a9198: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a9198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a919c:
    // 0x1a919c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a919cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a91a0:
    // 0x1a91a0: 0xa06501d3  sb          $a1, 0x1D3($v1)
    ctx->pc = 0x1a91a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 5));
label_1a91a4:
    // 0x1a91a4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1a91a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1a91a8:
    // 0x1a91a8: 0xae830ae4  sw          $v1, 0xAE4($s4)
    ctx->pc = 0x1a91a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2788), GPR_U32(ctx, 3));
label_1a91ac:
    // 0x1a91ac: 0xae800ae8  sw          $zero, 0xAE8($s4)
    ctx->pc = 0x1a91acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2792), GPR_U32(ctx, 0));
label_1a91b0:
    // 0x1a91b0: 0xae820aec  sw          $v0, 0xAEC($s4)
    ctx->pc = 0x1a91b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2796), GPR_U32(ctx, 2));
label_1a91b4:
    // 0x1a91b4: 0xae800af0  sw          $zero, 0xAF0($s4)
    ctx->pc = 0x1a91b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2800), GPR_U32(ctx, 0));
label_1a91b8:
    // 0x1a91b8: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1a91b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_1a91bc:
    // 0x1a91bc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1a91bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1a91c0:
    // 0x1a91c0: 0x29e1821  addu        $v1, $s4, $fp
    ctx->pc = 0x1a91c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
label_1a91c4:
    // 0x1a91c4: 0x8c6206d4  lw          $v0, 0x6D4($v1)
    ctx->pc = 0x1a91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1748)));
label_1a91c8:
    // 0x1a91c8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1a91c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a91cc:
    // 0x1a91cc: 0x1440ff67  bnez        $v0, . + 4 + (-0x99 << 2)
label_1a91d0:
    if (ctx->pc == 0x1A91D0u) {
        ctx->pc = 0x1A91D4u;
        goto label_1a91d4;
    }
    ctx->pc = 0x1A91CCu;
    {
        const bool branch_taken_0x1a91cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a91cc) {
            ctx->pc = 0x1A8F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8f6c;
        }
    }
    ctx->pc = 0x1A91D4u;
label_1a91d4:
    // 0x1a91d4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1a91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1a91d8:
    // 0x1a91d8: 0x27de0068  addiu       $fp, $fp, 0x68
    ctx->pc = 0x1a91d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 104));
label_1a91dc:
    // 0x1a91dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a91e0:
    // 0x1a91e0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1a91e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1a91e4:
    // 0x1a91e4: 0x0  nop
    ctx->pc = 0x1a91e4u;
    // NOP
label_1a91e8:
    // 0x1a91e8: 0x8e8309b0  lw          $v1, 0x9B0($s4)
    ctx->pc = 0x1a91e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
label_1a91ec:
    // 0x1a91ec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1a91ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1a91f0:
    // 0x1a91f0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a91f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a91f4:
    // 0x1a91f4: 0x1440ff5b  bnez        $v0, . + 4 + (-0xA5 << 2)
label_1a91f8:
    if (ctx->pc == 0x1A91F8u) {
        ctx->pc = 0x1A91F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91F4u;
        // 0x1a91f8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A91FCu;
        goto label_1a91fc;
    }
    ctx->pc = 0x1A91F4u;
    {
        const bool branch_taken_0x1a91f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A91F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91F4u;
        // 0x1a91f8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a91f4) {
            ctx->pc = 0x1A8F64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8f64;
        }
    }
    ctx->pc = 0x1A91FCu;
label_1a91fc:
    // 0x1a91fc: 0x8e8209c8  lw          $v0, 0x9C8($s4)
    ctx->pc = 0x1a91fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2504)));
label_1a9200:
    // 0x1a9200: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a9200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a9204:
    // 0x1a9204: 0xae8209c8  sw          $v0, 0x9C8($s4)
    ctx->pc = 0x1a9204u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2504), GPR_U32(ctx, 2));
label_1a9208:
    // 0x1a9208: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a9208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a920c:
    // 0x1a920c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1a920cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_1a9210:
    // 0x1a9210: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1a9210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a9214:
    // 0x1a9214: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a9214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a9218:
    // 0x1a9218: 0x8e820af0  lw          $v0, 0xAF0($s4)
    ctx->pc = 0x1a9218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2800)));
label_1a921c:
    // 0x1a921c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a921cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a9220:
    // 0x1a9220: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a9220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a9224:
    // 0x1a9224: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a9224u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a9228:
    // 0x1a9228: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a9228u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1a922c:
    // 0x1a922c: 0x0  nop
    ctx->pc = 0x1a922cu;
    // NOP
label_1a9230:
    // 0x1a9230: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1a9230u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a9234:
    // 0x1a9234: 0x0  nop
    ctx->pc = 0x1a9234u;
    // NOP
label_1a9238:
    // 0x1a9238: 0x0  nop
    ctx->pc = 0x1a9238u;
    // NOP
label_1a923c:
    // 0x1a923c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a923cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a9240:
    // 0x1a9240: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1a9244:
    if (ctx->pc == 0x1A9244u) {
        ctx->pc = 0x1A9248u;
        goto label_1a9248;
    }
    ctx->pc = 0x1A9240u;
    {
        const bool branch_taken_0x1a9240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9240) {
            ctx->pc = 0x1A927Cu;
            goto label_1a927c;
        }
    }
    ctx->pc = 0x1A9248u;
label_1a9248:
    // 0x1a9248: 0x8e820aec  lw          $v0, 0xAEC($s4)
    ctx->pc = 0x1a9248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2796)));
label_1a924c:
    // 0x1a924c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a9250:
    if (ctx->pc == 0x1A9250u) {
        ctx->pc = 0x1A9254u;
        goto label_1a9254;
    }
    ctx->pc = 0x1A924Cu;
    {
        const bool branch_taken_0x1a924c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a924c) {
            ctx->pc = 0x1A927Cu;
            goto label_1a927c;
        }
    }
    ctx->pc = 0x1A9254u;
label_1a9254:
    // 0x1a9254: 0x8e830ae4  lw          $v1, 0xAE4($s4)
    ctx->pc = 0x1a9254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2788)));
label_1a9258:
    // 0x1a9258: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a925c:
    // 0x1a925c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a925cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9260:
    // 0x1a9260: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a9260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a9264:
    // 0x1a9264: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a9264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a9268:
    // 0x1a9268: 0xc042118  jal         func_108460
label_1a926c:
    if (ctx->pc == 0x1A926Cu) {
        ctx->pc = 0x1A926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9268u;
        // 0x1a926c: 0x8e850ae8  lw          $a1, 0xAE8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9270u;
        goto label_1a9270;
    }
    ctx->pc = 0x1A9268u;
    SET_GPR_U32(ctx, 31, 0x1A9270u);
    ctx->pc = 0x1A926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9268u;
    // 0x1a926c: 0x8e850ae8  lw          $a1, 0xAE8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1A9268u, 0x1A9270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9270u;
label_1a9270:
    // 0x1a9270: 0x8e820aec  lw          $v0, 0xAEC($s4)
    ctx->pc = 0x1a9270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2796)));
label_1a9274:
    // 0x1a9274: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a9274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a9278:
    // 0x1a9278: 0xae820aec  sw          $v0, 0xAEC($s4)
    ctx->pc = 0x1a9278u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2796), GPR_U32(ctx, 2));
label_1a927c:
    // 0x1a927c: 0x8e820af0  lw          $v0, 0xAF0($s4)
    ctx->pc = 0x1a927cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2800)));
label_1a9280:
    // 0x1a9280: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a9280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a9284:
    // 0x1a9284: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a9284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a9288:
    // 0x1a9288: 0xc06a51c  jal         func_1A9470
label_1a928c:
    if (ctx->pc == 0x1A928Cu) {
        ctx->pc = 0x1A928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9288u;
        // 0x1a928c: 0xae820af0  sw          $v0, 0xAF0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9290u;
        goto label_1a9290;
    }
    ctx->pc = 0x1A9288u;
    SET_GPR_U32(ctx, 31, 0x1A9290u);
    ctx->pc = 0x1A928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9288u;
    // 0x1a928c: 0xae820af0  sw          $v0, 0xAF0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 2800), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9470u, 0x1A9288u, 0x1A9290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9290u;
label_1a9290:
    // 0x1a9290: 0x8e8409c0  lw          $a0, 0x9C0($s4)
    ctx->pc = 0x1a9290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2496)));
label_1a9294:
    // 0x1a9294: 0x8e8309c4  lw          $v1, 0x9C4($s4)
    ctx->pc = 0x1a9294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2500)));
label_1a9298:
    // 0x1a9298: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_1a929c:
    if (ctx->pc == 0x1A929Cu) {
        ctx->pc = 0x1A92A0u;
        goto label_1a92a0;
    }
    ctx->pc = 0x1A9298u;
    {
        const bool branch_taken_0x1a9298 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a9298) {
            ctx->pc = 0x1A92D0u;
            goto label_1a92d0;
        }
    }
    ctx->pc = 0x1A92A0u;
label_1a92a0:
    // 0x1a92a0: 0x8f84870c  lw          $a0, -0x78F4($gp)
    ctx->pc = 0x1a92a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936332)));
label_1a92a4:
    // 0x1a92a4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a92a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a92a8:
    // 0x1a92a8: 0x2463dfb0  addiu       $v1, $v1, -0x2050
    ctx->pc = 0x1a92a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959024));
label_1a92ac:
    // 0x1a92ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a92acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a92b0:
    // 0x1a92b0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a92b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1a92b4:
    // 0x1a92b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a92b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a92b8:
    // 0x1a92b8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_1a92bc:
    if (ctx->pc == 0x1A92BCu) {
        ctx->pc = 0x1A92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92B8u;
        // 0x1a92bc: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A92C0u;
        goto label_1a92c0;
    }
    ctx->pc = 0x1A92B8u;
    {
        const bool branch_taken_0x1a92b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92B8u;
        // 0x1a92bc: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a92b8) {
            ctx->pc = 0x1A92D0u;
            goto label_1a92d0;
        }
    }
    ctx->pc = 0x1A92C0u;
label_1a92c0:
    // 0x1a92c0: 0x8e99031c  lw          $t9, 0x31C($s4)
    ctx->pc = 0x1a92c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 796)));
label_1a92c4:
    // 0x1a92c4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a92c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a92c8:
    // 0x1a92c8: 0x320f809  jalr        $t9
label_1a92cc:
    if (ctx->pc == 0x1A92CCu) {
        ctx->pc = 0x1A92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92C8u;
        // 0x1a92cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A92D0u;
        goto label_1a92d0;
    }
    ctx->pc = 0x1A92C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A92D0u);
        ctx->pc = 0x1A92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92C8u;
        // 0x1a92cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A92C8u, 0x1A92D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A92D0u;
label_1a92d0:
    // 0x1a92d0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a92d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a92d4:
    // 0x1a92d4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1a92d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a92d8:
    // 0x1a92d8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a92d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a92dc:
    // 0x1a92dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a92dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a92e0:
    // 0x1a92e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a92e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a92e4:
    // 0x1a92e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a92e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a92e8:
    // 0x1a92e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a92e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a92ec:
    // 0x1a92ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a92ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a92f0:
    // 0x1a92f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a92f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a92f4:
    // 0x1a92f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a92f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a92f8:
    // 0x1a92f8: 0x3e00008  jr          $ra
label_1a92fc:
    if (ctx->pc == 0x1A92FCu) {
        ctx->pc = 0x1A92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92F8u;
        // 0x1a92fc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9300u;
        goto label_fallthrough_0x1a92f8;
    }
    ctx->pc = 0x1A92F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92F8u;
        // 0x1a92fc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A92F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a92f8:
    ctx->pc = 0x1A9300u;
}
