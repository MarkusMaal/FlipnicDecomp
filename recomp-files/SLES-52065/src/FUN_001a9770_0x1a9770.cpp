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

// Function: FUN_001a9770
// Address: 0x1a9770 - 0x1aa150
void FUN_001a9770_0x1a9770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a9770_0x1a9770");
#endif

    switch (ctx->pc) {
        case 0x1a9770u: goto label_1a9770;
        case 0x1a9774u: goto label_1a9774;
        case 0x1a9778u: goto label_1a9778;
        case 0x1a977cu: goto label_1a977c;
        case 0x1a9780u: goto label_1a9780;
        case 0x1a9784u: goto label_1a9784;
        case 0x1a9788u: goto label_1a9788;
        case 0x1a978cu: goto label_1a978c;
        case 0x1a9790u: goto label_1a9790;
        case 0x1a9794u: goto label_1a9794;
        case 0x1a9798u: goto label_1a9798;
        case 0x1a979cu: goto label_1a979c;
        case 0x1a97a0u: goto label_1a97a0;
        case 0x1a97a4u: goto label_1a97a4;
        case 0x1a97a8u: goto label_1a97a8;
        case 0x1a97acu: goto label_1a97ac;
        case 0x1a97b0u: goto label_1a97b0;
        case 0x1a97b4u: goto label_1a97b4;
        case 0x1a97b8u: goto label_1a97b8;
        case 0x1a97bcu: goto label_1a97bc;
        case 0x1a97c0u: goto label_1a97c0;
        case 0x1a97c4u: goto label_1a97c4;
        case 0x1a97c8u: goto label_1a97c8;
        case 0x1a97ccu: goto label_1a97cc;
        case 0x1a97d0u: goto label_1a97d0;
        case 0x1a97d4u: goto label_1a97d4;
        case 0x1a97d8u: goto label_1a97d8;
        case 0x1a97dcu: goto label_1a97dc;
        case 0x1a97e0u: goto label_1a97e0;
        case 0x1a97e4u: goto label_1a97e4;
        case 0x1a97e8u: goto label_1a97e8;
        case 0x1a97ecu: goto label_1a97ec;
        case 0x1a97f0u: goto label_1a97f0;
        case 0x1a97f4u: goto label_1a97f4;
        case 0x1a97f8u: goto label_1a97f8;
        case 0x1a97fcu: goto label_1a97fc;
        case 0x1a9800u: goto label_1a9800;
        case 0x1a9804u: goto label_1a9804;
        case 0x1a9808u: goto label_1a9808;
        case 0x1a980cu: goto label_1a980c;
        case 0x1a9810u: goto label_1a9810;
        case 0x1a9814u: goto label_1a9814;
        case 0x1a9818u: goto label_1a9818;
        case 0x1a981cu: goto label_1a981c;
        case 0x1a9820u: goto label_1a9820;
        case 0x1a9824u: goto label_1a9824;
        case 0x1a9828u: goto label_1a9828;
        case 0x1a982cu: goto label_1a982c;
        case 0x1a9830u: goto label_1a9830;
        case 0x1a9834u: goto label_1a9834;
        case 0x1a9838u: goto label_1a9838;
        case 0x1a983cu: goto label_1a983c;
        case 0x1a9840u: goto label_1a9840;
        case 0x1a9844u: goto label_1a9844;
        case 0x1a9848u: goto label_1a9848;
        case 0x1a984cu: goto label_1a984c;
        case 0x1a9850u: goto label_1a9850;
        case 0x1a9854u: goto label_1a9854;
        case 0x1a9858u: goto label_1a9858;
        case 0x1a985cu: goto label_1a985c;
        case 0x1a9860u: goto label_1a9860;
        case 0x1a9864u: goto label_1a9864;
        case 0x1a9868u: goto label_1a9868;
        case 0x1a986cu: goto label_1a986c;
        case 0x1a9870u: goto label_1a9870;
        case 0x1a9874u: goto label_1a9874;
        case 0x1a9878u: goto label_1a9878;
        case 0x1a987cu: goto label_1a987c;
        case 0x1a9880u: goto label_1a9880;
        case 0x1a9884u: goto label_1a9884;
        case 0x1a9888u: goto label_1a9888;
        case 0x1a988cu: goto label_1a988c;
        case 0x1a9890u: goto label_1a9890;
        case 0x1a9894u: goto label_1a9894;
        case 0x1a9898u: goto label_1a9898;
        case 0x1a989cu: goto label_1a989c;
        case 0x1a98a0u: goto label_1a98a0;
        case 0x1a98a4u: goto label_1a98a4;
        case 0x1a98a8u: goto label_1a98a8;
        case 0x1a98acu: goto label_1a98ac;
        case 0x1a98b0u: goto label_1a98b0;
        case 0x1a98b4u: goto label_1a98b4;
        case 0x1a98b8u: goto label_1a98b8;
        case 0x1a98bcu: goto label_1a98bc;
        case 0x1a98c0u: goto label_1a98c0;
        case 0x1a98c4u: goto label_1a98c4;
        case 0x1a98c8u: goto label_1a98c8;
        case 0x1a98ccu: goto label_1a98cc;
        case 0x1a98d0u: goto label_1a98d0;
        case 0x1a98d4u: goto label_1a98d4;
        case 0x1a98d8u: goto label_1a98d8;
        case 0x1a98dcu: goto label_1a98dc;
        case 0x1a98e0u: goto label_1a98e0;
        case 0x1a98e4u: goto label_1a98e4;
        case 0x1a98e8u: goto label_1a98e8;
        case 0x1a98ecu: goto label_1a98ec;
        case 0x1a98f0u: goto label_1a98f0;
        case 0x1a98f4u: goto label_1a98f4;
        case 0x1a98f8u: goto label_1a98f8;
        case 0x1a98fcu: goto label_1a98fc;
        case 0x1a9900u: goto label_1a9900;
        case 0x1a9904u: goto label_1a9904;
        case 0x1a9908u: goto label_1a9908;
        case 0x1a990cu: goto label_1a990c;
        case 0x1a9910u: goto label_1a9910;
        case 0x1a9914u: goto label_1a9914;
        case 0x1a9918u: goto label_1a9918;
        case 0x1a991cu: goto label_1a991c;
        case 0x1a9920u: goto label_1a9920;
        case 0x1a9924u: goto label_1a9924;
        case 0x1a9928u: goto label_1a9928;
        case 0x1a992cu: goto label_1a992c;
        case 0x1a9930u: goto label_1a9930;
        case 0x1a9934u: goto label_1a9934;
        case 0x1a9938u: goto label_1a9938;
        case 0x1a993cu: goto label_1a993c;
        case 0x1a9940u: goto label_1a9940;
        case 0x1a9944u: goto label_1a9944;
        case 0x1a9948u: goto label_1a9948;
        case 0x1a994cu: goto label_1a994c;
        case 0x1a9950u: goto label_1a9950;
        case 0x1a9954u: goto label_1a9954;
        case 0x1a9958u: goto label_1a9958;
        case 0x1a995cu: goto label_1a995c;
        case 0x1a9960u: goto label_1a9960;
        case 0x1a9964u: goto label_1a9964;
        case 0x1a9968u: goto label_1a9968;
        case 0x1a996cu: goto label_1a996c;
        case 0x1a9970u: goto label_1a9970;
        case 0x1a9974u: goto label_1a9974;
        case 0x1a9978u: goto label_1a9978;
        case 0x1a997cu: goto label_1a997c;
        case 0x1a9980u: goto label_1a9980;
        case 0x1a9984u: goto label_1a9984;
        case 0x1a9988u: goto label_1a9988;
        case 0x1a998cu: goto label_1a998c;
        case 0x1a9990u: goto label_1a9990;
        case 0x1a9994u: goto label_1a9994;
        case 0x1a9998u: goto label_1a9998;
        case 0x1a999cu: goto label_1a999c;
        case 0x1a99a0u: goto label_1a99a0;
        case 0x1a99a4u: goto label_1a99a4;
        case 0x1a99a8u: goto label_1a99a8;
        case 0x1a99acu: goto label_1a99ac;
        case 0x1a99b0u: goto label_1a99b0;
        case 0x1a99b4u: goto label_1a99b4;
        case 0x1a99b8u: goto label_1a99b8;
        case 0x1a99bcu: goto label_1a99bc;
        case 0x1a99c0u: goto label_1a99c0;
        case 0x1a99c4u: goto label_1a99c4;
        case 0x1a99c8u: goto label_1a99c8;
        case 0x1a99ccu: goto label_1a99cc;
        case 0x1a99d0u: goto label_1a99d0;
        case 0x1a99d4u: goto label_1a99d4;
        case 0x1a99d8u: goto label_1a99d8;
        case 0x1a99dcu: goto label_1a99dc;
        case 0x1a99e0u: goto label_1a99e0;
        case 0x1a99e4u: goto label_1a99e4;
        case 0x1a99e8u: goto label_1a99e8;
        case 0x1a99ecu: goto label_1a99ec;
        case 0x1a99f0u: goto label_1a99f0;
        case 0x1a99f4u: goto label_1a99f4;
        case 0x1a99f8u: goto label_1a99f8;
        case 0x1a99fcu: goto label_1a99fc;
        case 0x1a9a00u: goto label_1a9a00;
        case 0x1a9a04u: goto label_1a9a04;
        case 0x1a9a08u: goto label_1a9a08;
        case 0x1a9a0cu: goto label_1a9a0c;
        case 0x1a9a10u: goto label_1a9a10;
        case 0x1a9a14u: goto label_1a9a14;
        case 0x1a9a18u: goto label_1a9a18;
        case 0x1a9a1cu: goto label_1a9a1c;
        case 0x1a9a20u: goto label_1a9a20;
        case 0x1a9a24u: goto label_1a9a24;
        case 0x1a9a28u: goto label_1a9a28;
        case 0x1a9a2cu: goto label_1a9a2c;
        case 0x1a9a30u: goto label_1a9a30;
        case 0x1a9a34u: goto label_1a9a34;
        case 0x1a9a38u: goto label_1a9a38;
        case 0x1a9a3cu: goto label_1a9a3c;
        case 0x1a9a40u: goto label_1a9a40;
        case 0x1a9a44u: goto label_1a9a44;
        case 0x1a9a48u: goto label_1a9a48;
        case 0x1a9a4cu: goto label_1a9a4c;
        case 0x1a9a50u: goto label_1a9a50;
        case 0x1a9a54u: goto label_1a9a54;
        case 0x1a9a58u: goto label_1a9a58;
        case 0x1a9a5cu: goto label_1a9a5c;
        case 0x1a9a60u: goto label_1a9a60;
        case 0x1a9a64u: goto label_1a9a64;
        case 0x1a9a68u: goto label_1a9a68;
        case 0x1a9a6cu: goto label_1a9a6c;
        case 0x1a9a70u: goto label_1a9a70;
        case 0x1a9a74u: goto label_1a9a74;
        case 0x1a9a78u: goto label_1a9a78;
        case 0x1a9a7cu: goto label_1a9a7c;
        case 0x1a9a80u: goto label_1a9a80;
        case 0x1a9a84u: goto label_1a9a84;
        case 0x1a9a88u: goto label_1a9a88;
        case 0x1a9a8cu: goto label_1a9a8c;
        case 0x1a9a90u: goto label_1a9a90;
        case 0x1a9a94u: goto label_1a9a94;
        case 0x1a9a98u: goto label_1a9a98;
        case 0x1a9a9cu: goto label_1a9a9c;
        case 0x1a9aa0u: goto label_1a9aa0;
        case 0x1a9aa4u: goto label_1a9aa4;
        case 0x1a9aa8u: goto label_1a9aa8;
        case 0x1a9aacu: goto label_1a9aac;
        case 0x1a9ab0u: goto label_1a9ab0;
        case 0x1a9ab4u: goto label_1a9ab4;
        case 0x1a9ab8u: goto label_1a9ab8;
        case 0x1a9abcu: goto label_1a9abc;
        case 0x1a9ac0u: goto label_1a9ac0;
        case 0x1a9ac4u: goto label_1a9ac4;
        case 0x1a9ac8u: goto label_1a9ac8;
        case 0x1a9accu: goto label_1a9acc;
        case 0x1a9ad0u: goto label_1a9ad0;
        case 0x1a9ad4u: goto label_1a9ad4;
        case 0x1a9ad8u: goto label_1a9ad8;
        case 0x1a9adcu: goto label_1a9adc;
        case 0x1a9ae0u: goto label_1a9ae0;
        case 0x1a9ae4u: goto label_1a9ae4;
        case 0x1a9ae8u: goto label_1a9ae8;
        case 0x1a9aecu: goto label_1a9aec;
        case 0x1a9af0u: goto label_1a9af0;
        case 0x1a9af4u: goto label_1a9af4;
        case 0x1a9af8u: goto label_1a9af8;
        case 0x1a9afcu: goto label_1a9afc;
        case 0x1a9b00u: goto label_1a9b00;
        case 0x1a9b04u: goto label_1a9b04;
        case 0x1a9b08u: goto label_1a9b08;
        case 0x1a9b0cu: goto label_1a9b0c;
        case 0x1a9b10u: goto label_1a9b10;
        case 0x1a9b14u: goto label_1a9b14;
        case 0x1a9b18u: goto label_1a9b18;
        case 0x1a9b1cu: goto label_1a9b1c;
        case 0x1a9b20u: goto label_1a9b20;
        case 0x1a9b24u: goto label_1a9b24;
        case 0x1a9b28u: goto label_1a9b28;
        case 0x1a9b2cu: goto label_1a9b2c;
        case 0x1a9b30u: goto label_1a9b30;
        case 0x1a9b34u: goto label_1a9b34;
        case 0x1a9b38u: goto label_1a9b38;
        case 0x1a9b3cu: goto label_1a9b3c;
        case 0x1a9b40u: goto label_1a9b40;
        case 0x1a9b44u: goto label_1a9b44;
        case 0x1a9b48u: goto label_1a9b48;
        case 0x1a9b4cu: goto label_1a9b4c;
        case 0x1a9b50u: goto label_1a9b50;
        case 0x1a9b54u: goto label_1a9b54;
        case 0x1a9b58u: goto label_1a9b58;
        case 0x1a9b5cu: goto label_1a9b5c;
        case 0x1a9b60u: goto label_1a9b60;
        case 0x1a9b64u: goto label_1a9b64;
        case 0x1a9b68u: goto label_1a9b68;
        case 0x1a9b6cu: goto label_1a9b6c;
        case 0x1a9b70u: goto label_1a9b70;
        case 0x1a9b74u: goto label_1a9b74;
        case 0x1a9b78u: goto label_1a9b78;
        case 0x1a9b7cu: goto label_1a9b7c;
        case 0x1a9b80u: goto label_1a9b80;
        case 0x1a9b84u: goto label_1a9b84;
        case 0x1a9b88u: goto label_1a9b88;
        case 0x1a9b8cu: goto label_1a9b8c;
        case 0x1a9b90u: goto label_1a9b90;
        case 0x1a9b94u: goto label_1a9b94;
        case 0x1a9b98u: goto label_1a9b98;
        case 0x1a9b9cu: goto label_1a9b9c;
        case 0x1a9ba0u: goto label_1a9ba0;
        case 0x1a9ba4u: goto label_1a9ba4;
        case 0x1a9ba8u: goto label_1a9ba8;
        case 0x1a9bacu: goto label_1a9bac;
        case 0x1a9bb0u: goto label_1a9bb0;
        case 0x1a9bb4u: goto label_1a9bb4;
        case 0x1a9bb8u: goto label_1a9bb8;
        case 0x1a9bbcu: goto label_1a9bbc;
        case 0x1a9bc0u: goto label_1a9bc0;
        case 0x1a9bc4u: goto label_1a9bc4;
        case 0x1a9bc8u: goto label_1a9bc8;
        case 0x1a9bccu: goto label_1a9bcc;
        case 0x1a9bd0u: goto label_1a9bd0;
        case 0x1a9bd4u: goto label_1a9bd4;
        case 0x1a9bd8u: goto label_1a9bd8;
        case 0x1a9bdcu: goto label_1a9bdc;
        case 0x1a9be0u: goto label_1a9be0;
        case 0x1a9be4u: goto label_1a9be4;
        case 0x1a9be8u: goto label_1a9be8;
        case 0x1a9becu: goto label_1a9bec;
        case 0x1a9bf0u: goto label_1a9bf0;
        case 0x1a9bf4u: goto label_1a9bf4;
        case 0x1a9bf8u: goto label_1a9bf8;
        case 0x1a9bfcu: goto label_1a9bfc;
        case 0x1a9c00u: goto label_1a9c00;
        case 0x1a9c04u: goto label_1a9c04;
        case 0x1a9c08u: goto label_1a9c08;
        case 0x1a9c0cu: goto label_1a9c0c;
        case 0x1a9c10u: goto label_1a9c10;
        case 0x1a9c14u: goto label_1a9c14;
        case 0x1a9c18u: goto label_1a9c18;
        case 0x1a9c1cu: goto label_1a9c1c;
        case 0x1a9c20u: goto label_1a9c20;
        case 0x1a9c24u: goto label_1a9c24;
        case 0x1a9c28u: goto label_1a9c28;
        case 0x1a9c2cu: goto label_1a9c2c;
        case 0x1a9c30u: goto label_1a9c30;
        case 0x1a9c34u: goto label_1a9c34;
        case 0x1a9c38u: goto label_1a9c38;
        case 0x1a9c3cu: goto label_1a9c3c;
        case 0x1a9c40u: goto label_1a9c40;
        case 0x1a9c44u: goto label_1a9c44;
        case 0x1a9c48u: goto label_1a9c48;
        case 0x1a9c4cu: goto label_1a9c4c;
        case 0x1a9c50u: goto label_1a9c50;
        case 0x1a9c54u: goto label_1a9c54;
        case 0x1a9c58u: goto label_1a9c58;
        case 0x1a9c5cu: goto label_1a9c5c;
        case 0x1a9c60u: goto label_1a9c60;
        case 0x1a9c64u: goto label_1a9c64;
        case 0x1a9c68u: goto label_1a9c68;
        case 0x1a9c6cu: goto label_1a9c6c;
        case 0x1a9c70u: goto label_1a9c70;
        case 0x1a9c74u: goto label_1a9c74;
        case 0x1a9c78u: goto label_1a9c78;
        case 0x1a9c7cu: goto label_1a9c7c;
        case 0x1a9c80u: goto label_1a9c80;
        case 0x1a9c84u: goto label_1a9c84;
        case 0x1a9c88u: goto label_1a9c88;
        case 0x1a9c8cu: goto label_1a9c8c;
        case 0x1a9c90u: goto label_1a9c90;
        case 0x1a9c94u: goto label_1a9c94;
        case 0x1a9c98u: goto label_1a9c98;
        case 0x1a9c9cu: goto label_1a9c9c;
        case 0x1a9ca0u: goto label_1a9ca0;
        case 0x1a9ca4u: goto label_1a9ca4;
        case 0x1a9ca8u: goto label_1a9ca8;
        case 0x1a9cacu: goto label_1a9cac;
        case 0x1a9cb0u: goto label_1a9cb0;
        case 0x1a9cb4u: goto label_1a9cb4;
        case 0x1a9cb8u: goto label_1a9cb8;
        case 0x1a9cbcu: goto label_1a9cbc;
        case 0x1a9cc0u: goto label_1a9cc0;
        case 0x1a9cc4u: goto label_1a9cc4;
        case 0x1a9cc8u: goto label_1a9cc8;
        case 0x1a9cccu: goto label_1a9ccc;
        case 0x1a9cd0u: goto label_1a9cd0;
        case 0x1a9cd4u: goto label_1a9cd4;
        case 0x1a9cd8u: goto label_1a9cd8;
        case 0x1a9cdcu: goto label_1a9cdc;
        case 0x1a9ce0u: goto label_1a9ce0;
        case 0x1a9ce4u: goto label_1a9ce4;
        case 0x1a9ce8u: goto label_1a9ce8;
        case 0x1a9cecu: goto label_1a9cec;
        case 0x1a9cf0u: goto label_1a9cf0;
        case 0x1a9cf4u: goto label_1a9cf4;
        case 0x1a9cf8u: goto label_1a9cf8;
        case 0x1a9cfcu: goto label_1a9cfc;
        case 0x1a9d00u: goto label_1a9d00;
        case 0x1a9d04u: goto label_1a9d04;
        case 0x1a9d08u: goto label_1a9d08;
        case 0x1a9d0cu: goto label_1a9d0c;
        case 0x1a9d10u: goto label_1a9d10;
        case 0x1a9d14u: goto label_1a9d14;
        case 0x1a9d18u: goto label_1a9d18;
        case 0x1a9d1cu: goto label_1a9d1c;
        case 0x1a9d20u: goto label_1a9d20;
        case 0x1a9d24u: goto label_1a9d24;
        case 0x1a9d28u: goto label_1a9d28;
        case 0x1a9d2cu: goto label_1a9d2c;
        case 0x1a9d30u: goto label_1a9d30;
        case 0x1a9d34u: goto label_1a9d34;
        case 0x1a9d38u: goto label_1a9d38;
        case 0x1a9d3cu: goto label_1a9d3c;
        case 0x1a9d40u: goto label_1a9d40;
        case 0x1a9d44u: goto label_1a9d44;
        case 0x1a9d48u: goto label_1a9d48;
        case 0x1a9d4cu: goto label_1a9d4c;
        case 0x1a9d50u: goto label_1a9d50;
        case 0x1a9d54u: goto label_1a9d54;
        case 0x1a9d58u: goto label_1a9d58;
        case 0x1a9d5cu: goto label_1a9d5c;
        case 0x1a9d60u: goto label_1a9d60;
        case 0x1a9d64u: goto label_1a9d64;
        case 0x1a9d68u: goto label_1a9d68;
        case 0x1a9d6cu: goto label_1a9d6c;
        case 0x1a9d70u: goto label_1a9d70;
        case 0x1a9d74u: goto label_1a9d74;
        case 0x1a9d78u: goto label_1a9d78;
        case 0x1a9d7cu: goto label_1a9d7c;
        case 0x1a9d80u: goto label_1a9d80;
        case 0x1a9d84u: goto label_1a9d84;
        case 0x1a9d88u: goto label_1a9d88;
        case 0x1a9d8cu: goto label_1a9d8c;
        case 0x1a9d90u: goto label_1a9d90;
        case 0x1a9d94u: goto label_1a9d94;
        case 0x1a9d98u: goto label_1a9d98;
        case 0x1a9d9cu: goto label_1a9d9c;
        case 0x1a9da0u: goto label_1a9da0;
        case 0x1a9da4u: goto label_1a9da4;
        case 0x1a9da8u: goto label_1a9da8;
        case 0x1a9dacu: goto label_1a9dac;
        case 0x1a9db0u: goto label_1a9db0;
        case 0x1a9db4u: goto label_1a9db4;
        case 0x1a9db8u: goto label_1a9db8;
        case 0x1a9dbcu: goto label_1a9dbc;
        case 0x1a9dc0u: goto label_1a9dc0;
        case 0x1a9dc4u: goto label_1a9dc4;
        case 0x1a9dc8u: goto label_1a9dc8;
        case 0x1a9dccu: goto label_1a9dcc;
        case 0x1a9dd0u: goto label_1a9dd0;
        case 0x1a9dd4u: goto label_1a9dd4;
        case 0x1a9dd8u: goto label_1a9dd8;
        case 0x1a9ddcu: goto label_1a9ddc;
        case 0x1a9de0u: goto label_1a9de0;
        case 0x1a9de4u: goto label_1a9de4;
        case 0x1a9de8u: goto label_1a9de8;
        case 0x1a9decu: goto label_1a9dec;
        case 0x1a9df0u: goto label_1a9df0;
        case 0x1a9df4u: goto label_1a9df4;
        case 0x1a9df8u: goto label_1a9df8;
        case 0x1a9dfcu: goto label_1a9dfc;
        case 0x1a9e00u: goto label_1a9e00;
        case 0x1a9e04u: goto label_1a9e04;
        case 0x1a9e08u: goto label_1a9e08;
        case 0x1a9e0cu: goto label_1a9e0c;
        case 0x1a9e10u: goto label_1a9e10;
        case 0x1a9e14u: goto label_1a9e14;
        case 0x1a9e18u: goto label_1a9e18;
        case 0x1a9e1cu: goto label_1a9e1c;
        case 0x1a9e20u: goto label_1a9e20;
        case 0x1a9e24u: goto label_1a9e24;
        case 0x1a9e28u: goto label_1a9e28;
        case 0x1a9e2cu: goto label_1a9e2c;
        case 0x1a9e30u: goto label_1a9e30;
        case 0x1a9e34u: goto label_1a9e34;
        case 0x1a9e38u: goto label_1a9e38;
        case 0x1a9e3cu: goto label_1a9e3c;
        case 0x1a9e40u: goto label_1a9e40;
        case 0x1a9e44u: goto label_1a9e44;
        case 0x1a9e48u: goto label_1a9e48;
        case 0x1a9e4cu: goto label_1a9e4c;
        case 0x1a9e50u: goto label_1a9e50;
        case 0x1a9e54u: goto label_1a9e54;
        case 0x1a9e58u: goto label_1a9e58;
        case 0x1a9e5cu: goto label_1a9e5c;
        case 0x1a9e60u: goto label_1a9e60;
        case 0x1a9e64u: goto label_1a9e64;
        case 0x1a9e68u: goto label_1a9e68;
        case 0x1a9e6cu: goto label_1a9e6c;
        case 0x1a9e70u: goto label_1a9e70;
        case 0x1a9e74u: goto label_1a9e74;
        case 0x1a9e78u: goto label_1a9e78;
        case 0x1a9e7cu: goto label_1a9e7c;
        case 0x1a9e80u: goto label_1a9e80;
        case 0x1a9e84u: goto label_1a9e84;
        case 0x1a9e88u: goto label_1a9e88;
        case 0x1a9e8cu: goto label_1a9e8c;
        case 0x1a9e90u: goto label_1a9e90;
        case 0x1a9e94u: goto label_1a9e94;
        case 0x1a9e98u: goto label_1a9e98;
        case 0x1a9e9cu: goto label_1a9e9c;
        case 0x1a9ea0u: goto label_1a9ea0;
        case 0x1a9ea4u: goto label_1a9ea4;
        case 0x1a9ea8u: goto label_1a9ea8;
        case 0x1a9eacu: goto label_1a9eac;
        case 0x1a9eb0u: goto label_1a9eb0;
        case 0x1a9eb4u: goto label_1a9eb4;
        case 0x1a9eb8u: goto label_1a9eb8;
        case 0x1a9ebcu: goto label_1a9ebc;
        case 0x1a9ec0u: goto label_1a9ec0;
        case 0x1a9ec4u: goto label_1a9ec4;
        case 0x1a9ec8u: goto label_1a9ec8;
        case 0x1a9eccu: goto label_1a9ecc;
        case 0x1a9ed0u: goto label_1a9ed0;
        case 0x1a9ed4u: goto label_1a9ed4;
        case 0x1a9ed8u: goto label_1a9ed8;
        case 0x1a9edcu: goto label_1a9edc;
        case 0x1a9ee0u: goto label_1a9ee0;
        case 0x1a9ee4u: goto label_1a9ee4;
        case 0x1a9ee8u: goto label_1a9ee8;
        case 0x1a9eecu: goto label_1a9eec;
        case 0x1a9ef0u: goto label_1a9ef0;
        case 0x1a9ef4u: goto label_1a9ef4;
        case 0x1a9ef8u: goto label_1a9ef8;
        case 0x1a9efcu: goto label_1a9efc;
        case 0x1a9f00u: goto label_1a9f00;
        case 0x1a9f04u: goto label_1a9f04;
        case 0x1a9f08u: goto label_1a9f08;
        case 0x1a9f0cu: goto label_1a9f0c;
        case 0x1a9f10u: goto label_1a9f10;
        case 0x1a9f14u: goto label_1a9f14;
        case 0x1a9f18u: goto label_1a9f18;
        case 0x1a9f1cu: goto label_1a9f1c;
        case 0x1a9f20u: goto label_1a9f20;
        case 0x1a9f24u: goto label_1a9f24;
        case 0x1a9f28u: goto label_1a9f28;
        case 0x1a9f2cu: goto label_1a9f2c;
        case 0x1a9f30u: goto label_1a9f30;
        case 0x1a9f34u: goto label_1a9f34;
        case 0x1a9f38u: goto label_1a9f38;
        case 0x1a9f3cu: goto label_1a9f3c;
        case 0x1a9f40u: goto label_1a9f40;
        case 0x1a9f44u: goto label_1a9f44;
        case 0x1a9f48u: goto label_1a9f48;
        case 0x1a9f4cu: goto label_1a9f4c;
        case 0x1a9f50u: goto label_1a9f50;
        case 0x1a9f54u: goto label_1a9f54;
        case 0x1a9f58u: goto label_1a9f58;
        case 0x1a9f5cu: goto label_1a9f5c;
        case 0x1a9f60u: goto label_1a9f60;
        case 0x1a9f64u: goto label_1a9f64;
        case 0x1a9f68u: goto label_1a9f68;
        case 0x1a9f6cu: goto label_1a9f6c;
        case 0x1a9f70u: goto label_1a9f70;
        case 0x1a9f74u: goto label_1a9f74;
        case 0x1a9f78u: goto label_1a9f78;
        case 0x1a9f7cu: goto label_1a9f7c;
        case 0x1a9f80u: goto label_1a9f80;
        case 0x1a9f84u: goto label_1a9f84;
        case 0x1a9f88u: goto label_1a9f88;
        case 0x1a9f8cu: goto label_1a9f8c;
        case 0x1a9f90u: goto label_1a9f90;
        case 0x1a9f94u: goto label_1a9f94;
        case 0x1a9f98u: goto label_1a9f98;
        case 0x1a9f9cu: goto label_1a9f9c;
        case 0x1a9fa0u: goto label_1a9fa0;
        case 0x1a9fa4u: goto label_1a9fa4;
        case 0x1a9fa8u: goto label_1a9fa8;
        case 0x1a9facu: goto label_1a9fac;
        case 0x1a9fb0u: goto label_1a9fb0;
        case 0x1a9fb4u: goto label_1a9fb4;
        case 0x1a9fb8u: goto label_1a9fb8;
        case 0x1a9fbcu: goto label_1a9fbc;
        case 0x1a9fc0u: goto label_1a9fc0;
        case 0x1a9fc4u: goto label_1a9fc4;
        case 0x1a9fc8u: goto label_1a9fc8;
        case 0x1a9fccu: goto label_1a9fcc;
        case 0x1a9fd0u: goto label_1a9fd0;
        case 0x1a9fd4u: goto label_1a9fd4;
        case 0x1a9fd8u: goto label_1a9fd8;
        case 0x1a9fdcu: goto label_1a9fdc;
        case 0x1a9fe0u: goto label_1a9fe0;
        case 0x1a9fe4u: goto label_1a9fe4;
        case 0x1a9fe8u: goto label_1a9fe8;
        case 0x1a9fecu: goto label_1a9fec;
        case 0x1a9ff0u: goto label_1a9ff0;
        case 0x1a9ff4u: goto label_1a9ff4;
        case 0x1a9ff8u: goto label_1a9ff8;
        case 0x1a9ffcu: goto label_1a9ffc;
        case 0x1aa000u: goto label_1aa000;
        case 0x1aa004u: goto label_1aa004;
        case 0x1aa008u: goto label_1aa008;
        case 0x1aa00cu: goto label_1aa00c;
        case 0x1aa010u: goto label_1aa010;
        case 0x1aa014u: goto label_1aa014;
        case 0x1aa018u: goto label_1aa018;
        case 0x1aa01cu: goto label_1aa01c;
        case 0x1aa020u: goto label_1aa020;
        case 0x1aa024u: goto label_1aa024;
        case 0x1aa028u: goto label_1aa028;
        case 0x1aa02cu: goto label_1aa02c;
        case 0x1aa030u: goto label_1aa030;
        case 0x1aa034u: goto label_1aa034;
        case 0x1aa038u: goto label_1aa038;
        case 0x1aa03cu: goto label_1aa03c;
        case 0x1aa040u: goto label_1aa040;
        case 0x1aa044u: goto label_1aa044;
        case 0x1aa048u: goto label_1aa048;
        case 0x1aa04cu: goto label_1aa04c;
        case 0x1aa050u: goto label_1aa050;
        case 0x1aa054u: goto label_1aa054;
        case 0x1aa058u: goto label_1aa058;
        case 0x1aa05cu: goto label_1aa05c;
        case 0x1aa060u: goto label_1aa060;
        case 0x1aa064u: goto label_1aa064;
        case 0x1aa068u: goto label_1aa068;
        case 0x1aa06cu: goto label_1aa06c;
        case 0x1aa070u: goto label_1aa070;
        case 0x1aa074u: goto label_1aa074;
        case 0x1aa078u: goto label_1aa078;
        case 0x1aa07cu: goto label_1aa07c;
        case 0x1aa080u: goto label_1aa080;
        case 0x1aa084u: goto label_1aa084;
        case 0x1aa088u: goto label_1aa088;
        case 0x1aa08cu: goto label_1aa08c;
        case 0x1aa090u: goto label_1aa090;
        case 0x1aa094u: goto label_1aa094;
        case 0x1aa098u: goto label_1aa098;
        case 0x1aa09cu: goto label_1aa09c;
        case 0x1aa0a0u: goto label_1aa0a0;
        case 0x1aa0a4u: goto label_1aa0a4;
        case 0x1aa0a8u: goto label_1aa0a8;
        case 0x1aa0acu: goto label_1aa0ac;
        case 0x1aa0b0u: goto label_1aa0b0;
        case 0x1aa0b4u: goto label_1aa0b4;
        case 0x1aa0b8u: goto label_1aa0b8;
        case 0x1aa0bcu: goto label_1aa0bc;
        case 0x1aa0c0u: goto label_1aa0c0;
        case 0x1aa0c4u: goto label_1aa0c4;
        case 0x1aa0c8u: goto label_1aa0c8;
        case 0x1aa0ccu: goto label_1aa0cc;
        case 0x1aa0d0u: goto label_1aa0d0;
        case 0x1aa0d4u: goto label_1aa0d4;
        case 0x1aa0d8u: goto label_1aa0d8;
        case 0x1aa0dcu: goto label_1aa0dc;
        case 0x1aa0e0u: goto label_1aa0e0;
        case 0x1aa0e4u: goto label_1aa0e4;
        case 0x1aa0e8u: goto label_1aa0e8;
        case 0x1aa0ecu: goto label_1aa0ec;
        case 0x1aa0f0u: goto label_1aa0f0;
        case 0x1aa0f4u: goto label_1aa0f4;
        case 0x1aa0f8u: goto label_1aa0f8;
        case 0x1aa0fcu: goto label_1aa0fc;
        case 0x1aa100u: goto label_1aa100;
        case 0x1aa104u: goto label_1aa104;
        case 0x1aa108u: goto label_1aa108;
        case 0x1aa10cu: goto label_1aa10c;
        case 0x1aa110u: goto label_1aa110;
        case 0x1aa114u: goto label_1aa114;
        case 0x1aa118u: goto label_1aa118;
        case 0x1aa11cu: goto label_1aa11c;
        case 0x1aa120u: goto label_1aa120;
        case 0x1aa124u: goto label_1aa124;
        case 0x1aa128u: goto label_1aa128;
        case 0x1aa12cu: goto label_1aa12c;
        case 0x1aa130u: goto label_1aa130;
        case 0x1aa134u: goto label_1aa134;
        case 0x1aa138u: goto label_1aa138;
        case 0x1aa13cu: goto label_1aa13c;
        case 0x1aa140u: goto label_1aa140;
        case 0x1aa144u: goto label_1aa144;
        case 0x1aa148u: goto label_1aa148;
        case 0x1aa14cu: goto label_1aa14c;
        default: break;
    }

    ctx->pc = 0x1a9770u;

label_1a9770:
    // 0x1a9770: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a9770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1a9774:
    // 0x1a9774: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a9774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1a9778:
    // 0x1a9778: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1a9778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1a977c:
    // 0x1a977c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a977cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1a9780:
    // 0x1a9780: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1a9780u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a9784:
    // 0x1a9784: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a9784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1a9788:
    // 0x1a9788: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a9788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1a978c:
    // 0x1a978c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1a9790:
    // 0x1a9790: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a9790u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9794:
    // 0x1a9794: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a9794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a9798:
    // 0x1a9798: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a9798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a979c:
    // 0x1a979c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a979cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a97a0:
    // 0x1a97a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a97a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a97a4:
    // 0x1a97a4: 0xc063dd4  jal         func_18F750
label_1a97a8:
    if (ctx->pc == 0x1A97A8u) {
        ctx->pc = 0x1A97A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97A4u;
        // 0x1a97a8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97ACu;
        goto label_1a97ac;
    }
    ctx->pc = 0x1A97A4u;
    SET_GPR_U32(ctx, 31, 0x1A97ACu);
    ctx->pc = 0x1A97A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A97A4u;
    // 0x1a97a8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1A97A4u, 0x1A97ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A97ACu;
label_1a97ac:
    // 0x1a97ac: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x1a97acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1a97b0:
    // 0x1a97b0: 0x1020024e  beqz        $at, . + 4 + (0x24E << 2)
label_1a97b4:
    if (ctx->pc == 0x1A97B4u) {
        ctx->pc = 0x1A97B8u;
        goto label_1a97b8;
    }
    ctx->pc = 0x1A97B0u;
    {
        const bool branch_taken_0x1a97b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a97b0) {
            ctx->pc = 0x1AA0ECu;
            goto label_1aa0ec;
        }
    }
    ctx->pc = 0x1A97B8u;
label_1a97b8:
    // 0x1a97b8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1a97b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_1a97bc:
    // 0x1a97bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a97bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a97c0:
    // 0x1a97c0: 0x24840830  addiu       $a0, $a0, 0x830
    ctx->pc = 0x1a97c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2096));
label_1a97c4:
    // 0x1a97c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a97c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a97c8:
    // 0x1a97c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a97c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a97cc:
    // 0x1a97cc: 0x600008  jr          $v1
label_1a97d0:
    if (ctx->pc == 0x1A97D0u) {
        ctx->pc = 0x1A97D4u;
        goto label_1a97d4;
    }
    ctx->pc = 0x1A97CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A97D4u: goto label_1a97d4;
            case 0x1A9B3Cu: goto label_1a9b3c;
            case 0x1A9CACu: goto label_1a9cac;
            case 0x1A9D30u: goto label_1a9d30;
            case 0x1A9D44u: goto label_1a9d44;
            case 0x1A9F80u: goto label_1a9f80;
            case 0x1A9FC0u: goto label_1a9fc0;
            case 0x1AA060u: goto label_1aa060;
            case 0x1AA080u: goto label_1aa080;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A97CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A97D4u;
label_1a97d4:
    // 0x1a97d4: 0xc067f08  jal         func_19FC20
label_1a97d8:
    if (ctx->pc == 0x1A97D8u) {
        ctx->pc = 0x1A97DCu;
        goto label_1a97dc;
    }
    ctx->pc = 0x1A97D4u;
    SET_GPR_U32(ctx, 31, 0x1A97DCu);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1A97D4u, 0x1A97DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A97DCu;
label_1a97dc:
    // 0x1a97dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a97dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a97e0:
    // 0x1a97e0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_1a97e4:
    if (ctx->pc == 0x1A97E4u) {
        ctx->pc = 0x1A97E8u;
        goto label_1a97e8;
    }
    ctx->pc = 0x1A97E0u;
    {
        const bool branch_taken_0x1a97e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a97e0) {
            ctx->pc = 0x1A9808u;
            goto label_1a9808;
        }
    }
    ctx->pc = 0x1A97E8u;
label_1a97e8:
    // 0x1a97e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a97e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a97ec:
    // 0x1a97ec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a97ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a97f0:
    // 0x1a97f0: 0xc067f68  jal         func_19FDA0
label_1a97f4:
    if (ctx->pc == 0x1A97F4u) {
        ctx->pc = 0x1A97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97F0u;
        // 0x1a97f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97F8u;
        goto label_1a97f8;
    }
    ctx->pc = 0x1A97F0u;
    SET_GPR_U32(ctx, 31, 0x1A97F8u);
    ctx->pc = 0x1A97F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A97F0u;
    // 0x1a97f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A97F0u, 0x1A97F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A97F8u;
label_1a97f8:
    // 0x1a97f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a97f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a97fc:
    // 0x1a97fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a97fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9800:
    // 0x1a9800: 0xc067f68  jal         func_19FDA0
label_1a9804:
    if (ctx->pc == 0x1A9804u) {
        ctx->pc = 0x1A9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9800u;
        // 0x1a9804: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9808u;
        goto label_1a9808;
    }
    ctx->pc = 0x1A9800u;
    SET_GPR_U32(ctx, 31, 0x1A9808u);
    ctx->pc = 0x1A9804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9800u;
    // 0x1a9804: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A9800u, 0x1A9808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9808u;
label_1a9808:
    // 0x1a9808: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a9808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a980c:
    // 0x1a980c: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1a980cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a9810:
    // 0x1a9810: 0xc06bd9c  jal         func_1AF670
label_1a9814:
    if (ctx->pc == 0x1A9814u) {
        ctx->pc = 0x1A9814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9810u;
        // 0x1a9814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9818u;
        goto label_1a9818;
    }
    ctx->pc = 0x1A9810u;
    SET_GPR_U32(ctx, 31, 0x1A9818u);
    ctx->pc = 0x1A9814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9810u;
    // 0x1a9814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF670u, 0x1A9810u, 0x1A9818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9818u;
label_1a9818:
    // 0x1a9818: 0x8f848714  lw          $a0, -0x78EC($gp)
    ctx->pc = 0x1a9818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1a981c:
    // 0x1a981c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a981cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9820:
    // 0x1a9820: 0x10c0  sll         $v0, $zero, 3
    ctx->pc = 0x1a9820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_1a9824:
    // 0x1a9824: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a9824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a9828:
    // 0x1a9828: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x1a9828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_1a982c:
    // 0x1a982c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a982cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9830:
    // 0x1a9830: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x1a9830u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a9834:
    // 0x1a9834: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a9834u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9838:
    // 0x1a9838: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x1a9838u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a983c:
    // 0x1a983c: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x1a983cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a9840:
    // 0x1a9840: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1a9840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a9844:
    // 0x1a9844: 0xa08528f5  sb          $a1, 0x28F5($a0)
    ctx->pc = 0x1a9844u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10485), (uint8_t)GPR_U32(ctx, 5));
label_1a9848:
    // 0x1a9848: 0xaea306c4  sw          $v1, 0x6C4($s5)
    ctx->pc = 0x1a9848u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1732), GPR_U32(ctx, 3));
label_1a984c:
    // 0x1a984c: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x1a984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_1a9850:
    // 0x1a9850: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x1a9850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1a9854:
    // 0x1a9854: 0x10000047  b           . + 4 + (0x47 << 2)
label_1a9858:
    if (ctx->pc == 0x1A9858u) {
        ctx->pc = 0x1A9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9854u;
        // 0x1a9858: 0xa2a006cd  sb          $zero, 0x6CD($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1741), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A985Cu;
        goto label_1a985c;
    }
    ctx->pc = 0x1A9854u;
    {
        const bool branch_taken_0x1a9854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9854u;
        // 0x1a9858: 0xa2a006cd  sb          $zero, 0x6CD($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1741), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9854) {
            ctx->pc = 0x1A9974u;
            goto label_1a9974;
        }
    }
    ctx->pc = 0x1A985Cu;
label_1a985c:
    // 0x1a985c: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x1a985cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1a9860:
    // 0x1a9860: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_1a9864:
    if (ctx->pc == 0x1A9864u) {
        ctx->pc = 0x1A9868u;
        goto label_1a9868;
    }
    ctx->pc = 0x1A9860u;
    {
        const bool branch_taken_0x1a9860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9860) {
            ctx->pc = 0x1A996Cu;
            goto label_1a996c;
        }
    }
    ctx->pc = 0x1A9868u;
label_1a9868:
    // 0x1a9868: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1a9868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1a986c:
    // 0x1a986c: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1a986cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a9870:
    // 0x1a9870: 0xc057040  jal         func_15C100
label_1a9874:
    if (ctx->pc == 0x1A9874u) {
        ctx->pc = 0x1A9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9870u;
        // 0x1a9874: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9878u;
        goto label_1a9878;
    }
    ctx->pc = 0x1A9870u;
    SET_GPR_U32(ctx, 31, 0x1A9878u);
    ctx->pc = 0x1A9874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9870u;
    // 0x1a9874: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A9870u, 0x1A9878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9878u;
label_1a9878:
    // 0x1a9878: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x1a9878u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1a987c:
    // 0x1a987c: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x1a987cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_1a9880:
    // 0x1a9880: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
label_1a9884:
    if (ctx->pc == 0x1A9884u) {
        ctx->pc = 0x1A9888u;
        goto label_1a9888;
    }
    ctx->pc = 0x1A9880u;
    {
        const bool branch_taken_0x1a9880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a9880) {
            ctx->pc = 0x1A9958u;
            goto label_1a9958;
        }
    }
    ctx->pc = 0x1A9888u;
label_1a9888:
    // 0x1a9888: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1a9888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1a988c:
    // 0x1a988c: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1a9890:
    if (ctx->pc == 0x1A9890u) {
        ctx->pc = 0x1A9894u;
        goto label_1a9894;
    }
    ctx->pc = 0x1A988Cu;
    {
        const bool branch_taken_0x1a988c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a988c) {
            ctx->pc = 0x1A9910u;
            goto label_1a9910;
        }
    }
    ctx->pc = 0x1A9894u;
label_1a9894:
    // 0x1a9894: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1a9894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1a9898:
    // 0x1a9898: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_1a989c:
    if (ctx->pc == 0x1A989Cu) {
        ctx->pc = 0x1A98A0u;
        goto label_1a98a0;
    }
    ctx->pc = 0x1A9898u;
    {
        const bool branch_taken_0x1a9898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a9898) {
            ctx->pc = 0x1A9900u;
            goto label_1a9900;
        }
    }
    ctx->pc = 0x1A98A0u;
label_1a98a0:
    // 0x1a98a0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1a98a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1a98a4:
    // 0x1a98a4: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_1a98a8:
    if (ctx->pc == 0x1A98A8u) {
        ctx->pc = 0x1A98ACu;
        goto label_1a98ac;
    }
    ctx->pc = 0x1A98A4u;
    {
        const bool branch_taken_0x1a98a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a98a4) {
            ctx->pc = 0x1A98F0u;
            goto label_1a98f0;
        }
    }
    ctx->pc = 0x1A98ACu;
label_1a98ac:
    // 0x1a98ac: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x1a98acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1a98b0:
    // 0x1a98b0: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1a98b4:
    if (ctx->pc == 0x1A98B4u) {
        ctx->pc = 0x1A98B8u;
        goto label_1a98b8;
    }
    ctx->pc = 0x1A98B0u;
    {
        const bool branch_taken_0x1a98b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a98b0) {
            ctx->pc = 0x1A98E0u;
            goto label_1a98e0;
        }
    }
    ctx->pc = 0x1A98B8u;
label_1a98b8:
    // 0x1a98b8: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x1a98b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_1a98bc:
    // 0x1a98bc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1a98c0:
    if (ctx->pc == 0x1A98C0u) {
        ctx->pc = 0x1A98C4u;
        goto label_1a98c4;
    }
    ctx->pc = 0x1A98BCu;
    {
        const bool branch_taken_0x1a98bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a98bc) {
            ctx->pc = 0x1A98CCu;
            goto label_1a98cc;
        }
    }
    ctx->pc = 0x1A98C4u;
label_1a98c4:
    // 0x1a98c4: 0x10000029  b           . + 4 + (0x29 << 2)
label_1a98c8:
    if (ctx->pc == 0x1A98C8u) {
        ctx->pc = 0x1A98CCu;
        goto label_1a98cc;
    }
    ctx->pc = 0x1A98C4u;
    {
        const bool branch_taken_0x1a98c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a98c4) {
            ctx->pc = 0x1A996Cu;
            goto label_1a996c;
        }
    }
    ctx->pc = 0x1A98CCu;
label_1a98cc:
    // 0x1a98cc: 0x0  nop
    ctx->pc = 0x1a98ccu;
    // NOP
label_1a98d0:
    // 0x1a98d0: 0x2b21821  addu        $v1, $s5, $s2
    ctx->pc = 0x1a98d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_1a98d4:
    // 0x1a98d4: 0xac620678  sw          $v0, 0x678($v1)
    ctx->pc = 0x1a98d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1656), GPR_U32(ctx, 2));
label_1a98d8:
    // 0x1a98d8: 0x10000024  b           . + 4 + (0x24 << 2)
label_1a98dc:
    if (ctx->pc == 0x1A98DCu) {
        ctx->pc = 0x1A98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98D8u;
        // 0x1a98dc: 0x26520024  addiu       $s2, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A98E0u;
        goto label_1a98e0;
    }
    ctx->pc = 0x1A98D8u;
    {
        const bool branch_taken_0x1a98d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98D8u;
        // 0x1a98dc: 0x26520024  addiu       $s2, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a98d8) {
            ctx->pc = 0x1A996Cu;
            goto label_1a996c;
        }
    }
    ctx->pc = 0x1A98E0u;
label_1a98e0:
    // 0x1a98e0: 0x2b71821  addu        $v1, $s5, $s7
    ctx->pc = 0x1a98e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
label_1a98e4:
    // 0x1a98e4: 0xac62067c  sw          $v0, 0x67C($v1)
    ctx->pc = 0x1a98e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1660), GPR_U32(ctx, 2));
label_1a98e8:
    // 0x1a98e8: 0x10000020  b           . + 4 + (0x20 << 2)
label_1a98ec:
    if (ctx->pc == 0x1A98ECu) {
        ctx->pc = 0x1A98ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98E8u;
        // 0x1a98ec: 0x26f70024  addiu       $s7, $s7, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A98F0u;
        goto label_1a98f0;
    }
    ctx->pc = 0x1A98E8u;
    {
        const bool branch_taken_0x1a98e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A98ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98E8u;
        // 0x1a98ec: 0x26f70024  addiu       $s7, $s7, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a98e8) {
            ctx->pc = 0x1A996Cu;
            goto label_1a996c;
        }
    }
    ctx->pc = 0x1A98F0u;
label_1a98f0:
    // 0x1a98f0: 0x2b61821  addu        $v1, $s5, $s6
    ctx->pc = 0x1a98f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
label_1a98f4:
    // 0x1a98f4: 0xac620670  sw          $v0, 0x670($v1)
    ctx->pc = 0x1a98f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 2));
label_1a98f8:
    // 0x1a98f8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1a98fc:
    if (ctx->pc == 0x1A98FCu) {
        ctx->pc = 0x1A98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98F8u;
        // 0x1a98fc: 0x26d60024  addiu       $s6, $s6, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9900u;
        goto label_1a9900;
    }
    ctx->pc = 0x1A98F8u;
    {
        const bool branch_taken_0x1a98f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98F8u;
        // 0x1a98fc: 0x26d60024  addiu       $s6, $s6, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a98f8) {
            ctx->pc = 0x1A996Cu;
            goto label_1a996c;
        }
    }
    ctx->pc = 0x1A9900u;
label_1a9900:
    // 0x1a9900: 0x2b31821  addu        $v1, $s5, $s3
    ctx->pc = 0x1a9900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_1a9904:
    // 0x1a9904: 0xac620674  sw          $v0, 0x674($v1)
    ctx->pc = 0x1a9904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1652), GPR_U32(ctx, 2));
label_1a9908:
    // 0x1a9908: 0x10000018  b           . + 4 + (0x18 << 2)
label_1a990c:
    if (ctx->pc == 0x1A990Cu) {
        ctx->pc = 0x1A990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9908u;
        // 0x1a990c: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9910u;
        goto label_1a9910;
    }
    ctx->pc = 0x1A9908u;
    {
        const bool branch_taken_0x1a9908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9908u;
        // 0x1a990c: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9908) {
            ctx->pc = 0x1A996Cu;
            goto label_1a996c;
        }
    }
    ctx->pc = 0x1A9910u;
label_1a9910:
    // 0x1a9910: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_1a9914:
    if (ctx->pc == 0x1A9914u) {
        ctx->pc = 0x1A9914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9910u;
        // 0x1a9914: 0x112883  sra         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9918u;
        goto label_1a9918;
    }
    ctx->pc = 0x1A9910u;
    {
        const bool branch_taken_0x1a9910 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1A9914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9910u;
        // 0x1a9914: 0x112883  sra         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9910) {
            ctx->pc = 0x1A9920u;
            goto label_1a9920;
        }
    }
    ctx->pc = 0x1A9918u;
label_1a9918:
    // 0x1a9918: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a9918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_1a991c:
    // 0x1a991c: 0x32883  sra         $a1, $v1, 2
    ctx->pc = 0x1a991cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
label_1a9920:
    // 0x1a9920: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1a9920u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a9924:
    // 0x1a9924: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x1a9924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_1a9928:
    // 0x1a9928: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a9928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1a992c:
    // 0x1a992c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a992cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a9930:
    // 0x1a9930: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
label_1a9934:
    if (ctx->pc == 0x1A9934u) {
        ctx->pc = 0x1A9934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9930u;
        // 0x1a9934: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9938u;
        goto label_1a9938;
    }
    ctx->pc = 0x1A9930u;
    {
        const bool branch_taken_0x1a9930 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1A9934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9930u;
        // 0x1a9934: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9930) {
            ctx->pc = 0x1A9944u;
            goto label_1a9944;
        }
    }
    ctx->pc = 0x1A9938u;
label_1a9938:
    // 0x1a9938: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1a993c:
    if (ctx->pc == 0x1A993Cu) {
        ctx->pc = 0x1A9940u;
        goto label_1a9940;
    }
    ctx->pc = 0x1A9938u;
    {
        const bool branch_taken_0x1a9938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9938) {
            ctx->pc = 0x1A9944u;
            goto label_1a9944;
        }
    }
    ctx->pc = 0x1A9940u;
label_1a9940:
    // 0x1a9940: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1a9940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_1a9944:
    // 0x1a9944: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9948:
    // 0x1a9948: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a9948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a994c:
    // 0x1a994c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a994cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1a9950:
    // 0x1a9950: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a9954:
    if (ctx->pc == 0x1A9954u) {
        ctx->pc = 0x1A9954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9950u;
        // 0x1a9954: 0xac620680  sw          $v0, 0x680($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9958u;
        goto label_1a9958;
    }
    ctx->pc = 0x1A9950u;
    {
        const bool branch_taken_0x1a9950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9950u;
        // 0x1a9954: 0xac620680  sw          $v0, 0x680($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9950) {
            ctx->pc = 0x1A996Cu;
            goto label_1a996c;
        }
    }
    ctx->pc = 0x1A9958u;
label_1a9958:
    // 0x1a9958: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x1a9958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_1a995c:
    // 0x1a995c: 0xac6206b8  sw          $v0, 0x6B8($v1)
    ctx->pc = 0x1a995cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1720), GPR_U32(ctx, 2));
label_1a9960:
    // 0x1a9960: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1a9960u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_1a9964:
    // 0x1a9964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9968:
    // 0x1a9968: 0xa2a206cd  sb          $v0, 0x6CD($s5)
    ctx->pc = 0x1a9968u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1741), (uint8_t)GPR_U32(ctx, 2));
label_1a996c:
    // 0x1a996c: 0x0  nop
    ctx->pc = 0x1a996cu;
    // NOP
label_1a9970:
    // 0x1a9970: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1a9970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1a9974:
    // 0x1a9974: 0x0  nop
    ctx->pc = 0x1a9974u;
    // NOP
label_1a9978:
    // 0x1a9978: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a9978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a997c:
    // 0x1a997c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a997cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a9980:
    // 0x1a9980: 0x1062ffb6  beq         $v1, $v0, . + 4 + (-0x4A << 2)
label_1a9984:
    if (ctx->pc == 0x1A9984u) {
        ctx->pc = 0x1A9988u;
        goto label_1a9988;
    }
    ctx->pc = 0x1A9980u;
    {
        const bool branch_taken_0x1a9980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9980) {
            ctx->pc = 0x1A985Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a985c;
        }
    }
    ctx->pc = 0x1A9988u;
label_1a9988:
    // 0x1a9988: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a9988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a998c:
    // 0x1a998c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a998cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9990:
    // 0x1a9990: 0x2b3a021  addu        $s4, $s5, $s3
    ctx->pc = 0x1a9990u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_1a9994:
    // 0x1a9994: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9998:
    // 0x1a9998: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x1a9998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1a999c:
    // 0x1a999c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a999cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a99a0:
    // 0x1a99a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a99a4:
    // 0x1a99a4: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a99a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a99a8:
    // 0x1a99a8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a99a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a99ac:
    // 0x1a99ac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a99acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a99b0:
    // 0x1a99b0: 0x320f809  jalr        $t9
label_1a99b4:
    if (ctx->pc == 0x1A99B4u) {
        ctx->pc = 0x1A99B8u;
        goto label_1a99b8;
    }
    ctx->pc = 0x1A99B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A99B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A99B0u, 0x1A99B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A99B8u;
label_1a99b8:
    // 0x1a99b8: 0x8e83067c  lw          $v1, 0x67C($s4)
    ctx->pc = 0x1a99b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1660)));
label_1a99bc:
    // 0x1a99bc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a99c0:
    // 0x1a99c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a99c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a99c4:
    // 0x1a99c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a99c8:
    // 0x1a99c8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a99c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a99cc:
    // 0x1a99cc: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a99ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a99d0:
    // 0x1a99d0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a99d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a99d4:
    // 0x1a99d4: 0x320f809  jalr        $t9
label_1a99d8:
    if (ctx->pc == 0x1A99D8u) {
        ctx->pc = 0x1A99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99D4u;
        // 0x1a99d8: 0x2691067c  addiu       $s1, $s4, 0x67C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1660));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A99DCu;
        goto label_1a99dc;
    }
    ctx->pc = 0x1A99D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A99DCu);
        ctx->pc = 0x1A99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99D4u;
        // 0x1a99d8: 0x2691067c  addiu       $s1, $s4, 0x67C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1660));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A99D4u, 0x1A99DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A99DCu;
label_1a99dc:
    // 0x1a99dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a99dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a99e0:
    // 0x1a99e0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a99e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a99e4:
    // 0x1a99e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a99e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a99e8:
    // 0x1a99e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a99ec:
    // 0x1a99ec: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a99ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a99f0:
    // 0x1a99f0: 0xc042570  jal         func_1095C0
label_1a99f4:
    if (ctx->pc == 0x1A99F4u) {
        ctx->pc = 0x1A99F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99F0u;
        // 0x1a99f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A99F8u;
        goto label_1a99f8;
    }
    ctx->pc = 0x1A99F0u;
    SET_GPR_U32(ctx, 31, 0x1A99F8u);
    ctx->pc = 0x1A99F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A99F0u;
    // 0x1a99f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1A99F0u, 0x1A99F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A99F8u;
label_1a99f8:
    // 0x1a99f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a99f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a99fc:
    // 0x1a99fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a99fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9a00:
    // 0x1a9a00: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1a9a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1a9a04:
    // 0x1a9a04: 0x8c430680  lw          $v1, 0x680($v0)
    ctx->pc = 0x1a9a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1664)));
label_1a9a08:
    // 0x1a9a08: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9a0c:
    // 0x1a9a0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9a10:
    // 0x1a9a10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9a14:
    // 0x1a9a14: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a9a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a9a18:
    // 0x1a9a18: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a9a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a9a1c:
    // 0x1a9a1c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a9a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a9a20:
    // 0x1a9a20: 0x320f809  jalr        $t9
label_1a9a24:
    if (ctx->pc == 0x1A9A24u) {
        ctx->pc = 0x1A9A28u;
        goto label_1a9a28;
    }
    ctx->pc = 0x1A9A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A9A28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9A20u, 0x1A9A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9A28u;
label_1a9a28:
    // 0x1a9a28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a9a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a9a2c:
    // 0x1a9a2c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1a9a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_1a9a30:
    // 0x1a9a30: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1a9a34:
    if (ctx->pc == 0x1A9A34u) {
        ctx->pc = 0x1A9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A30u;
        // 0x1a9a34: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A38u;
        goto label_1a9a38;
    }
    ctx->pc = 0x1A9A30u;
    {
        const bool branch_taken_0x1a9a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A30u;
        // 0x1a9a34: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a30) {
            ctx->pc = 0x1A9A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9a00;
        }
    }
    ctx->pc = 0x1A9A38u;
label_1a9a38:
    // 0x1a9a38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a9a3c:
    // 0x1a9a3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a9a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a9a40:
    // 0x1a9a40: 0xae820690  sw          $v0, 0x690($s4)
    ctx->pc = 0x1a9a40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 2));
label_1a9a44:
    // 0x1a9a44: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1a9a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a9a48:
    // 0x1a9a48: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_1a9a4c:
    if (ctx->pc == 0x1A9A4Cu) {
        ctx->pc = 0x1A9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A48u;
        // 0x1a9a4c: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A50u;
        goto label_1a9a50;
    }
    ctx->pc = 0x1A9A48u;
    {
        const bool branch_taken_0x1a9a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A48u;
        // 0x1a9a4c: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a48) {
            ctx->pc = 0x1A9990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9990;
        }
    }
    ctx->pc = 0x1A9A50u;
label_1a9a50:
    // 0x1a9a50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a9a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9a54:
    // 0x1a9a54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a9a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9a58:
    // 0x1a9a58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a9a58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9a5c:
    // 0x1a9a5c: 0x2b22021  addu        $a0, $s5, $s2
    ctx->pc = 0x1a9a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_1a9a60:
    // 0x1a9a60: 0x27828100  addiu       $v0, $gp, -0x7F00
    ctx->pc = 0x1a9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934784));
label_1a9a64:
    // 0x1a9a64: 0x24940770  addiu       $s4, $a0, 0x770
    ctx->pc = 0x1a9a64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1904));
label_1a9a68:
    // 0x1a9a68: 0xac800774  sw          $zero, 0x774($a0)
    ctx->pc = 0x1a9a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1908), GPR_U32(ctx, 0));
label_1a9a6c:
    // 0x1a9a6c: 0x2801821  addu        $v1, $s4, $zero
    ctx->pc = 0x1a9a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 0)));
label_1a9a70:
    // 0x1a9a70: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1a9a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1a9a74:
    // 0x1a9a74: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1a9a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1a9a78:
    // 0x1a9a78: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1a9a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_1a9a7c:
    // 0x1a9a7c: 0xa0600010  sb          $zero, 0x10($v1)
    ctx->pc = 0x1a9a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 0));
label_1a9a80:
    // 0x1a9a80: 0xac800784  sw          $zero, 0x784($a0)
    ctx->pc = 0x1a9a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1924), GPR_U32(ctx, 0));
label_1a9a84:
    // 0x1a9a84: 0xac800788  sw          $zero, 0x788($a0)
    ctx->pc = 0x1a9a84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1928), GPR_U32(ctx, 0));
label_1a9a88:
    // 0x1a9a88: 0xa080078c  sb          $zero, 0x78C($a0)
    ctx->pc = 0x1a9a88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1932), (uint8_t)GPR_U32(ctx, 0));
label_1a9a8c:
    // 0x1a9a8c: 0xac800790  sw          $zero, 0x790($a0)
    ctx->pc = 0x1a9a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1936), GPR_U32(ctx, 0));
label_1a9a90:
    // 0x1a9a90: 0xac800794  sw          $zero, 0x794($a0)
    ctx->pc = 0x1a9a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1940), GPR_U32(ctx, 0));
label_1a9a94:
    // 0x1a9a94: 0xa0800798  sb          $zero, 0x798($a0)
    ctx->pc = 0x1a9a94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1944), (uint8_t)GPR_U32(ctx, 0));
label_1a9a98:
    // 0x1a9a98: 0xac80079c  sw          $zero, 0x79C($a0)
    ctx->pc = 0x1a9a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1948), GPR_U32(ctx, 0));
label_1a9a9c:
    // 0x1a9a9c: 0xac8007a0  sw          $zero, 0x7A0($a0)
    ctx->pc = 0x1a9a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1952), GPR_U32(ctx, 0));
label_1a9aa0:
    // 0x1a9aa0: 0xa08007a4  sb          $zero, 0x7A4($a0)
    ctx->pc = 0x1a9aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1956), (uint8_t)GPR_U32(ctx, 0));
label_1a9aa4:
    // 0x1a9aa4: 0xac8007a8  sw          $zero, 0x7A8($a0)
    ctx->pc = 0x1a9aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1960), GPR_U32(ctx, 0));
label_1a9aa8:
    // 0x1a9aa8: 0xac8007ac  sw          $zero, 0x7AC($a0)
    ctx->pc = 0x1a9aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1964), GPR_U32(ctx, 0));
label_1a9aac:
    // 0x1a9aac: 0xa08007b0  sb          $zero, 0x7B0($a0)
    ctx->pc = 0x1a9aacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1968), (uint8_t)GPR_U32(ctx, 0));
label_1a9ab0:
    // 0x1a9ab0: 0xac8007b4  sw          $zero, 0x7B4($a0)
    ctx->pc = 0x1a9ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1972), GPR_U32(ctx, 0));
label_1a9ab4:
    // 0x1a9ab4: 0xac8007b8  sw          $zero, 0x7B8($a0)
    ctx->pc = 0x1a9ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1976), GPR_U32(ctx, 0));
label_1a9ab8:
    // 0x1a9ab8: 0xa08007bc  sb          $zero, 0x7BC($a0)
    ctx->pc = 0x1a9ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1980), (uint8_t)GPR_U32(ctx, 0));
label_1a9abc:
    // 0x1a9abc: 0xc046458  jal         func_119160
label_1a9ac0:
    if (ctx->pc == 0x1A9AC0u) {
        ctx->pc = 0x1A9AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9ABCu;
        // 0x1a9ac0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9AC4u;
        goto label_1a9ac4;
    }
    ctx->pc = 0x1A9ABCu;
    SET_GPR_U32(ctx, 31, 0x1A9AC4u);
    ctx->pc = 0x1A9AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9ABCu;
    // 0x1a9ac0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1A9ABCu, 0x1A9AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9AC4u;
label_1a9ac4:
    // 0x1a9ac4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a9ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ac8:
    // 0x1a9ac8: 0xc069b8c  jal         func_1A6E30
label_1a9acc:
    if (ctx->pc == 0x1A9ACCu) {
        ctx->pc = 0x1A9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9AC8u;
        // 0x1a9acc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9AD0u;
        goto label_1a9ad0;
    }
    ctx->pc = 0x1A9AC8u;
    SET_GPR_U32(ctx, 31, 0x1A9AD0u);
    ctx->pc = 0x1A9ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9AC8u;
    // 0x1a9acc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E30u, 0x1A9AC8u, 0x1A9AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9AD0u;
label_1a9ad0:
    // 0x1a9ad0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a9ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ad4:
    // 0x1a9ad4: 0xc069ba0  jal         func_1A6E80
label_1a9ad8:
    if (ctx->pc == 0x1A9AD8u) {
        ctx->pc = 0x1A9AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9AD4u;
        // 0x1a9ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9ADCu;
        goto label_1a9adc;
    }
    ctx->pc = 0x1A9AD4u;
    SET_GPR_U32(ctx, 31, 0x1A9ADCu);
    ctx->pc = 0x1A9AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9AD4u;
    // 0x1a9ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E80u, 0x1A9AD4u, 0x1A9ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9ADCu;
label_1a9adc:
    // 0x1a9adc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a9adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ae0:
    // 0x1a9ae0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a9ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a9ae4:
    // 0x1a9ae4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a9ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a9ae8:
    // 0x1a9ae8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a9ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a9aec:
    // 0x1a9aec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a9aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9af0:
    // 0x1a9af0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a9af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9af4:
    // 0x1a9af4: 0xc069bec  jal         func_1A6FB0
label_1a9af8:
    if (ctx->pc == 0x1A9AF8u) {
        ctx->pc = 0x1A9AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9AF4u;
        // 0x1a9af8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9AFCu;
        goto label_1a9afc;
    }
    ctx->pc = 0x1A9AF4u;
    SET_GPR_U32(ctx, 31, 0x1A9AFCu);
    ctx->pc = 0x1A9AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9AF4u;
    // 0x1a9af8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB0u, 0x1A9AF4u, 0x1A9AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9AFCu;
label_1a9afc:
    // 0x1a9afc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a9afcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a9b00:
    // 0x1a9b00: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1a9b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_1a9b04:
    // 0x1a9b04: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1a9b08:
    if (ctx->pc == 0x1A9B08u) {
        ctx->pc = 0x1A9B0Cu;
        goto label_1a9b0c;
    }
    ctx->pc = 0x1A9B04u;
    {
        const bool branch_taken_0x1a9b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9b04) {
            ctx->pc = 0x1A9AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9ae0;
        }
    }
    ctx->pc = 0x1A9B0Cu;
label_1a9b0c:
    // 0x1a9b0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a9b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a9b10:
    // 0x1a9b10: 0x26520054  addiu       $s2, $s2, 0x54
    ctx->pc = 0x1a9b10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
label_1a9b14:
    // 0x1a9b14: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1a9b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a9b18:
    // 0x1a9b18: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_1a9b1c:
    if (ctx->pc == 0x1A9B1Cu) {
        ctx->pc = 0x1A9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B18u;
        // 0x1a9b1c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9B20u;
        goto label_1a9b20;
    }
    ctx->pc = 0x1A9B18u;
    {
        const bool branch_taken_0x1a9b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B18u;
        // 0x1a9b1c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b18) {
            ctx->pc = 0x1A9A5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9a5c;
        }
    }
    ctx->pc = 0x1A9B20u;
label_1a9b20:
    // 0x1a9b20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b24:
    // 0x1a9b24: 0xc06a894  jal         func_1AA250
label_1a9b28:
    if (ctx->pc == 0x1A9B28u) {
        ctx->pc = 0x1A9B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B24u;
        // 0x1a9b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9B2Cu;
        goto label_1a9b2c;
    }
    ctx->pc = 0x1A9B24u;
    SET_GPR_U32(ctx, 31, 0x1A9B2Cu);
    ctx->pc = 0x1A9B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9B24u;
    // 0x1a9b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA250u, 0x1A9B24u, 0x1A9B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9B2Cu;
label_1a9b2c:
    // 0x1a9b2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9b30:
    // 0x1a9b30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a9b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b34:
    // 0x1a9b34: 0xc063e14  jal         func_18F850
label_1a9b38:
    if (ctx->pc == 0x1A9B38u) {
        ctx->pc = 0x1A9B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B34u;
        // 0x1a9b38: 0xa2a206cc  sb          $v0, 0x6CC($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1740), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9B3Cu;
        goto label_1a9b3c;
    }
    ctx->pc = 0x1A9B34u;
    SET_GPR_U32(ctx, 31, 0x1A9B3Cu);
    ctx->pc = 0x1A9B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9B34u;
    // 0x1a9b38: 0xa2a206cc  sb          $v0, 0x6CC($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 1740), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A9B34u, 0x1A9B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9B3Cu;
label_1a9b3c:
    // 0x1a9b3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a9b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b40:
    // 0x1a9b40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a9b40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b44:
    // 0x1a9b44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a9b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b48:
    // 0x1a9b48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a9b48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b4c:
    // 0x1a9b4c: 0x0  nop
    ctx->pc = 0x1a9b4cu;
    // NOP
label_1a9b50:
    // 0x1a9b50: 0x2b3a021  addu        $s4, $s5, $s3
    ctx->pc = 0x1a9b50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_1a9b54:
    // 0x1a9b54: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x1a9b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1a9b58:
    // 0x1a9b58: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9b5c:
    // 0x1a9b5c: 0x8c630680  lw          $v1, 0x680($v1)
    ctx->pc = 0x1a9b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1664)));
label_1a9b60:
    // 0x1a9b60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9b64:
    // 0x1a9b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9b68:
    // 0x1a9b68: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a9b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a9b6c:
    // 0x1a9b6c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a9b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a9b70:
    // 0x1a9b70: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1a9b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1a9b74:
    // 0x1a9b74: 0x320f809  jalr        $t9
label_1a9b78:
    if (ctx->pc == 0x1A9B78u) {
        ctx->pc = 0x1A9B7Cu;
        goto label_1a9b7c;
    }
    ctx->pc = 0x1A9B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A9B7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9B74u, 0x1A9B7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9B7Cu;
label_1a9b7c:
    // 0x1a9b7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a9b80:
    if (ctx->pc == 0x1A9B80u) {
        ctx->pc = 0x1A9B84u;
        goto label_1a9b84;
    }
    ctx->pc = 0x1A9B7Cu;
    {
        const bool branch_taken_0x1a9b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9b7c) {
            ctx->pc = 0x1A9B94u;
            goto label_1a9b94;
        }
    }
    ctx->pc = 0x1A9B84u;
label_1a9b84:
    // 0x1a9b84: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a9b84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a9b88:
    // 0x1a9b88: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1a9b88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_1a9b8c:
    // 0x1a9b8c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1a9b90:
    if (ctx->pc == 0x1A9B90u) {
        ctx->pc = 0x1A9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B8Cu;
        // 0x1a9b90: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9B94u;
        goto label_1a9b94;
    }
    ctx->pc = 0x1A9B8Cu;
    {
        const bool branch_taken_0x1a9b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B8Cu;
        // 0x1a9b90: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b8c) {
            ctx->pc = 0x1A9B4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9b4c;
        }
    }
    ctx->pc = 0x1A9B94u;
label_1a9b94:
    // 0x1a9b94: 0x0  nop
    ctx->pc = 0x1a9b94u;
    // NOP
label_1a9b98:
    // 0x1a9b98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a9b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a9b9c:
    // 0x1a9b9c: 0x16220015  bne         $s1, $v0, . + 4 + (0x15 << 2)
label_1a9ba0:
    if (ctx->pc == 0x1A9BA0u) {
        ctx->pc = 0x1A9BA4u;
        goto label_1a9ba4;
    }
    ctx->pc = 0x1A9B9Cu;
    {
        const bool branch_taken_0x1a9b9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9b9c) {
            ctx->pc = 0x1A9BF4u;
            goto label_1a9bf4;
        }
    }
    ctx->pc = 0x1A9BA4u;
label_1a9ba4:
    // 0x1a9ba4: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x1a9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1a9ba8:
    // 0x1a9ba8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a9ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9bac:
    // 0x1a9bac: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9bb0:
    // 0x1a9bb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9bb4:
    // 0x1a9bb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9bb8:
    // 0x1a9bb8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a9bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a9bbc:
    // 0x1a9bbc: 0xa04501d3  sb          $a1, 0x1D3($v0)
    ctx->pc = 0x1a9bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 467), (uint8_t)GPR_U32(ctx, 5));
label_1a9bc0:
    // 0x1a9bc0: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x1a9bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1a9bc4:
    // 0x1a9bc4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9bc8:
    // 0x1a9bc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9bcc:
    // 0x1a9bcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9bd0:
    // 0x1a9bd0: 0xc042570  jal         func_1095C0
label_1a9bd4:
    if (ctx->pc == 0x1A9BD4u) {
        ctx->pc = 0x1A9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BD0u;
        // 0x1a9bd4: 0x8c442cd8  lw          $a0, 0x2CD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9BD8u;
        goto label_1a9bd8;
    }
    ctx->pc = 0x1A9BD0u;
    SET_GPR_U32(ctx, 31, 0x1A9BD8u);
    ctx->pc = 0x1A9BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9BD0u;
    // 0x1a9bd4: 0x8c442cd8  lw          $a0, 0x2CD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1A9BD0u, 0x1A9BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9BD8u;
label_1a9bd8:
    // 0x1a9bd8: 0x8e83067c  lw          $v1, 0x67C($s4)
    ctx->pc = 0x1a9bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1660)));
label_1a9bdc:
    // 0x1a9bdc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9be0:
    // 0x1a9be0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9be4:
    // 0x1a9be4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9be8:
    // 0x1a9be8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a9be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a9bec:
    // 0x1a9bec: 0xc042570  jal         func_1095C0
label_1a9bf0:
    if (ctx->pc == 0x1A9BF0u) {
        ctx->pc = 0x1A9BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BECu;
        // 0x1a9bf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9BF4u;
        goto label_1a9bf4;
    }
    ctx->pc = 0x1A9BECu;
    SET_GPR_U32(ctx, 31, 0x1A9BF4u);
    ctx->pc = 0x1A9BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9BECu;
    // 0x1a9bf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1A9BECu, 0x1A9BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9BF4u;
label_1a9bf4:
    // 0x1a9bf4: 0x0  nop
    ctx->pc = 0x1a9bf4u;
    // NOP
label_1a9bf8:
    // 0x1a9bf8: 0x8ea206c4  lw          $v0, 0x6C4($s5)
    ctx->pc = 0x1a9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1732)));
label_1a9bfc:
    // 0x1a9bfc: 0x4410017  bgez        $v0, . + 4 + (0x17 << 2)
label_1a9c00:
    if (ctx->pc == 0x1A9C00u) {
        ctx->pc = 0x1A9C04u;
        goto label_1a9c04;
    }
    ctx->pc = 0x1A9BFCu;
    {
        const bool branch_taken_0x1a9bfc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a9bfc) {
            ctx->pc = 0x1A9C5Cu;
            goto label_1a9c5c;
        }
    }
    ctx->pc = 0x1A9C04u;
label_1a9c04:
    // 0x1a9c04: 0x8e830674  lw          $v1, 0x674($s4)
    ctx->pc = 0x1a9c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1652)));
label_1a9c08:
    // 0x1a9c08: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9c0c:
    // 0x1a9c0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9c10:
    // 0x1a9c10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9c14:
    // 0x1a9c14: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a9c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a9c18:
    // 0x1a9c18: 0x8c4201fc  lw          $v0, 0x1FC($v0)
    ctx->pc = 0x1a9c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_1a9c1c:
    // 0x1a9c1c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1a9c20:
    if (ctx->pc == 0x1A9C20u) {
        ctx->pc = 0x1A9C24u;
        goto label_1a9c24;
    }
    ctx->pc = 0x1A9C1Cu;
    {
        const bool branch_taken_0x1a9c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c1c) {
            ctx->pc = 0x1A9C5Cu;
            goto label_1a9c5c;
        }
    }
    ctx->pc = 0x1A9C24u;
label_1a9c24:
    // 0x1a9c24: 0xaeb006c4  sw          $s0, 0x6C4($s5)
    ctx->pc = 0x1a9c24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1732), GPR_U32(ctx, 16));
label_1a9c28:
    // 0x1a9c28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a9c2c:
    // 0x1a9c2c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a9c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9c30:
    // 0x1a9c30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a9c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a9c34:
    // 0x1a9c34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a9c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a9c38:
    // 0x1a9c38: 0x0  nop
    ctx->pc = 0x1a9c38u;
    // NOP
label_1a9c3c:
    // 0x1a9c3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a9c3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a9c40:
    // 0x1a9c40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a9c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a9c44:
    // 0x1a9c44: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a9c44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a9c48:
    // 0x1a9c48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a9c48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a9c4c:
    // 0x1a9c4c: 0xc063e14  jal         func_18F850
label_1a9c50:
    if (ctx->pc == 0x1A9C50u) {
        ctx->pc = 0x1A9C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C4Cu;
        // 0x1a9c50: 0xaea206c8  sw          $v0, 0x6C8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9C54u;
        goto label_1a9c54;
    }
    ctx->pc = 0x1A9C4Cu;
    SET_GPR_U32(ctx, 31, 0x1A9C54u);
    ctx->pc = 0x1A9C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C4Cu;
    // 0x1a9c50: 0xaea206c8  sw          $v0, 0x6C8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1736), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A9C4Cu, 0x1A9C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9C54u;
label_1a9c54:
    // 0x1a9c54: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a9c58:
    if (ctx->pc == 0x1A9C58u) {
        ctx->pc = 0x1A9C5Cu;
        goto label_1a9c5c;
    }
    ctx->pc = 0x1A9C54u;
    {
        const bool branch_taken_0x1a9c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c54) {
            ctx->pc = 0x1A9C6Cu;
            goto label_1a9c6c;
        }
    }
    ctx->pc = 0x1A9C5Cu;
label_1a9c5c:
    // 0x1a9c5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a9c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a9c60:
    // 0x1a9c60: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1a9c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a9c64:
    // 0x1a9c64: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
label_1a9c68:
    if (ctx->pc == 0x1A9C68u) {
        ctx->pc = 0x1A9C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C64u;
        // 0x1a9c68: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9C6Cu;
        goto label_1a9c6c;
    }
    ctx->pc = 0x1A9C64u;
    {
        const bool branch_taken_0x1a9c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C64u;
        // 0x1a9c68: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c64) {
            ctx->pc = 0x1A9B44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9b44;
        }
    }
    ctx->pc = 0x1A9C6Cu;
label_1a9c6c:
    // 0x1a9c6c: 0x0  nop
    ctx->pc = 0x1a9c6cu;
    // NOP
label_1a9c70:
    // 0x1a9c70: 0xc063dd4  jal         func_18F750
label_1a9c74:
    if (ctx->pc == 0x1A9C74u) {
        ctx->pc = 0x1A9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C70u;
        // 0x1a9c74: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9C78u;
        goto label_1a9c78;
    }
    ctx->pc = 0x1A9C70u;
    SET_GPR_U32(ctx, 31, 0x1A9C78u);
    ctx->pc = 0x1A9C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C70u;
    // 0x1a9c74: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1A9C70u, 0x1A9C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9C78u;
label_1a9c78:
    // 0x1a9c78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a9c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9c7c:
    // 0x1a9c7c: 0x1444011b  bne         $v0, $a0, . + 4 + (0x11B << 2)
label_1a9c80:
    if (ctx->pc == 0x1A9C80u) {
        ctx->pc = 0x1A9C84u;
        goto label_1a9c84;
    }
    ctx->pc = 0x1A9C7Cu;
    {
        const bool branch_taken_0x1a9c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a9c7c) {
            ctx->pc = 0x1AA0ECu;
            goto label_1aa0ec;
        }
    }
    ctx->pc = 0x1A9C84u;
label_1a9c84:
    // 0x1a9c84: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1a9c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1a9c88:
    // 0x1a9c88: 0x8c6327a4  lw          $v1, 0x27A4($v1)
    ctx->pc = 0x1a9c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10148)));
label_1a9c8c:
    // 0x1a9c8c: 0x10600117  beqz        $v1, . + 4 + (0x117 << 2)
label_1a9c90:
    if (ctx->pc == 0x1A9C90u) {
        ctx->pc = 0x1A9C94u;
        goto label_1a9c94;
    }
    ctx->pc = 0x1A9C8Cu;
    {
        const bool branch_taken_0x1a9c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c8c) {
            ctx->pc = 0x1AA0ECu;
            goto label_1aa0ec;
        }
    }
    ctx->pc = 0x1A9C94u;
label_1a9c94:
    // 0x1a9c94: 0xaea406c4  sw          $a0, 0x6C4($s5)
    ctx->pc = 0x1a9c94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1732), GPR_U32(ctx, 4));
label_1a9c98:
    // 0x1a9c98: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a9c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a9c9c:
    // 0x1a9c9c: 0xc063e14  jal         func_18F850
label_1a9ca0:
    if (ctx->pc == 0x1A9CA0u) {
        ctx->pc = 0x1A9CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C9Cu;
        // 0x1a9ca0: 0xaea006c8  sw          $zero, 0x6C8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9CA4u;
        goto label_1a9ca4;
    }
    ctx->pc = 0x1A9C9Cu;
    SET_GPR_U32(ctx, 31, 0x1A9CA4u);
    ctx->pc = 0x1A9CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C9Cu;
    // 0x1a9ca0: 0xaea006c8  sw          $zero, 0x6C8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1736), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A9C9Cu, 0x1A9CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9CA4u;
label_1a9ca4:
    // 0x1a9ca4: 0x10000112  b           . + 4 + (0x112 << 2)
label_1a9ca8:
    if (ctx->pc == 0x1A9CA8u) {
        ctx->pc = 0x1A9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CA4u;
        // 0x1a9ca8: 0x92a306cc  lbu         $v1, 0x6CC($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9CACu;
        goto label_1a9cac;
    }
    ctx->pc = 0x1A9CA4u;
    {
        const bool branch_taken_0x1a9ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CA4u;
        // 0x1a9ca8: 0x92a306cc  lbu         $v1, 0x6CC($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ca4) {
            ctx->pc = 0x1AA0F0u;
            goto label_1aa0f0;
        }
    }
    ctx->pc = 0x1A9CACu;
label_1a9cac:
    // 0x1a9cac: 0x8ea306c8  lw          $v1, 0x6C8($s5)
    ctx->pc = 0x1a9cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1736)));
label_1a9cb0:
    // 0x1a9cb0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a9cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a9cb4:
    // 0x1a9cb4: 0x461010d  bgez        $v1, . + 4 + (0x10D << 2)
label_1a9cb8:
    if (ctx->pc == 0x1A9CB8u) {
        ctx->pc = 0x1A9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CB4u;
        // 0x1a9cb8: 0xaea306c8  sw          $v1, 0x6C8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1736), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9CBCu;
        goto label_1a9cbc;
    }
    ctx->pc = 0x1A9CB4u;
    {
        const bool branch_taken_0x1a9cb4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CB4u;
        // 0x1a9cb8: 0xaea306c8  sw          $v1, 0x6C8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1736), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9cb4) {
            ctx->pc = 0x1AA0ECu;
            goto label_1aa0ec;
        }
    }
    ctx->pc = 0x1A9CBCu;
label_1a9cbc:
    // 0x1a9cbc: 0xaea006c8  sw          $zero, 0x6C8($s5)
    ctx->pc = 0x1a9cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1736), GPR_U32(ctx, 0));
label_1a9cc0:
    // 0x1a9cc0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a9cc4:
    // 0x1a9cc4: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a9cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9cc8:
    // 0x1a9cc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a9cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9ccc:
    // 0x1a9ccc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a9cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a9cd0:
    // 0x1a9cd0: 0x0  nop
    ctx->pc = 0x1a9cd0u;
    // NOP
label_1a9cd4:
    // 0x1a9cd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a9cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a9cd8:
    // 0x1a9cd8: 0xaea30940  sw          $v1, 0x940($s5)
    ctx->pc = 0x1a9cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2368), GPR_U32(ctx, 3));
label_1a9cdc:
    // 0x1a9cdc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a9cdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a9ce0:
    // 0x1a9ce0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a9ce0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a9ce4:
    // 0x1a9ce4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a9ce4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a9ce8:
    // 0x1a9ce8: 0x0  nop
    ctx->pc = 0x1a9ce8u;
    // NOP
label_1a9cec:
    // 0x1a9cec: 0xaea20944  sw          $v0, 0x944($s5)
    ctx->pc = 0x1a9cecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2372), GPR_U32(ctx, 2));
label_1a9cf0:
    // 0x1a9cf0: 0x8ea20940  lw          $v0, 0x940($s5)
    ctx->pc = 0x1a9cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2368)));
label_1a9cf4:
    // 0x1a9cf4: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_1a9cf8:
    if (ctx->pc == 0x1A9CF8u) {
        ctx->pc = 0x1A9CFCu;
        goto label_1a9cfc;
    }
    ctx->pc = 0x1A9CF4u;
    {
        const bool branch_taken_0x1a9cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a9cf4) {
            ctx->pc = 0x1A9D18u;
            goto label_1a9d18;
        }
    }
    ctx->pc = 0x1A9CFCu;
label_1a9cfc:
    // 0x1a9cfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a9d00:
    if (ctx->pc == 0x1A9D00u) {
        ctx->pc = 0x1A9D04u;
        goto label_1a9d04;
    }
    ctx->pc = 0x1A9CFCu;
    {
        const bool branch_taken_0x1a9cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9cfc) {
            ctx->pc = 0x1A9D0Cu;
            goto label_1a9d0c;
        }
    }
    ctx->pc = 0x1A9D04u;
label_1a9d04:
    // 0x1a9d04: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a9d08:
    if (ctx->pc == 0x1A9D08u) {
        ctx->pc = 0x1A9D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D04u;
        // 0x1a9d08: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9D0Cu;
        goto label_1a9d0c;
    }
    ctx->pc = 0x1A9D04u;
    {
        const bool branch_taken_0x1a9d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D04u;
        // 0x1a9d08: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d04) {
            ctx->pc = 0x1A9D20u;
            goto label_1a9d20;
        }
    }
    ctx->pc = 0x1A9D0Cu;
label_1a9d0c:
    // 0x1a9d0c: 0x8ea20944  lw          $v0, 0x944($s5)
    ctx->pc = 0x1a9d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2372)));
label_1a9d10:
    // 0x1a9d10: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a9d14:
    if (ctx->pc == 0x1A9D14u) {
        ctx->pc = 0x1A9D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D10u;
        // 0x1a9d14: 0xaea20948  sw          $v0, 0x948($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9D18u;
        goto label_1a9d18;
    }
    ctx->pc = 0x1A9D10u;
    {
        const bool branch_taken_0x1a9d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D10u;
        // 0x1a9d14: 0xaea20948  sw          $v0, 0x948($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d10) {
            ctx->pc = 0x1A9D1Cu;
            goto label_1a9d1c;
        }
    }
    ctx->pc = 0x1A9D18u;
label_1a9d18:
    // 0x1a9d18: 0xaea00948  sw          $zero, 0x948($s5)
    ctx->pc = 0x1a9d18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2376), GPR_U32(ctx, 0));
label_1a9d1c:
    // 0x1a9d1c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a9d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a9d20:
    // 0x1a9d20: 0xc063e14  jal         func_18F850
label_1a9d24:
    if (ctx->pc == 0x1A9D24u) {
        ctx->pc = 0x1A9D28u;
        goto label_1a9d28;
    }
    ctx->pc = 0x1A9D20u;
    SET_GPR_U32(ctx, 31, 0x1A9D28u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A9D20u, 0x1A9D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D28u;
label_1a9d28:
    // 0x1a9d28: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_1a9d2c:
    if (ctx->pc == 0x1A9D2Cu) {
        ctx->pc = 0x1A9D30u;
        goto label_1a9d30;
    }
    ctx->pc = 0x1A9D28u;
    {
        const bool branch_taken_0x1a9d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9d28) {
            ctx->pc = 0x1AA0ECu;
            goto label_1aa0ec;
        }
    }
    ctx->pc = 0x1A9D30u;
label_1a9d30:
    // 0x1a9d30: 0x8f8583a0  lw          $a1, -0x7C60($gp)
    ctx->pc = 0x1a9d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1a9d34:
    // 0x1a9d34: 0xc054660  jal         func_151980
label_1a9d38:
    if (ctx->pc == 0x1A9D38u) {
        ctx->pc = 0x1A9D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D34u;
        // 0x1a9d38: 0x26a40930  addiu       $a0, $s5, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9D3Cu;
        goto label_1a9d3c;
    }
    ctx->pc = 0x1A9D34u;
    SET_GPR_U32(ctx, 31, 0x1A9D3Cu);
    ctx->pc = 0x1A9D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9D34u;
    // 0x1a9d38: 0x26a40930  addiu       $a0, $s5, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1A9D34u, 0x1A9D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D3Cu;
label_1a9d3c:
    // 0x1a9d3c: 0xc063e14  jal         func_18F850
label_1a9d40:
    if (ctx->pc == 0x1A9D40u) {
        ctx->pc = 0x1A9D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D3Cu;
        // 0x1a9d40: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9D44u;
        goto label_1a9d44;
    }
    ctx->pc = 0x1A9D3Cu;
    SET_GPR_U32(ctx, 31, 0x1A9D44u);
    ctx->pc = 0x1A9D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9D3Cu;
    // 0x1a9d40: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A9D3Cu, 0x1A9D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D44u;
label_1a9d44:
    // 0x1a9d44: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1a9d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9d48:
    // 0x1a9d48: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x1a9d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1a9d4c:
    // 0x1a9d4c: 0x146000e7  bnez        $v1, . + 4 + (0xE7 << 2)
label_1a9d50:
    if (ctx->pc == 0x1A9D50u) {
        ctx->pc = 0x1A9D54u;
        goto label_1a9d54;
    }
    ctx->pc = 0x1A9D4Cu;
    {
        const bool branch_taken_0x1a9d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9d4c) {
            ctx->pc = 0x1AA0ECu;
            goto label_1aa0ec;
        }
    }
    ctx->pc = 0x1A9D54u;
label_1a9d54:
    // 0x1a9d54: 0x8ea506c4  lw          $a1, 0x6C4($s5)
    ctx->pc = 0x1a9d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1732)));
label_1a9d58:
    // 0x1a9d58: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a9d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_1a9d5c:
    // 0x1a9d5c: 0x24422c90  addiu       $v0, $v0, 0x2C90
    ctx->pc = 0x1a9d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11408));
label_1a9d60:
    // 0x1a9d60: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a9d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a9d64:
    // 0x1a9d64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a9d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a9d68:
    // 0x1a9d68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9d6c:
    // 0x1a9d6c: 0x752821  addu        $a1, $v1, $s5
    ctx->pc = 0x1a9d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1a9d70:
    // 0x1a9d70: 0x8ca30690  lw          $v1, 0x690($a1)
    ctx->pc = 0x1a9d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1680)));
label_1a9d74:
    // 0x1a9d74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a9d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a9d78:
    // 0x1a9d78: 0xaca30690  sw          $v1, 0x690($a1)
    ctx->pc = 0x1a9d78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1680), GPR_U32(ctx, 3));
label_1a9d7c:
    // 0x1a9d7c: 0x8ea306b4  lw          $v1, 0x6B4($s5)
    ctx->pc = 0x1a9d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1716)));
label_1a9d80:
    // 0x1a9d80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9d84:
    // 0x1a9d84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9d88:
    // 0x1a9d88: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a9d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a9d8c:
    // 0x1a9d8c: 0xc06a894  jal         func_1AA250
label_1a9d90:
    if (ctx->pc == 0x1A9D90u) {
        ctx->pc = 0x1A9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D8Cu;
        // 0x1a9d90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9D94u;
        goto label_1a9d94;
    }
    ctx->pc = 0x1A9D8Cu;
    SET_GPR_U32(ctx, 31, 0x1A9D94u);
    ctx->pc = 0x1A9D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9D8Cu;
    // 0x1a9d90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA250u, 0x1A9D8Cu, 0x1A9D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D94u;
label_1a9d94:
    // 0x1a9d94: 0x8ea306c4  lw          $v1, 0x6C4($s5)
    ctx->pc = 0x1a9d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1732)));
label_1a9d98:
    // 0x1a9d98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a9d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a9d9c:
    // 0x1a9d9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a9d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a9da0:
    // 0x1a9da0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a9da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9da4:
    // 0x1a9da4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a9da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9da8:
    // 0x1a9da8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a9dac:
    // 0x1a9dac: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1a9dacu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9db0:
    // 0x1a9db0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9db4:
    // 0x1a9db4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a9db8:
    // 0x1a9db8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a9db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a9dbc:
    // 0x1a9dbc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1a9dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1a9dc0:
    // 0x1a9dc0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1a9dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a9dc4:
    // 0x1a9dc4: 0x8c450690  lw          $a1, 0x690($v0)
    ctx->pc = 0x1a9dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1680)));
label_1a9dc8:
    // 0x1a9dc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9dcc:
    // 0x1a9dcc: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x1a9dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1a9dd0:
    // 0x1a9dd0: 0xc069bec  jal         func_1A6FB0
label_1a9dd4:
    if (ctx->pc == 0x1A9DD4u) {
        ctx->pc = 0x1A9DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DD0u;
        // 0x1a9dd4: 0x24440770  addiu       $a0, $v0, 0x770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9DD8u;
        goto label_1a9dd8;
    }
    ctx->pc = 0x1A9DD0u;
    SET_GPR_U32(ctx, 31, 0x1A9DD8u);
    ctx->pc = 0x1A9DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9DD0u;
    // 0x1a9dd4: 0x24440770  addiu       $a0, $v0, 0x770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB0u, 0x1A9DD0u, 0x1A9DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9DD8u;
label_1a9dd8:
    // 0x1a9dd8: 0x8ea306c4  lw          $v1, 0x6C4($s5)
    ctx->pc = 0x1a9dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1732)));
label_1a9ddc:
    // 0x1a9ddc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a9ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a9de0:
    // 0x1a9de0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9de4:
    // 0x1a9de4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a9de8:
    // 0x1a9de8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1a9de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1a9dec:
    // 0x1a9dec: 0x8c420690  lw          $v0, 0x690($v0)
    ctx->pc = 0x1a9decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1680)));
label_1a9df0:
    // 0x1a9df0: 0x18400041  blez        $v0, . + 4 + (0x41 << 2)
label_1a9df4:
    if (ctx->pc == 0x1A9DF4u) {
        ctx->pc = 0x1A9DF8u;
        goto label_1a9df8;
    }
    ctx->pc = 0x1A9DF0u;
    {
        const bool branch_taken_0x1a9df0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a9df0) {
            ctx->pc = 0x1A9EF8u;
            goto label_1a9ef8;
        }
    }
    ctx->pc = 0x1A9DF8u;
label_1a9df8:
    // 0x1a9df8: 0xc057f04  jal         func_15FC10
label_1a9dfc:
    if (ctx->pc == 0x1A9DFCu) {
        ctx->pc = 0x1A9DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DF8u;
        // 0x1a9dfc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9E00u;
        goto label_1a9e00;
    }
    ctx->pc = 0x1A9DF8u;
    SET_GPR_U32(ctx, 31, 0x1A9E00u);
    ctx->pc = 0x1A9DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9DF8u;
    // 0x1a9dfc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x1A9DF8u, 0x1A9E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E00u;
label_1a9e00:
    // 0x1a9e00: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
label_1a9e04:
    if (ctx->pc == 0x1A9E04u) {
        ctx->pc = 0x1A9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E00u;
        // 0x1a9e04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9E08u;
        goto label_1a9e08;
    }
    ctx->pc = 0x1A9E00u;
    {
        const bool branch_taken_0x1a9e00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E00u;
        // 0x1a9e04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e00) {
            ctx->pc = 0x1A9E34u;
            goto label_1a9e34;
        }
    }
    ctx->pc = 0x1A9E08u;
label_1a9e08:
    // 0x1a9e08: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x1a9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_1a9e0c:
    // 0x1a9e0c: 0x8ea506c4  lw          $a1, 0x6C4($s5)
    ctx->pc = 0x1a9e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1732)));
label_1a9e10:
    // 0x1a9e10: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x1a9e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a9e14:
    // 0x1a9e14: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a9e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a9e18:
    // 0x1a9e18: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a9e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a9e1c:
    // 0x1a9e1c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9e20:
    // 0x1a9e20: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1a9e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1a9e24:
    // 0x1a9e24: 0x8c450670  lw          $a1, 0x670($v0)
    ctx->pc = 0x1a9e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
label_1a9e28:
    // 0x1a9e28: 0xc0422e0  jal         func_108B80
label_1a9e2c:
    if (ctx->pc == 0x1A9E2Cu) {
        ctx->pc = 0x1A9E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E28u;
        // 0x1a9e2c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9E30u;
        goto label_1a9e30;
    }
    ctx->pc = 0x1A9E28u;
    SET_GPR_U32(ctx, 31, 0x1A9E30u);
    ctx->pc = 0x1A9E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9E28u;
    // 0x1a9e2c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x1A9E28u, 0x1A9E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E30u;
label_1a9e30:
    // 0x1a9e30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a9e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9e34:
    // 0x1a9e34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a9e34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9e38:
    // 0x1a9e38: 0x2b3a021  addu        $s4, $s5, $s3
    ctx->pc = 0x1a9e38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_1a9e3c:
    // 0x1a9e3c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9e40:
    // 0x1a9e40: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x1a9e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1a9e44:
    // 0x1a9e44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9e48:
    // 0x1a9e48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9e4c:
    // 0x1a9e4c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a9e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a9e50:
    // 0x1a9e50: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a9e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a9e54:
    // 0x1a9e54: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a9e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a9e58:
    // 0x1a9e58: 0x320f809  jalr        $t9
label_1a9e5c:
    if (ctx->pc == 0x1A9E5Cu) {
        ctx->pc = 0x1A9E60u;
        goto label_1a9e60;
    }
    ctx->pc = 0x1A9E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A9E60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9E58u, 0x1A9E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9E60u;
label_1a9e60:
    // 0x1a9e60: 0x8e83067c  lw          $v1, 0x67C($s4)
    ctx->pc = 0x1a9e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1660)));
label_1a9e64:
    // 0x1a9e64: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9e68:
    // 0x1a9e68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9e6c:
    // 0x1a9e6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9e70:
    // 0x1a9e70: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a9e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a9e74:
    // 0x1a9e74: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a9e74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a9e78:
    // 0x1a9e78: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a9e78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a9e7c:
    // 0x1a9e7c: 0x320f809  jalr        $t9
label_1a9e80:
    if (ctx->pc == 0x1A9E80u) {
        ctx->pc = 0x1A9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E7Cu;
        // 0x1a9e80: 0x2691067c  addiu       $s1, $s4, 0x67C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1660));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9E84u;
        goto label_1a9e84;
    }
    ctx->pc = 0x1A9E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A9E84u);
        ctx->pc = 0x1A9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E7Cu;
        // 0x1a9e80: 0x2691067c  addiu       $s1, $s4, 0x67C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1660));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9E7Cu, 0x1A9E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9E84u;
label_1a9e84:
    // 0x1a9e84: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a9e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a9e88:
    // 0x1a9e88: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9e8c:
    // 0x1a9e8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9e90:
    // 0x1a9e90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9e94:
    // 0x1a9e94: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a9e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a9e98:
    // 0x1a9e98: 0xc042570  jal         func_1095C0
label_1a9e9c:
    if (ctx->pc == 0x1A9E9Cu) {
        ctx->pc = 0x1A9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E98u;
        // 0x1a9e9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9EA0u;
        goto label_1a9ea0;
    }
    ctx->pc = 0x1A9E98u;
    SET_GPR_U32(ctx, 31, 0x1A9EA0u);
    ctx->pc = 0x1A9E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9E98u;
    // 0x1a9e9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1A9E98u, 0x1A9EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9EA0u;
label_1a9ea0:
    // 0x1a9ea0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a9ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ea4:
    // 0x1a9ea4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a9ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ea8:
    // 0x1a9ea8: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1a9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1a9eac:
    // 0x1a9eac: 0x8c430680  lw          $v1, 0x680($v0)
    ctx->pc = 0x1a9eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1664)));
label_1a9eb0:
    // 0x1a9eb0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9eb4:
    // 0x1a9eb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9eb8:
    // 0x1a9eb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9ebc:
    // 0x1a9ebc: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a9ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a9ec0:
    // 0x1a9ec0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a9ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a9ec4:
    // 0x1a9ec4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a9ec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a9ec8:
    // 0x1a9ec8: 0x320f809  jalr        $t9
label_1a9ecc:
    if (ctx->pc == 0x1A9ECCu) {
        ctx->pc = 0x1A9ED0u;
        goto label_1a9ed0;
    }
    ctx->pc = 0x1A9EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A9ED0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9EC8u, 0x1A9ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9ED0u;
label_1a9ed0:
    // 0x1a9ed0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a9ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a9ed4:
    // 0x1a9ed4: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1a9ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_1a9ed8:
    // 0x1a9ed8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1a9edc:
    if (ctx->pc == 0x1A9EDCu) {
        ctx->pc = 0x1A9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9ED8u;
        // 0x1a9edc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9EE0u;
        goto label_1a9ee0;
    }
    ctx->pc = 0x1A9ED8u;
    {
        const bool branch_taken_0x1a9ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9ED8u;
        // 0x1a9edc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ed8) {
            ctx->pc = 0x1A9EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9ea8;
        }
    }
    ctx->pc = 0x1A9EE0u;
label_1a9ee0:
    // 0x1a9ee0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a9ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a9ee4:
    // 0x1a9ee4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1a9ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a9ee8:
    // 0x1a9ee8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_1a9eec:
    if (ctx->pc == 0x1A9EECu) {
        ctx->pc = 0x1A9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EE8u;
        // 0x1a9eec: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9EF0u;
        goto label_1a9ef0;
    }
    ctx->pc = 0x1A9EE8u;
    {
        const bool branch_taken_0x1a9ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EE8u;
        // 0x1a9eec: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ee8) {
            ctx->pc = 0x1A9E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9e38;
        }
    }
    ctx->pc = 0x1A9EF0u;
label_1a9ef0:
    // 0x1a9ef0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a9ef4:
    // 0x1a9ef4: 0xaea206c4  sw          $v0, 0x6C4($s5)
    ctx->pc = 0x1a9ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1732), GPR_U32(ctx, 2));
label_1a9ef8:
    // 0x1a9ef8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a9ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9efc:
    // 0x1a9efc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a9f00:
    // 0x1a9f00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a9f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a9f04:
    // 0x1a9f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9f08:
    // 0x1a9f08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a9f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a9f0c:
    // 0x1a9f0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a9f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a9f10:
    // 0x1a9f10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a9f10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a9f14:
    // 0x1a9f14: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a9f14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1a9f18:
    // 0x1a9f18: 0x0  nop
    ctx->pc = 0x1a9f18u;
    // NOP
label_1a9f1c:
    // 0x1a9f1c: 0xaea306c8  sw          $v1, 0x6C8($s5)
    ctx->pc = 0x1a9f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1736), GPR_U32(ctx, 3));
label_1a9f20:
    // 0x1a9f20: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a9f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9f24:
    // 0x1a9f24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a9f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a9f28:
    // 0x1a9f28: 0xaea00940  sw          $zero, 0x940($s5)
    ctx->pc = 0x1a9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2368), GPR_U32(ctx, 0));
label_1a9f2c:
    // 0x1a9f2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a9f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a9f30:
    // 0x1a9f30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a9f30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a9f34:
    // 0x1a9f34: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a9f34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1a9f38:
    // 0x1a9f38: 0x0  nop
    ctx->pc = 0x1a9f38u;
    // NOP
label_1a9f3c:
    // 0x1a9f3c: 0xaea30944  sw          $v1, 0x944($s5)
    ctx->pc = 0x1a9f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2372), GPR_U32(ctx, 3));
label_1a9f40:
    // 0x1a9f40: 0x8ea30940  lw          $v1, 0x940($s5)
    ctx->pc = 0x1a9f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2368)));
label_1a9f44:
    // 0x1a9f44: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1a9f48:
    if (ctx->pc == 0x1A9F48u) {
        ctx->pc = 0x1A9F4Cu;
        goto label_1a9f4c;
    }
    ctx->pc = 0x1A9F44u;
    {
        const bool branch_taken_0x1a9f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9f44) {
            ctx->pc = 0x1A9F68u;
            goto label_1a9f68;
        }
    }
    ctx->pc = 0x1A9F4Cu;
label_1a9f4c:
    // 0x1a9f4c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1a9f50:
    if (ctx->pc == 0x1A9F50u) {
        ctx->pc = 0x1A9F54u;
        goto label_1a9f54;
    }
    ctx->pc = 0x1A9F4Cu;
    {
        const bool branch_taken_0x1a9f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9f4c) {
            ctx->pc = 0x1A9F5Cu;
            goto label_1a9f5c;
        }
    }
    ctx->pc = 0x1A9F54u;
label_1a9f54:
    // 0x1a9f54: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a9f58:
    if (ctx->pc == 0x1A9F58u) {
        ctx->pc = 0x1A9F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F54u;
        // 0x1a9f58: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F5Cu;
        goto label_1a9f5c;
    }
    ctx->pc = 0x1A9F54u;
    {
        const bool branch_taken_0x1a9f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F54u;
        // 0x1a9f58: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f54) {
            ctx->pc = 0x1A9F70u;
            goto label_1a9f70;
        }
    }
    ctx->pc = 0x1A9F5Cu;
label_1a9f5c:
    // 0x1a9f5c: 0x8ea20944  lw          $v0, 0x944($s5)
    ctx->pc = 0x1a9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2372)));
label_1a9f60:
    // 0x1a9f60: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a9f64:
    if (ctx->pc == 0x1A9F64u) {
        ctx->pc = 0x1A9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F60u;
        // 0x1a9f64: 0xaea20948  sw          $v0, 0x948($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F68u;
        goto label_1a9f68;
    }
    ctx->pc = 0x1A9F60u;
    {
        const bool branch_taken_0x1a9f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F60u;
        // 0x1a9f64: 0xaea20948  sw          $v0, 0x948($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f60) {
            ctx->pc = 0x1A9F6Cu;
            goto label_1a9f6c;
        }
    }
    ctx->pc = 0x1A9F68u;
label_1a9f68:
    // 0x1a9f68: 0xaea00948  sw          $zero, 0x948($s5)
    ctx->pc = 0x1a9f68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2376), GPR_U32(ctx, 0));
label_1a9f6c:
    // 0x1a9f6c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a9f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a9f70:
    // 0x1a9f70: 0xc063e14  jal         func_18F850
label_1a9f74:
    if (ctx->pc == 0x1A9F74u) {
        ctx->pc = 0x1A9F78u;
        goto label_1a9f78;
    }
    ctx->pc = 0x1A9F70u;
    SET_GPR_U32(ctx, 31, 0x1A9F78u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A9F70u, 0x1A9F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F78u;
label_1a9f78:
    // 0x1a9f78: 0x1000005c  b           . + 4 + (0x5C << 2)
label_1a9f7c:
    if (ctx->pc == 0x1A9F7Cu) {
        ctx->pc = 0x1A9F80u;
        goto label_1a9f80;
    }
    ctx->pc = 0x1A9F78u;
    {
        const bool branch_taken_0x1a9f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9f78) {
            ctx->pc = 0x1AA0ECu;
            goto label_1aa0ec;
        }
    }
    ctx->pc = 0x1A9F80u;
label_1a9f80:
    // 0x1a9f80: 0x8f8583a0  lw          $a1, -0x7C60($gp)
    ctx->pc = 0x1a9f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1a9f84:
    // 0x1a9f84: 0xc054660  jal         func_151980
label_1a9f88:
    if (ctx->pc == 0x1A9F88u) {
        ctx->pc = 0x1A9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F84u;
        // 0x1a9f88: 0x26a40930  addiu       $a0, $s5, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F8Cu;
        goto label_1a9f8c;
    }
    ctx->pc = 0x1A9F84u;
    SET_GPR_U32(ctx, 31, 0x1A9F8Cu);
    ctx->pc = 0x1A9F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F84u;
    // 0x1a9f88: 0x26a40930  addiu       $a0, $s5, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1A9F84u, 0x1A9F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F8Cu;
label_1a9f8c:
    // 0x1a9f8c: 0x8ea206c4  lw          $v0, 0x6C4($s5)
    ctx->pc = 0x1a9f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1732)));
label_1a9f90:
    // 0x1a9f90: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1a9f94:
    if (ctx->pc == 0x1A9F94u) {
        ctx->pc = 0x1A9F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F90u;
        // 0x1a9f94: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F98u;
        goto label_1a9f98;
    }
    ctx->pc = 0x1A9F90u;
    {
        const bool branch_taken_0x1a9f90 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A9F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F90u;
        // 0x1a9f94: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f90) {
            ctx->pc = 0x1A9FB0u;
            goto label_1a9fb0;
        }
    }
    ctx->pc = 0x1A9F98u;
label_1a9f98:
    // 0x1a9f98: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a9f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a9f9c:
    // 0x1a9f9c: 0xc063e08  jal         func_18F820
label_1a9fa0:
    if (ctx->pc == 0x1A9FA0u) {
        ctx->pc = 0x1A9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F9Cu;
        // 0x1a9fa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9FA4u;
        goto label_1a9fa4;
    }
    ctx->pc = 0x1A9F9Cu;
    SET_GPR_U32(ctx, 31, 0x1A9FA4u);
    ctx->pc = 0x1A9FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F9Cu;
    // 0x1a9fa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A9F9Cu, 0x1A9FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9FA4u;
label_1a9fa4:
    // 0x1a9fa4: 0x10000051  b           . + 4 + (0x51 << 2)
label_1a9fa8:
    if (ctx->pc == 0x1A9FA8u) {
        ctx->pc = 0x1A9FACu;
        goto label_1a9fac;
    }
    ctx->pc = 0x1A9FA4u;
    {
        const bool branch_taken_0x1a9fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9fa4) {
            ctx->pc = 0x1AA0ECu;
            goto label_1aa0ec;
        }
    }
    ctx->pc = 0x1A9FACu;
label_1a9fac:
    // 0x1a9fac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a9facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a9fb0:
    // 0x1a9fb0: 0xc063e14  jal         func_18F850
label_1a9fb4:
    if (ctx->pc == 0x1A9FB4u) {
        ctx->pc = 0x1A9FB8u;
        goto label_1a9fb8;
    }
    ctx->pc = 0x1A9FB0u;
    SET_GPR_U32(ctx, 31, 0x1A9FB8u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A9FB0u, 0x1A9FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9FB8u;
label_1a9fb8:
    // 0x1a9fb8: 0x1000004c  b           . + 4 + (0x4C << 2)
label_1a9fbc:
    if (ctx->pc == 0x1A9FBCu) {
        ctx->pc = 0x1A9FC0u;
        goto label_1a9fc0;
    }
    ctx->pc = 0x1A9FB8u;
    {
        const bool branch_taken_0x1a9fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9fb8) {
            ctx->pc = 0x1AA0ECu;
            goto label_1aa0ec;
        }
    }
    ctx->pc = 0x1A9FC0u;
label_1a9fc0:
    // 0x1a9fc0: 0xa2a006cc  sb          $zero, 0x6CC($s5)
    ctx->pc = 0x1a9fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1740), (uint8_t)GPR_U32(ctx, 0));
label_1a9fc4:
    // 0x1a9fc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a9fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9fc8:
    // 0x1a9fc8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a9fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9fcc:
    // 0x1a9fcc: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1a9fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_1a9fd0:
    // 0x1a9fd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9fd4:
    // 0x1a9fd4: 0xc069ba0  jal         func_1A6E80
label_1a9fd8:
    if (ctx->pc == 0x1A9FD8u) {
        ctx->pc = 0x1A9FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FD4u;
        // 0x1a9fd8: 0x24440770  addiu       $a0, $v0, 0x770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9FDCu;
        goto label_1a9fdc;
    }
    ctx->pc = 0x1A9FD4u;
    SET_GPR_U32(ctx, 31, 0x1A9FDCu);
    ctx->pc = 0x1A9FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9FD4u;
    // 0x1a9fd8: 0x24440770  addiu       $a0, $v0, 0x770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E80u, 0x1A9FD4u, 0x1A9FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9FDCu;
label_1a9fdc:
    // 0x1a9fdc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a9fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a9fe0:
    // 0x1a9fe0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1a9fe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a9fe4:
    // 0x1a9fe4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1a9fe8:
    if (ctx->pc == 0x1A9FE8u) {
        ctx->pc = 0x1A9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FE4u;
        // 0x1a9fe8: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9FECu;
        goto label_1a9fec;
    }
    ctx->pc = 0x1A9FE4u;
    {
        const bool branch_taken_0x1a9fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FE4u;
        // 0x1a9fe8: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9fe4) {
            ctx->pc = 0x1A9FCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9fcc;
        }
    }
    ctx->pc = 0x1A9FECu;
label_1a9fec:
    // 0x1a9fec: 0x8ea80690  lw          $t0, 0x690($s5)
    ctx->pc = 0x1a9fecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1680)));
label_1a9ff0:
    // 0x1a9ff0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a9ff4:
    // 0x1a9ff4: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
label_1a9ff8:
    if (ctx->pc == 0x1A9FF8u) {
        ctx->pc = 0x1A9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FF4u;
        // 0x1a9ff8: 0x8f838714  lw          $v1, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9FFCu;
        goto label_1a9ffc;
    }
    ctx->pc = 0x1A9FF4u;
    {
        const bool branch_taken_0x1a9ff4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FF4u;
        // 0x1a9ff8: 0x8f838714  lw          $v1, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ff4) {
            ctx->pc = 0x1AA004u;
            goto label_1aa004;
        }
    }
    ctx->pc = 0x1A9FFCu;
label_1a9ffc:
    // 0x1a9ffc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1aa000:
    if (ctx->pc == 0x1AA000u) {
        ctx->pc = 0x1AA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FFCu;
        // 0x1aa000: 0x24107530  addiu       $s0, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA004u;
        goto label_1aa004;
    }
    ctx->pc = 0x1A9FFCu;
    {
        const bool branch_taken_0x1a9ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FFCu;
        // 0x1aa000: 0x24107530  addiu       $s0, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ffc) {
            ctx->pc = 0x1AA008u;
            goto label_1aa008;
        }
    }
    ctx->pc = 0x1AA004u;
label_1aa004:
    // 0x1aa004: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aa004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa008:
    // 0x1aa008: 0xdc652818  ld          $a1, 0x2818($v1)
    ctx->pc = 0x1aa008u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 10264)));
label_1aa00c:
    // 0x1aa00c: 0x26a40820  addiu       $a0, $s5, 0x820
    ctx->pc = 0x1aa00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2080));
label_1aa010:
    // 0x1aa010: 0x24062710  addiu       $a2, $zero, 0x2710
    ctx->pc = 0x1aa010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_1aa014:
    // 0x1aa014: 0xc069744  jal         func_1A5D10
label_1aa018:
    if (ctx->pc == 0x1AA018u) {
        ctx->pc = 0x1AA018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA014u;
        // 0x1aa018: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA01Cu;
        goto label_1aa01c;
    }
    ctx->pc = 0x1AA014u;
    SET_GPR_U32(ctx, 31, 0x1AA01Cu);
    ctx->pc = 0x1AA018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA014u;
    // 0x1aa018: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D10u, 0x1AA014u, 0x1AA01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA01Cu;
label_1aa01c:
    // 0x1aa01c: 0x8ea30690  lw          $v1, 0x690($s5)
    ctx->pc = 0x1aa01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1680)));
label_1aa020:
    // 0x1aa020: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1aa024:
    // 0x1aa024: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa028:
    // 0x1aa028: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aa028u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa02c:
    // 0x1aa02c: 0x31178  dsll        $v0, $v1, 5
    ctx->pc = 0x1aa02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 5);
label_1aa030:
    // 0x1aa030: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x1aa030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
label_1aa034:
    // 0x1aa034: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x1aa034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_1aa038:
    // 0x1aa038: 0x43182d  daddu       $v1, $v0, $v1
    ctx->pc = 0x1aa038u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_1aa03c:
    // 0x1aa03c: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x1aa03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
label_1aa040:
    // 0x1aa040: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x1aa040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_1aa044:
    // 0x1aa044: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x1aa044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
label_1aa048:
    // 0x1aa048: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x1aa048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_1aa04c:
    // 0x1aa04c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1aa04cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_1aa050:
    // 0x1aa050: 0xc064b08  jal         func_192C20
label_1aa054:
    if (ctx->pc == 0x1AA054u) {
        ctx->pc = 0x1AA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA050u;
        // 0x1aa054: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA058u;
        goto label_1aa058;
    }
    ctx->pc = 0x1AA050u;
    SET_GPR_U32(ctx, 31, 0x1AA058u);
    ctx->pc = 0x1AA054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA050u;
    // 0x1aa054: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x1AA050u, 0x1AA058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA058u;
label_1aa058:
    // 0x1aa058: 0xc063e14  jal         func_18F850
label_1aa05c:
    if (ctx->pc == 0x1AA05Cu) {
        ctx->pc = 0x1AA05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA058u;
        // 0x1aa05c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA060u;
        goto label_1aa060;
    }
    ctx->pc = 0x1AA058u;
    SET_GPR_U32(ctx, 31, 0x1AA060u);
    ctx->pc = 0x1AA05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA058u;
    // 0x1aa05c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AA058u, 0x1AA060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA060u;
label_1aa060:
    // 0x1aa060: 0xc06977c  jal         func_1A5DF0
label_1aa064:
    if (ctx->pc == 0x1AA064u) {
        ctx->pc = 0x1AA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA060u;
        // 0x1aa064: 0x26a40820  addiu       $a0, $s5, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA068u;
        goto label_1aa068;
    }
    ctx->pc = 0x1AA060u;
    SET_GPR_U32(ctx, 31, 0x1AA068u);
    ctx->pc = 0x1AA064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA060u;
    // 0x1aa064: 0x26a40820  addiu       $a0, $s5, 0x820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5DF0u, 0x1AA060u, 0x1AA068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA068u;
label_1aa068:
    // 0x1aa068: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1aa06c:
    if (ctx->pc == 0x1AA06Cu) {
        ctx->pc = 0x1AA070u;
        goto label_1aa070;
    }
    ctx->pc = 0x1AA068u;
    {
        const bool branch_taken_0x1aa068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa068) {
            ctx->pc = 0x1AA0ECu;
            goto label_1aa0ec;
        }
    }
    ctx->pc = 0x1AA070u;
label_1aa070:
    // 0x1aa070: 0xc063e14  jal         func_18F850
label_1aa074:
    if (ctx->pc == 0x1AA074u) {
        ctx->pc = 0x1AA074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA070u;
        // 0x1aa074: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA078u;
        goto label_1aa078;
    }
    ctx->pc = 0x1AA070u;
    SET_GPR_U32(ctx, 31, 0x1AA078u);
    ctx->pc = 0x1AA074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA070u;
    // 0x1aa074: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AA070u, 0x1AA078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA078u;
label_1aa078:
    // 0x1aa078: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1aa07c:
    if (ctx->pc == 0x1AA07Cu) {
        ctx->pc = 0x1AA080u;
        goto label_1aa080;
    }
    ctx->pc = 0x1AA078u;
    {
        const bool branch_taken_0x1aa078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa078) {
            ctx->pc = 0x1AA0ECu;
            goto label_1aa0ec;
        }
    }
    ctx->pc = 0x1AA080u;
label_1aa080:
    // 0x1aa080: 0xc067f08  jal         func_19FC20
label_1aa084:
    if (ctx->pc == 0x1AA084u) {
        ctx->pc = 0x1AA088u;
        goto label_1aa088;
    }
    ctx->pc = 0x1AA080u;
    SET_GPR_U32(ctx, 31, 0x1AA088u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1AA080u, 0x1AA088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA088u;
label_1aa088:
    // 0x1aa088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa08c:
    // 0x1aa08c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_1aa090:
    if (ctx->pc == 0x1AA090u) {
        ctx->pc = 0x1AA094u;
        goto label_1aa094;
    }
    ctx->pc = 0x1AA08Cu;
    {
        const bool branch_taken_0x1aa08c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa08c) {
            ctx->pc = 0x1AA0B4u;
            goto label_1aa0b4;
        }
    }
    ctx->pc = 0x1AA094u;
label_1aa094:
    // 0x1aa094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa098:
    // 0x1aa098: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1aa098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aa09c:
    // 0x1aa09c: 0xc067f68  jal         func_19FDA0
label_1aa0a0:
    if (ctx->pc == 0x1AA0A0u) {
        ctx->pc = 0x1AA0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA09Cu;
        // 0x1aa0a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0A4u;
        goto label_1aa0a4;
    }
    ctx->pc = 0x1AA09Cu;
    SET_GPR_U32(ctx, 31, 0x1AA0A4u);
    ctx->pc = 0x1AA0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA09Cu;
    // 0x1aa0a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AA09Cu, 0x1AA0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA0A4u;
label_1aa0a4:
    // 0x1aa0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa0a8:
    // 0x1aa0a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aa0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa0ac:
    // 0x1aa0ac: 0xc067f68  jal         func_19FDA0
label_1aa0b0:
    if (ctx->pc == 0x1AA0B0u) {
        ctx->pc = 0x1AA0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0ACu;
        // 0x1aa0b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0B4u;
        goto label_1aa0b4;
    }
    ctx->pc = 0x1AA0ACu;
    SET_GPR_U32(ctx, 31, 0x1AA0B4u);
    ctx->pc = 0x1AA0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA0ACu;
    // 0x1aa0b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AA0ACu, 0x1AA0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA0B4u;
label_1aa0b4:
    // 0x1aa0b4: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1aa0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1aa0b8:
    // 0x1aa0b8: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1aa0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1aa0bc:
    // 0x1aa0bc: 0xc06bd9c  jal         func_1AF670
label_1aa0c0:
    if (ctx->pc == 0x1AA0C0u) {
        ctx->pc = 0x1AA0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0BCu;
        // 0x1aa0c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0C4u;
        goto label_1aa0c4;
    }
    ctx->pc = 0x1AA0BCu;
    SET_GPR_U32(ctx, 31, 0x1AA0C4u);
    ctx->pc = 0x1AA0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA0BCu;
    // 0x1aa0c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF670u, 0x1AA0BCu, 0x1AA0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA0C4u;
label_1aa0c4:
    // 0x1aa0c4: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1aa0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1aa0c8:
    // 0x1aa0c8: 0x12a00015  beqz        $s5, . + 4 + (0x15 << 2)
label_1aa0cc:
    if (ctx->pc == 0x1AA0CCu) {
        ctx->pc = 0x1AA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0C8u;
        // 0x1aa0cc: 0xa06028f5  sb          $zero, 0x28F5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 10485), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0D0u;
        goto label_1aa0d0;
    }
    ctx->pc = 0x1AA0C8u;
    {
        const bool branch_taken_0x1aa0c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0C8u;
        // 0x1aa0cc: 0xa06028f5  sb          $zero, 0x28F5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 10485), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa0c8) {
            ctx->pc = 0x1AA120u;
            goto label_1aa120;
        }
    }
    ctx->pc = 0x1AA0D0u;
label_1aa0d0:
    // 0x1aa0d0: 0x8eb9031c  lw          $t9, 0x31C($s5)
    ctx->pc = 0x1aa0d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 796)));
label_1aa0d4:
    // 0x1aa0d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1aa0d8:
    // 0x1aa0d8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1aa0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1aa0dc:
    // 0x1aa0dc: 0x320f809  jalr        $t9
label_1aa0e0:
    if (ctx->pc == 0x1AA0E0u) {
        ctx->pc = 0x1AA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0DCu;
        // 0x1aa0e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0E4u;
        goto label_1aa0e4;
    }
    ctx->pc = 0x1AA0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA0E4u);
        ctx->pc = 0x1AA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0DCu;
        // 0x1aa0e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA0DCu, 0x1AA0E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA0E4u;
label_1aa0e4:
    // 0x1aa0e4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1aa0e8:
    if (ctx->pc == 0x1AA0E8u) {
        ctx->pc = 0x1AA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0E4u;
        // 0x1aa0e8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0ECu;
        goto label_1aa0ec;
    }
    ctx->pc = 0x1AA0E4u;
    {
        const bool branch_taken_0x1aa0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0E4u;
        // 0x1aa0e8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa0e4) {
            ctx->pc = 0x1AA124u;
            goto label_1aa124;
        }
    }
    ctx->pc = 0x1AA0ECu;
label_1aa0ec:
    // 0x1aa0ec: 0x92a306cc  lbu         $v1, 0x6CC($s5)
    ctx->pc = 0x1aa0ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1740)));
label_1aa0f0:
    // 0x1aa0f0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1aa0f4:
    if (ctx->pc == 0x1AA0F4u) {
        ctx->pc = 0x1AA0F8u;
        goto label_1aa0f8;
    }
    ctx->pc = 0x1AA0F0u;
    {
        const bool branch_taken_0x1aa0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa0f0) {
            ctx->pc = 0x1AA11Cu;
            goto label_1aa11c;
        }
    }
    ctx->pc = 0x1AA0F8u;
label_1aa0f8:
    // 0x1aa0f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aa0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa0fc:
    // 0x1aa0fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1aa0fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa100:
    // 0x1aa100: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1aa100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_1aa104:
    // 0x1aa104: 0xc069bb0  jal         func_1A6EC0
label_1aa108:
    if (ctx->pc == 0x1AA108u) {
        ctx->pc = 0x1AA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA104u;
        // 0x1aa108: 0x24440770  addiu       $a0, $v0, 0x770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA10Cu;
        goto label_1aa10c;
    }
    ctx->pc = 0x1AA104u;
    SET_GPR_U32(ctx, 31, 0x1AA10Cu);
    ctx->pc = 0x1AA108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA104u;
    // 0x1aa108: 0x24440770  addiu       $a0, $v0, 0x770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6EC0u, 0x1AA104u, 0x1AA10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA10Cu;
label_1aa10c:
    // 0x1aa10c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1aa110:
    // 0x1aa110: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1aa110u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1aa114:
    // 0x1aa114: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_1aa118:
    if (ctx->pc == 0x1AA118u) {
        ctx->pc = 0x1AA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA114u;
        // 0x1aa118: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA11Cu;
        goto label_1aa11c;
    }
    ctx->pc = 0x1AA114u;
    {
        const bool branch_taken_0x1aa114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA114u;
        // 0x1aa118: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa114) {
            ctx->pc = 0x1AA100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa100;
        }
    }
    ctx->pc = 0x1AA11Cu;
label_1aa11c:
    // 0x1aa11c: 0x0  nop
    ctx->pc = 0x1aa11cu;
    // NOP
label_1aa120:
    // 0x1aa120: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1aa120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1aa124:
    // 0x1aa124: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1aa124u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1aa128:
    // 0x1aa128: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1aa128u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1aa12c:
    // 0x1aa12c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1aa12cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1aa130:
    // 0x1aa130: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1aa130u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1aa134:
    // 0x1aa134: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1aa134u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1aa138:
    // 0x1aa138: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1aa138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa13c:
    // 0x1aa13c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1aa13cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1aa140:
    // 0x1aa140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aa140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aa144:
    // 0x1aa144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aa144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa148:
    // 0x1aa148: 0x3e00008  jr          $ra
label_1aa14c:
    if (ctx->pc == 0x1AA14Cu) {
        ctx->pc = 0x1AA14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA148u;
        // 0x1aa14c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA150u;
        goto label_fallthrough_0x1aa148;
    }
    ctx->pc = 0x1AA148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA148u;
        // 0x1aa14c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aa148:
    ctx->pc = 0x1AA150u;
}
