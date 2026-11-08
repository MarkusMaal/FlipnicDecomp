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

// Function: FUN_00188900
// Address: 0x188900 - 0x188eec
void FUN_00188900_0x188900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00188900_0x188900");
#endif

    switch (ctx->pc) {
        case 0x188900u: goto label_188900;
        case 0x188904u: goto label_188904;
        case 0x188908u: goto label_188908;
        case 0x18890cu: goto label_18890c;
        case 0x188910u: goto label_188910;
        case 0x188914u: goto label_188914;
        case 0x188918u: goto label_188918;
        case 0x18891cu: goto label_18891c;
        case 0x188920u: goto label_188920;
        case 0x188924u: goto label_188924;
        case 0x188928u: goto label_188928;
        case 0x18892cu: goto label_18892c;
        case 0x188930u: goto label_188930;
        case 0x188934u: goto label_188934;
        case 0x188938u: goto label_188938;
        case 0x18893cu: goto label_18893c;
        case 0x188940u: goto label_188940;
        case 0x188944u: goto label_188944;
        case 0x188948u: goto label_188948;
        case 0x18894cu: goto label_18894c;
        case 0x188950u: goto label_188950;
        case 0x188954u: goto label_188954;
        case 0x188958u: goto label_188958;
        case 0x18895cu: goto label_18895c;
        case 0x188960u: goto label_188960;
        case 0x188964u: goto label_188964;
        case 0x188968u: goto label_188968;
        case 0x18896cu: goto label_18896c;
        case 0x188970u: goto label_188970;
        case 0x188974u: goto label_188974;
        case 0x188978u: goto label_188978;
        case 0x18897cu: goto label_18897c;
        case 0x188980u: goto label_188980;
        case 0x188984u: goto label_188984;
        case 0x188988u: goto label_188988;
        case 0x18898cu: goto label_18898c;
        case 0x188990u: goto label_188990;
        case 0x188994u: goto label_188994;
        case 0x188998u: goto label_188998;
        case 0x18899cu: goto label_18899c;
        case 0x1889a0u: goto label_1889a0;
        case 0x1889a4u: goto label_1889a4;
        case 0x1889a8u: goto label_1889a8;
        case 0x1889acu: goto label_1889ac;
        case 0x1889b0u: goto label_1889b0;
        case 0x1889b4u: goto label_1889b4;
        case 0x1889b8u: goto label_1889b8;
        case 0x1889bcu: goto label_1889bc;
        case 0x1889c0u: goto label_1889c0;
        case 0x1889c4u: goto label_1889c4;
        case 0x1889c8u: goto label_1889c8;
        case 0x1889ccu: goto label_1889cc;
        case 0x1889d0u: goto label_1889d0;
        case 0x1889d4u: goto label_1889d4;
        case 0x1889d8u: goto label_1889d8;
        case 0x1889dcu: goto label_1889dc;
        case 0x1889e0u: goto label_1889e0;
        case 0x1889e4u: goto label_1889e4;
        case 0x1889e8u: goto label_1889e8;
        case 0x1889ecu: goto label_1889ec;
        case 0x1889f0u: goto label_1889f0;
        case 0x1889f4u: goto label_1889f4;
        case 0x1889f8u: goto label_1889f8;
        case 0x1889fcu: goto label_1889fc;
        case 0x188a00u: goto label_188a00;
        case 0x188a04u: goto label_188a04;
        case 0x188a08u: goto label_188a08;
        case 0x188a0cu: goto label_188a0c;
        case 0x188a10u: goto label_188a10;
        case 0x188a14u: goto label_188a14;
        case 0x188a18u: goto label_188a18;
        case 0x188a1cu: goto label_188a1c;
        case 0x188a20u: goto label_188a20;
        case 0x188a24u: goto label_188a24;
        case 0x188a28u: goto label_188a28;
        case 0x188a2cu: goto label_188a2c;
        case 0x188a30u: goto label_188a30;
        case 0x188a34u: goto label_188a34;
        case 0x188a38u: goto label_188a38;
        case 0x188a3cu: goto label_188a3c;
        case 0x188a40u: goto label_188a40;
        case 0x188a44u: goto label_188a44;
        case 0x188a48u: goto label_188a48;
        case 0x188a4cu: goto label_188a4c;
        case 0x188a50u: goto label_188a50;
        case 0x188a54u: goto label_188a54;
        case 0x188a58u: goto label_188a58;
        case 0x188a5cu: goto label_188a5c;
        case 0x188a60u: goto label_188a60;
        case 0x188a64u: goto label_188a64;
        case 0x188a68u: goto label_188a68;
        case 0x188a6cu: goto label_188a6c;
        case 0x188a70u: goto label_188a70;
        case 0x188a74u: goto label_188a74;
        case 0x188a78u: goto label_188a78;
        case 0x188a7cu: goto label_188a7c;
        case 0x188a80u: goto label_188a80;
        case 0x188a84u: goto label_188a84;
        case 0x188a88u: goto label_188a88;
        case 0x188a8cu: goto label_188a8c;
        case 0x188a90u: goto label_188a90;
        case 0x188a94u: goto label_188a94;
        case 0x188a98u: goto label_188a98;
        case 0x188a9cu: goto label_188a9c;
        case 0x188aa0u: goto label_188aa0;
        case 0x188aa4u: goto label_188aa4;
        case 0x188aa8u: goto label_188aa8;
        case 0x188aacu: goto label_188aac;
        case 0x188ab0u: goto label_188ab0;
        case 0x188ab4u: goto label_188ab4;
        case 0x188ab8u: goto label_188ab8;
        case 0x188abcu: goto label_188abc;
        case 0x188ac0u: goto label_188ac0;
        case 0x188ac4u: goto label_188ac4;
        case 0x188ac8u: goto label_188ac8;
        case 0x188accu: goto label_188acc;
        case 0x188ad0u: goto label_188ad0;
        case 0x188ad4u: goto label_188ad4;
        case 0x188ad8u: goto label_188ad8;
        case 0x188adcu: goto label_188adc;
        case 0x188ae0u: goto label_188ae0;
        case 0x188ae4u: goto label_188ae4;
        case 0x188ae8u: goto label_188ae8;
        case 0x188aecu: goto label_188aec;
        case 0x188af0u: goto label_188af0;
        case 0x188af4u: goto label_188af4;
        case 0x188af8u: goto label_188af8;
        case 0x188afcu: goto label_188afc;
        case 0x188b00u: goto label_188b00;
        case 0x188b04u: goto label_188b04;
        case 0x188b08u: goto label_188b08;
        case 0x188b0cu: goto label_188b0c;
        case 0x188b10u: goto label_188b10;
        case 0x188b14u: goto label_188b14;
        case 0x188b18u: goto label_188b18;
        case 0x188b1cu: goto label_188b1c;
        case 0x188b20u: goto label_188b20;
        case 0x188b24u: goto label_188b24;
        case 0x188b28u: goto label_188b28;
        case 0x188b2cu: goto label_188b2c;
        case 0x188b30u: goto label_188b30;
        case 0x188b34u: goto label_188b34;
        case 0x188b38u: goto label_188b38;
        case 0x188b3cu: goto label_188b3c;
        case 0x188b40u: goto label_188b40;
        case 0x188b44u: goto label_188b44;
        case 0x188b48u: goto label_188b48;
        case 0x188b4cu: goto label_188b4c;
        case 0x188b50u: goto label_188b50;
        case 0x188b54u: goto label_188b54;
        case 0x188b58u: goto label_188b58;
        case 0x188b5cu: goto label_188b5c;
        case 0x188b60u: goto label_188b60;
        case 0x188b64u: goto label_188b64;
        case 0x188b68u: goto label_188b68;
        case 0x188b6cu: goto label_188b6c;
        case 0x188b70u: goto label_188b70;
        case 0x188b74u: goto label_188b74;
        case 0x188b78u: goto label_188b78;
        case 0x188b7cu: goto label_188b7c;
        case 0x188b80u: goto label_188b80;
        case 0x188b84u: goto label_188b84;
        case 0x188b88u: goto label_188b88;
        case 0x188b8cu: goto label_188b8c;
        case 0x188b90u: goto label_188b90;
        case 0x188b94u: goto label_188b94;
        case 0x188b98u: goto label_188b98;
        case 0x188b9cu: goto label_188b9c;
        case 0x188ba0u: goto label_188ba0;
        case 0x188ba4u: goto label_188ba4;
        case 0x188ba8u: goto label_188ba8;
        case 0x188bacu: goto label_188bac;
        case 0x188bb0u: goto label_188bb0;
        case 0x188bb4u: goto label_188bb4;
        case 0x188bb8u: goto label_188bb8;
        case 0x188bbcu: goto label_188bbc;
        case 0x188bc0u: goto label_188bc0;
        case 0x188bc4u: goto label_188bc4;
        case 0x188bc8u: goto label_188bc8;
        case 0x188bccu: goto label_188bcc;
        case 0x188bd0u: goto label_188bd0;
        case 0x188bd4u: goto label_188bd4;
        case 0x188bd8u: goto label_188bd8;
        case 0x188bdcu: goto label_188bdc;
        case 0x188be0u: goto label_188be0;
        case 0x188be4u: goto label_188be4;
        case 0x188be8u: goto label_188be8;
        case 0x188becu: goto label_188bec;
        case 0x188bf0u: goto label_188bf0;
        case 0x188bf4u: goto label_188bf4;
        case 0x188bf8u: goto label_188bf8;
        case 0x188bfcu: goto label_188bfc;
        case 0x188c00u: goto label_188c00;
        case 0x188c04u: goto label_188c04;
        case 0x188c08u: goto label_188c08;
        case 0x188c0cu: goto label_188c0c;
        case 0x188c10u: goto label_188c10;
        case 0x188c14u: goto label_188c14;
        case 0x188c18u: goto label_188c18;
        case 0x188c1cu: goto label_188c1c;
        case 0x188c20u: goto label_188c20;
        case 0x188c24u: goto label_188c24;
        case 0x188c28u: goto label_188c28;
        case 0x188c2cu: goto label_188c2c;
        case 0x188c30u: goto label_188c30;
        case 0x188c34u: goto label_188c34;
        case 0x188c38u: goto label_188c38;
        case 0x188c3cu: goto label_188c3c;
        case 0x188c40u: goto label_188c40;
        case 0x188c44u: goto label_188c44;
        case 0x188c48u: goto label_188c48;
        case 0x188c4cu: goto label_188c4c;
        case 0x188c50u: goto label_188c50;
        case 0x188c54u: goto label_188c54;
        case 0x188c58u: goto label_188c58;
        case 0x188c5cu: goto label_188c5c;
        case 0x188c60u: goto label_188c60;
        case 0x188c64u: goto label_188c64;
        case 0x188c68u: goto label_188c68;
        case 0x188c6cu: goto label_188c6c;
        case 0x188c70u: goto label_188c70;
        case 0x188c74u: goto label_188c74;
        case 0x188c78u: goto label_188c78;
        case 0x188c7cu: goto label_188c7c;
        case 0x188c80u: goto label_188c80;
        case 0x188c84u: goto label_188c84;
        case 0x188c88u: goto label_188c88;
        case 0x188c8cu: goto label_188c8c;
        case 0x188c90u: goto label_188c90;
        case 0x188c94u: goto label_188c94;
        case 0x188c98u: goto label_188c98;
        case 0x188c9cu: goto label_188c9c;
        case 0x188ca0u: goto label_188ca0;
        case 0x188ca4u: goto label_188ca4;
        case 0x188ca8u: goto label_188ca8;
        case 0x188cacu: goto label_188cac;
        case 0x188cb0u: goto label_188cb0;
        case 0x188cb4u: goto label_188cb4;
        case 0x188cb8u: goto label_188cb8;
        case 0x188cbcu: goto label_188cbc;
        case 0x188cc0u: goto label_188cc0;
        case 0x188cc4u: goto label_188cc4;
        case 0x188cc8u: goto label_188cc8;
        case 0x188cccu: goto label_188ccc;
        case 0x188cd0u: goto label_188cd0;
        case 0x188cd4u: goto label_188cd4;
        case 0x188cd8u: goto label_188cd8;
        case 0x188cdcu: goto label_188cdc;
        case 0x188ce0u: goto label_188ce0;
        case 0x188ce4u: goto label_188ce4;
        case 0x188ce8u: goto label_188ce8;
        case 0x188cecu: goto label_188cec;
        case 0x188cf0u: goto label_188cf0;
        case 0x188cf4u: goto label_188cf4;
        case 0x188cf8u: goto label_188cf8;
        case 0x188cfcu: goto label_188cfc;
        case 0x188d00u: goto label_188d00;
        case 0x188d04u: goto label_188d04;
        case 0x188d08u: goto label_188d08;
        case 0x188d0cu: goto label_188d0c;
        case 0x188d10u: goto label_188d10;
        case 0x188d14u: goto label_188d14;
        case 0x188d18u: goto label_188d18;
        case 0x188d1cu: goto label_188d1c;
        case 0x188d20u: goto label_188d20;
        case 0x188d24u: goto label_188d24;
        case 0x188d28u: goto label_188d28;
        case 0x188d2cu: goto label_188d2c;
        case 0x188d30u: goto label_188d30;
        case 0x188d34u: goto label_188d34;
        case 0x188d38u: goto label_188d38;
        case 0x188d3cu: goto label_188d3c;
        case 0x188d40u: goto label_188d40;
        case 0x188d44u: goto label_188d44;
        case 0x188d48u: goto label_188d48;
        case 0x188d4cu: goto label_188d4c;
        case 0x188d50u: goto label_188d50;
        case 0x188d54u: goto label_188d54;
        case 0x188d58u: goto label_188d58;
        case 0x188d5cu: goto label_188d5c;
        case 0x188d60u: goto label_188d60;
        case 0x188d64u: goto label_188d64;
        case 0x188d68u: goto label_188d68;
        case 0x188d6cu: goto label_188d6c;
        case 0x188d70u: goto label_188d70;
        case 0x188d74u: goto label_188d74;
        case 0x188d78u: goto label_188d78;
        case 0x188d7cu: goto label_188d7c;
        case 0x188d80u: goto label_188d80;
        case 0x188d84u: goto label_188d84;
        case 0x188d88u: goto label_188d88;
        case 0x188d8cu: goto label_188d8c;
        case 0x188d90u: goto label_188d90;
        case 0x188d94u: goto label_188d94;
        case 0x188d98u: goto label_188d98;
        case 0x188d9cu: goto label_188d9c;
        case 0x188da0u: goto label_188da0;
        case 0x188da4u: goto label_188da4;
        case 0x188da8u: goto label_188da8;
        case 0x188dacu: goto label_188dac;
        case 0x188db0u: goto label_188db0;
        case 0x188db4u: goto label_188db4;
        case 0x188db8u: goto label_188db8;
        case 0x188dbcu: goto label_188dbc;
        case 0x188dc0u: goto label_188dc0;
        case 0x188dc4u: goto label_188dc4;
        case 0x188dc8u: goto label_188dc8;
        case 0x188dccu: goto label_188dcc;
        case 0x188dd0u: goto label_188dd0;
        case 0x188dd4u: goto label_188dd4;
        case 0x188dd8u: goto label_188dd8;
        case 0x188ddcu: goto label_188ddc;
        case 0x188de0u: goto label_188de0;
        case 0x188de4u: goto label_188de4;
        case 0x188de8u: goto label_188de8;
        case 0x188decu: goto label_188dec;
        case 0x188df0u: goto label_188df0;
        case 0x188df4u: goto label_188df4;
        case 0x188df8u: goto label_188df8;
        case 0x188dfcu: goto label_188dfc;
        case 0x188e00u: goto label_188e00;
        case 0x188e04u: goto label_188e04;
        case 0x188e08u: goto label_188e08;
        case 0x188e0cu: goto label_188e0c;
        case 0x188e10u: goto label_188e10;
        case 0x188e14u: goto label_188e14;
        case 0x188e18u: goto label_188e18;
        case 0x188e1cu: goto label_188e1c;
        case 0x188e20u: goto label_188e20;
        case 0x188e24u: goto label_188e24;
        case 0x188e28u: goto label_188e28;
        case 0x188e2cu: goto label_188e2c;
        case 0x188e30u: goto label_188e30;
        case 0x188e34u: goto label_188e34;
        case 0x188e38u: goto label_188e38;
        case 0x188e3cu: goto label_188e3c;
        case 0x188e40u: goto label_188e40;
        case 0x188e44u: goto label_188e44;
        case 0x188e48u: goto label_188e48;
        case 0x188e4cu: goto label_188e4c;
        case 0x188e50u: goto label_188e50;
        case 0x188e54u: goto label_188e54;
        case 0x188e58u: goto label_188e58;
        case 0x188e5cu: goto label_188e5c;
        case 0x188e60u: goto label_188e60;
        case 0x188e64u: goto label_188e64;
        case 0x188e68u: goto label_188e68;
        case 0x188e6cu: goto label_188e6c;
        case 0x188e70u: goto label_188e70;
        case 0x188e74u: goto label_188e74;
        case 0x188e78u: goto label_188e78;
        case 0x188e7cu: goto label_188e7c;
        case 0x188e80u: goto label_188e80;
        case 0x188e84u: goto label_188e84;
        case 0x188e88u: goto label_188e88;
        case 0x188e8cu: goto label_188e8c;
        case 0x188e90u: goto label_188e90;
        case 0x188e94u: goto label_188e94;
        case 0x188e98u: goto label_188e98;
        case 0x188e9cu: goto label_188e9c;
        case 0x188ea0u: goto label_188ea0;
        case 0x188ea4u: goto label_188ea4;
        case 0x188ea8u: goto label_188ea8;
        case 0x188eacu: goto label_188eac;
        case 0x188eb0u: goto label_188eb0;
        case 0x188eb4u: goto label_188eb4;
        case 0x188eb8u: goto label_188eb8;
        case 0x188ebcu: goto label_188ebc;
        case 0x188ec0u: goto label_188ec0;
        case 0x188ec4u: goto label_188ec4;
        case 0x188ec8u: goto label_188ec8;
        case 0x188eccu: goto label_188ecc;
        case 0x188ed0u: goto label_188ed0;
        case 0x188ed4u: goto label_188ed4;
        case 0x188ed8u: goto label_188ed8;
        case 0x188edcu: goto label_188edc;
        case 0x188ee0u: goto label_188ee0;
        case 0x188ee4u: goto label_188ee4;
        case 0x188ee8u: goto label_188ee8;
        default: break;
    }

    ctx->pc = 0x188900u;

label_188900:
    // 0x188900: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x188900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_188904:
    // 0x188904: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x188904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_188908:
    // 0x188908: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x188908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_18890c:
    // 0x18890c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x18890cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_188910:
    // 0x188910: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x188910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_188914:
    // 0x188914: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x188914u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188918:
    // 0x188918: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x188918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_18891c:
    // 0x18891c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x18891cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_188920:
    // 0x188920: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x188920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_188924:
    // 0x188924: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x188924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_188928:
    // 0x188928: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x188928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_18892c:
    // 0x18892c: 0xe7b80030  swc1        $f24, 0x30($sp)
    ctx->pc = 0x18892cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_188930:
    // 0x188930: 0xe7b7002c  swc1        $f23, 0x2C($sp)
    ctx->pc = 0x188930u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_188934:
    // 0x188934: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x188934u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_188938:
    // 0x188938: 0xe7b50024  swc1        $f21, 0x24($sp)
    ctx->pc = 0x188938u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_18893c:
    // 0x18893c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x18893cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_188940:
    // 0x188940: 0xafa500c8  sw          $a1, 0xC8($sp)
    ctx->pc = 0x188940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 5));
label_188944:
    // 0x188944: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x188944u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_188948:
    // 0x188948: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x188948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_18894c:
    // 0x18894c: 0xc04b7b4  jal         func_12DED0
label_188950:
    if (ctx->pc == 0x188950u) {
        ctx->pc = 0x188950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18894Cu;
        // 0x188950: 0xafa700cc  sw          $a3, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188954u;
        goto label_188954;
    }
    ctx->pc = 0x18894Cu;
    SET_GPR_U32(ctx, 31, 0x188954u);
    ctx->pc = 0x188950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18894Cu;
    // 0x188950: 0xafa700cc  sw          $a3, 0xCC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x18894Cu, 0x188954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188954u;
label_188954:
    // 0x188954: 0xc6a10040  lwc1        $f1, 0x40($s5)
    ctx->pc = 0x188954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188958:
    // 0x188958: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x188958u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18895c:
    // 0x18895c: 0xc6a00044  lwc1        $f0, 0x44($s5)
    ctx->pc = 0x18895cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188960:
    // 0x188960: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x188960u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_188964:
    // 0x188964: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x188964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188968:
    // 0x188968: 0x4601ad02  mul.s       $f20, $f21, $f1
    ctx->pc = 0x188968u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_18896c:
    // 0x18896c: 0x1000014b  b           . + 4 + (0x14B << 2)
label_188970:
    if (ctx->pc == 0x188970u) {
        ctx->pc = 0x188970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18896Cu;
        // 0x188970: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188974u;
        goto label_188974;
    }
    ctx->pc = 0x18896Cu;
    {
        const bool branch_taken_0x18896c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18896Cu;
        // 0x188970: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18896c) {
            ctx->pc = 0x188E9Cu;
            goto label_188e9c;
        }
    }
    ctx->pc = 0x188974u;
label_188974:
    // 0x188974: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_188978:
    if (ctx->pc == 0x188978u) {
        ctx->pc = 0x18897Cu;
        goto label_18897c;
    }
    ctx->pc = 0x188974u;
    {
        const bool branch_taken_0x188974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x188974) {
            ctx->pc = 0x1889ECu;
            goto label_1889ec;
        }
    }
    ctx->pc = 0x18897Cu;
label_18897c:
    // 0x18897c: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x18897cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_188980:
    // 0x188980: 0xc062874  jal         func_18A1D0
label_188984:
    if (ctx->pc == 0x188984u) {
        ctx->pc = 0x188984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188980u;
        // 0x188984: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188988u;
        goto label_188988;
    }
    ctx->pc = 0x188980u;
    SET_GPR_U32(ctx, 31, 0x188988u);
    ctx->pc = 0x188984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188980u;
    // 0x188984: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A1D0u, 0x188980u, 0x188988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188988u;
label_188988:
    // 0x188988: 0x8ea40048  lw          $a0, 0x48($s5)
    ctx->pc = 0x188988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_18898c:
    // 0x18898c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18898cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_188990:
    // 0x188990: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_188994:
    if (ctx->pc == 0x188994u) {
        ctx->pc = 0x188994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188990u;
        // 0x188994: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188998u;
        goto label_188998;
    }
    ctx->pc = 0x188990u;
    {
        const bool branch_taken_0x188990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x188994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188990u;
        // 0x188994: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188990) {
            ctx->pc = 0x1889E0u;
            goto label_1889e0;
        }
    }
    ctx->pc = 0x188998u;
label_188998:
    // 0x188998: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_18899c:
    if (ctx->pc == 0x18899Cu) {
        ctx->pc = 0x1889A0u;
        goto label_1889a0;
    }
    ctx->pc = 0x188998u;
    {
        const bool branch_taken_0x188998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188998) {
            ctx->pc = 0x1889BCu;
            goto label_1889bc;
        }
    }
    ctx->pc = 0x1889A0u;
label_1889a0:
    // 0x1889a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1889a4:
    if (ctx->pc == 0x1889A4u) {
        ctx->pc = 0x1889A8u;
        goto label_1889a8;
    }
    ctx->pc = 0x1889A0u;
    {
        const bool branch_taken_0x1889a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1889a0) {
            ctx->pc = 0x1889B0u;
            goto label_1889b0;
        }
    }
    ctx->pc = 0x1889A8u;
label_1889a8:
    // 0x1889a8: 0x1000000e  b           . + 4 + (0xE << 2)
label_1889ac:
    if (ctx->pc == 0x1889ACu) {
        ctx->pc = 0x1889B0u;
        goto label_1889b0;
    }
    ctx->pc = 0x1889A8u;
    {
        const bool branch_taken_0x1889a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1889a8) {
            ctx->pc = 0x1889E4u;
            goto label_1889e4;
        }
    }
    ctx->pc = 0x1889B0u;
label_1889b0:
    // 0x1889b0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1889b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1889b4:
    // 0x1889b4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1889b8:
    if (ctx->pc == 0x1889B8u) {
        ctx->pc = 0x1889BCu;
        goto label_1889bc;
    }
    ctx->pc = 0x1889B4u;
    {
        const bool branch_taken_0x1889b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1889b4) {
            ctx->pc = 0x1889E4u;
            goto label_1889e4;
        }
    }
    ctx->pc = 0x1889BCu;
label_1889bc:
    // 0x1889bc: 0x0  nop
    ctx->pc = 0x1889bcu;
    // NOP
label_1889c0:
    // 0x1889c0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1889c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1889c4:
    // 0x1889c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1889c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1889c8:
    // 0x1889c8: 0x0  nop
    ctx->pc = 0x1889c8u;
    // NOP
label_1889cc:
    // 0x1889cc: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x1889ccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1889d0:
    // 0x1889d0: 0x0  nop
    ctx->pc = 0x1889d0u;
    // NOP
label_1889d4:
    // 0x1889d4: 0x0  nop
    ctx->pc = 0x1889d4u;
    // NOP
label_1889d8:
    // 0x1889d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1889dc:
    if (ctx->pc == 0x1889DCu) {
        ctx->pc = 0x1889E0u;
        goto label_1889e0;
    }
    ctx->pc = 0x1889D8u;
    {
        const bool branch_taken_0x1889d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1889d8) {
            ctx->pc = 0x1889E4u;
            goto label_1889e4;
        }
    }
    ctx->pc = 0x1889E0u;
label_1889e0:
    // 0x1889e0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1889e0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_1889e4:
    // 0x1889e4: 0x0  nop
    ctx->pc = 0x1889e4u;
    // NOP
label_1889e8:
    // 0x1889e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1889e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1889ec:
    // 0x1889ec: 0x0  nop
    ctx->pc = 0x1889ecu;
    // NOP
label_1889f0:
    // 0x1889f0: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1889f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1889f4:
    // 0x1889f4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1889f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1889f8:
    // 0x1889f8: 0x90a60001  lbu         $a2, 0x1($a1)
    ctx->pc = 0x1889f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1889fc:
    // 0x1889fc: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x1889fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_188a00:
    // 0x188a00: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x188a00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_188a04:
    // 0x188a04: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x188a04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_188a08:
    // 0x188a08: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x188a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_188a0c:
    // 0x188a0c: 0x10e30072  beq         $a3, $v1, . + 4 + (0x72 << 2)
label_188a10:
    if (ctx->pc == 0x188A10u) {
        ctx->pc = 0x188A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A0Cu;
        // 0x188a10: 0xafa400c8  sw          $a0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A14u;
        goto label_188a14;
    }
    ctx->pc = 0x188A0Cu;
    {
        const bool branch_taken_0x188a0c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x188A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A0Cu;
        // 0x188a10: 0xafa400c8  sw          $a0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a0c) {
            ctx->pc = 0x188BD8u;
            goto label_188bd8;
        }
    }
    ctx->pc = 0x188A14u;
label_188a14:
    // 0x188a14: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x188a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_188a18:
    // 0x188a18: 0x10e30069  beq         $a3, $v1, . + 4 + (0x69 << 2)
label_188a1c:
    if (ctx->pc == 0x188A1Cu) {
        ctx->pc = 0x188A20u;
        goto label_188a20;
    }
    ctx->pc = 0x188A18u;
    {
        const bool branch_taken_0x188a18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x188a18) {
            ctx->pc = 0x188BC0u;
            goto label_188bc0;
        }
    }
    ctx->pc = 0x188A20u;
label_188a20:
    // 0x188a20: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x188a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_188a24:
    // 0x188a24: 0x10e20042  beq         $a3, $v0, . + 4 + (0x42 << 2)
label_188a28:
    if (ctx->pc == 0x188A28u) {
        ctx->pc = 0x188A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A24u;
        // 0x188a28: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A2Cu;
        goto label_188a2c;
    }
    ctx->pc = 0x188A24u;
    {
        const bool branch_taken_0x188a24 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x188A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A24u;
        // 0x188a28: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a24) {
            ctx->pc = 0x188B30u;
            goto label_188b30;
        }
    }
    ctx->pc = 0x188A2Cu;
label_188a2c:
    // 0x188a2c: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
label_188a30:
    if (ctx->pc == 0x188A30u) {
        ctx->pc = 0x188A34u;
        goto label_188a34;
    }
    ctx->pc = 0x188A2Cu;
    {
        const bool branch_taken_0x188a2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x188a2c) {
            ctx->pc = 0x188A3Cu;
            goto label_188a3c;
        }
    }
    ctx->pc = 0x188A34u;
label_188a34:
    // 0x188a34: 0x10000072  b           . + 4 + (0x72 << 2)
label_188a38:
    if (ctx->pc == 0x188A38u) {
        ctx->pc = 0x188A3Cu;
        goto label_188a3c;
    }
    ctx->pc = 0x188A34u;
    {
        const bool branch_taken_0x188a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188a34) {
            ctx->pc = 0x188C00u;
            goto label_188c00;
        }
    }
    ctx->pc = 0x188A3Cu;
label_188a3c:
    // 0x188a3c: 0x0  nop
    ctx->pc = 0x188a3cu;
    // NOP
label_188a40:
    // 0x188a40: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x188a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_188a44:
    // 0x188a44: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x188a44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_188a48:
    // 0x188a48: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x188a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_188a4c:
    // 0x188a4c: 0xc062214  jal         func_188850
label_188a50:
    if (ctx->pc == 0x188A50u) {
        ctx->pc = 0x188A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A4Cu;
        // 0x188a50: 0x27a500cc  addiu       $a1, $sp, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A54u;
        goto label_188a54;
    }
    ctx->pc = 0x188A4Cu;
    SET_GPR_U32(ctx, 31, 0x188A54u);
    ctx->pc = 0x188A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A4Cu;
    // 0x188a50: 0x27a500cc  addiu       $a1, $sp, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188850u, 0x188A4Cu, 0x188A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A54u;
label_188a54:
    // 0x188a54: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x188a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_188a58:
    // 0x188a58: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x188a58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_188a5c:
    // 0x188a5c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x188a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_188a60:
    // 0x188a60: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x188a60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_188a64:
    // 0x188a64: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_188a68:
    if (ctx->pc == 0x188A68u) {
        ctx->pc = 0x188A6Cu;
        goto label_188a6c;
    }
    ctx->pc = 0x188A64u;
    {
        const bool branch_taken_0x188a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188a64) {
            ctx->pc = 0x188A8Cu;
            goto label_188a8c;
        }
    }
    ctx->pc = 0x188A6Cu;
label_188a6c:
    // 0x188a6c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x188a6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_188a70:
    // 0x188a70: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_188a74:
    if (ctx->pc == 0x188A74u) {
        ctx->pc = 0x188A78u;
        goto label_188a78;
    }
    ctx->pc = 0x188A70u;
    {
        const bool branch_taken_0x188a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188a70) {
            ctx->pc = 0x188A8Cu;
            goto label_188a8c;
        }
    }
    ctx->pc = 0x188A78u;
label_188a78:
    // 0x188a78: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x188a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_188a7c:
    // 0x188a7c: 0x24830002  addiu       $v1, $a0, 0x2
    ctx->pc = 0x188a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_188a80:
    // 0x188a80: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x188a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_188a84:
    // 0x188a84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x188a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_188a88:
    // 0x188a88: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x188a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_188a8c:
    // 0x188a8c: 0x0  nop
    ctx->pc = 0x188a8cu;
    // NOP
label_188a90:
    // 0x188a90: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x188a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_188a94:
    // 0x188a94: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x188a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_188a98:
    // 0x188a98: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x188a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_188a9c:
    // 0x188a9c: 0xc062214  jal         func_188850
label_188aa0:
    if (ctx->pc == 0x188AA0u) {
        ctx->pc = 0x188AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A9Cu;
        // 0x188aa0: 0x3446ffff  ori         $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AA4u;
        goto label_188aa4;
    }
    ctx->pc = 0x188A9Cu;
    SET_GPR_U32(ctx, 31, 0x188AA4u);
    ctx->pc = 0x188AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A9Cu;
    // 0x188aa0: 0x3446ffff  ori         $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x188850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188850u, 0x188A9Cu, 0x188AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188AA4u;
label_188aa4:
    // 0x188aa4: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x188aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_188aa8:
    // 0x188aa8: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x188aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_188aac:
    // 0x188aac: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x188aacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_188ab0:
    // 0x188ab0: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_188ab4:
    if (ctx->pc == 0x188AB4u) {
        ctx->pc = 0x188AB8u;
        goto label_188ab8;
    }
    ctx->pc = 0x188AB0u;
    {
        const bool branch_taken_0x188ab0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188ab0) {
            ctx->pc = 0x188AD8u;
            goto label_188ad8;
        }
    }
    ctx->pc = 0x188AB8u;
label_188ab8:
    // 0x188ab8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x188ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_188abc:
    // 0x188abc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_188ac0:
    if (ctx->pc == 0x188AC0u) {
        ctx->pc = 0x188AC4u;
        goto label_188ac4;
    }
    ctx->pc = 0x188ABCu;
    {
        const bool branch_taken_0x188abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188abc) {
            ctx->pc = 0x188AD8u;
            goto label_188ad8;
        }
    }
    ctx->pc = 0x188AC4u;
label_188ac4:
    // 0x188ac4: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x188ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_188ac8:
    // 0x188ac8: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x188ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_188acc:
    // 0x188acc: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x188accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
label_188ad0:
    // 0x188ad0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x188ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_188ad4:
    // 0x188ad4: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x188ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_188ad8:
    // 0x188ad8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x188ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_188adc:
    // 0x188adc: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x188adcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_188ae0:
    // 0x188ae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188ae4:
    // 0x188ae4: 0x0  nop
    ctx->pc = 0x188ae4u;
    // NOP
label_188ae8:
    // 0x188ae8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x188ae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_188aec:
    // 0x188aec: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x188aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_188af0:
    // 0x188af0: 0xc06282c  jal         func_18A0B0
label_188af4:
    if (ctx->pc == 0x188AF4u) {
        ctx->pc = 0x188AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AF0u;
        // 0x188af4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AF8u;
        goto label_188af8;
    }
    ctx->pc = 0x188AF0u;
    SET_GPR_U32(ctx, 31, 0x188AF8u);
    ctx->pc = 0x188AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188AF0u;
    // 0x188af4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x188AF0u, 0x188AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188AF8u;
label_188af8:
    // 0x188af8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x188af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_188afc:
    // 0x188afc: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x188afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_188b00:
    // 0x188b00: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x188b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_188b04:
    // 0x188b04: 0xc062214  jal         func_188850
label_188b08:
    if (ctx->pc == 0x188B08u) {
        ctx->pc = 0x188B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B04u;
        // 0x188b08: 0x3446ffff  ori         $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B0Cu;
        goto label_188b0c;
    }
    ctx->pc = 0x188B04u;
    SET_GPR_U32(ctx, 31, 0x188B0Cu);
    ctx->pc = 0x188B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B04u;
    // 0x188b08: 0x3446ffff  ori         $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x188850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188850u, 0x188B04u, 0x188B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B0Cu;
label_188b0c:
    // 0x188b0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188b10:
    // 0x188b10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x188b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_188b14:
    // 0x188b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188b18:
    // 0x188b18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x188b18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_188b1c:
    // 0x188b1c: 0xc04b678  jal         func_12D9E0
label_188b20:
    if (ctx->pc == 0x188B20u) {
        ctx->pc = 0x188B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B1Cu;
        // 0x188b20: 0xe6a0006c  swc1        $f0, 0x6C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B24u;
        goto label_188b24;
    }
    ctx->pc = 0x188B1Cu;
    SET_GPR_U32(ctx, 31, 0x188B24u);
    ctx->pc = 0x188B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B1Cu;
    // 0x188b20: 0xe6a0006c  swc1        $f0, 0x6C($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D9E0u, 0x188B1Cu, 0x188B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B24u;
label_188b24:
    // 0x188b24: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x188b24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_188b28:
    // 0x188b28: 0x100000da  b           . + 4 + (0xDA << 2)
label_188b2c:
    if (ctx->pc == 0x188B2Cu) {
        ctx->pc = 0x188B30u;
        goto label_188b30;
    }
    ctx->pc = 0x188B28u;
    {
        const bool branch_taken_0x188b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188b28) {
            ctx->pc = 0x188E94u;
            goto label_188e94;
        }
    }
    ctx->pc = 0x188B30u;
label_188b30:
    // 0x188b30: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x188b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_188b34:
    // 0x188b34: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x188b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_188b38:
    // 0x188b38: 0xc062214  jal         func_188850
label_188b3c:
    if (ctx->pc == 0x188B3Cu) {
        ctx->pc = 0x188B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B38u;
        // 0x188b3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B40u;
        goto label_188b40;
    }
    ctx->pc = 0x188B38u;
    SET_GPR_U32(ctx, 31, 0x188B40u);
    ctx->pc = 0x188B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B38u;
    // 0x188b3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188850u, 0x188B38u, 0x188B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B40u;
label_188b40:
    // 0x188b40: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x188b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_188b44:
    // 0x188b44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x188b44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_188b48:
    // 0x188b48: 0xc062874  jal         func_18A1D0
label_188b4c:
    if (ctx->pc == 0x188B4Cu) {
        ctx->pc = 0x188B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B48u;
        // 0x188b4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B50u;
        goto label_188b50;
    }
    ctx->pc = 0x188B48u;
    SET_GPR_U32(ctx, 31, 0x188B50u);
    ctx->pc = 0x188B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B48u;
    // 0x188b4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A1D0u, 0x188B48u, 0x188B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B50u;
label_188b50:
    // 0x188b50: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x188b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188b54:
    // 0x188b54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x188b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_188b58:
    // 0x188b58: 0x12430013  beq         $s2, $v1, . + 4 + (0x13 << 2)
label_188b5c:
    if (ctx->pc == 0x188B5Cu) {
        ctx->pc = 0x188B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B58u;
        // 0x188b5c: 0xe6a10010  swc1        $f1, 0x10($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B60u;
        goto label_188b60;
    }
    ctx->pc = 0x188B58u;
    {
        const bool branch_taken_0x188b58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x188B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B58u;
        // 0x188b5c: 0xe6a10010  swc1        $f1, 0x10($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b58) {
            ctx->pc = 0x188BA8u;
            goto label_188ba8;
        }
    }
    ctx->pc = 0x188B60u;
label_188b60:
    // 0x188b60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188b64:
    // 0x188b64: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
label_188b68:
    if (ctx->pc == 0x188B68u) {
        ctx->pc = 0x188B6Cu;
        goto label_188b6c;
    }
    ctx->pc = 0x188B64u;
    {
        const bool branch_taken_0x188b64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x188b64) {
            ctx->pc = 0x188B7Cu;
            goto label_188b7c;
        }
    }
    ctx->pc = 0x188B6Cu;
label_188b6c:
    // 0x188b6c: 0x124000c9  beqz        $s2, . + 4 + (0xC9 << 2)
label_188b70:
    if (ctx->pc == 0x188B70u) {
        ctx->pc = 0x188B74u;
        goto label_188b74;
    }
    ctx->pc = 0x188B6Cu;
    {
        const bool branch_taken_0x188b6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x188b6c) {
            ctx->pc = 0x188E94u;
            goto label_188e94;
        }
    }
    ctx->pc = 0x188B74u;
label_188b74:
    // 0x188b74: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_188b78:
    if (ctx->pc == 0x188B78u) {
        ctx->pc = 0x188B7Cu;
        goto label_188b7c;
    }
    ctx->pc = 0x188B74u;
    {
        const bool branch_taken_0x188b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188b74) {
            ctx->pc = 0x188E94u;
            goto label_188e94;
        }
    }
    ctx->pc = 0x188B7Cu;
label_188b7c:
    // 0x188b7c: 0x0  nop
    ctx->pc = 0x188b7cu;
    // NOP
label_188b80:
    // 0x188b80: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x188b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_188b84:
    // 0x188b84: 0xc6a2006c  lwc1        $f2, 0x6C($s5)
    ctx->pc = 0x188b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_188b88:
    // 0x188b88: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x188b88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_188b8c:
    // 0x188b8c: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x188b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188b90:
    // 0x188b90: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x188b90u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
label_188b94:
    // 0x188b94: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x188b94u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
label_188b98:
    // 0x188b98: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x188b98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_188b9c:
    // 0x188b9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x188b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_188ba0:
    // 0x188ba0: 0x100000bc  b           . + 4 + (0xBC << 2)
label_188ba4:
    if (ctx->pc == 0x188BA4u) {
        ctx->pc = 0x188BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BA0u;
        // 0x188ba4: 0xe6a00010  swc1        $f0, 0x10($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x188BA8u;
        goto label_188ba8;
    }
    ctx->pc = 0x188BA0u;
    {
        const bool branch_taken_0x188ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BA0u;
        // 0x188ba4: 0xe6a00010  swc1        $f0, 0x10($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ba0) {
            ctx->pc = 0x188E94u;
            goto label_188e94;
        }
    }
    ctx->pc = 0x188BA8u;
label_188ba8:
    // 0x188ba8: 0xc6a2006c  lwc1        $f2, 0x6C($s5)
    ctx->pc = 0x188ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_188bac:
    // 0x188bac: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x188bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188bb0:
    // 0x188bb0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x188bb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_188bb4:
    // 0x188bb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x188bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_188bb8:
    // 0x188bb8: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_188bbc:
    if (ctx->pc == 0x188BBCu) {
        ctx->pc = 0x188BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BB8u;
        // 0x188bbc: 0xe6a00010  swc1        $f0, 0x10($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x188BC0u;
        goto label_188bc0;
    }
    ctx->pc = 0x188BB8u;
    {
        const bool branch_taken_0x188bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BB8u;
        // 0x188bbc: 0xe6a00010  swc1        $f0, 0x10($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bb8) {
            ctx->pc = 0x188E94u;
            goto label_188e94;
        }
    }
    ctx->pc = 0x188BC0u;
label_188bc0:
    // 0x188bc0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x188bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_188bc4:
    // 0x188bc4: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x188bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_188bc8:
    // 0x188bc8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x188bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_188bcc:
    // 0x188bcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x188bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_188bd0:
    // 0x188bd0: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x188bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
label_188bd4:
    // 0x188bd4: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x188bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_188bd8:
    // 0x188bd8: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x188bd8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_188bdc:
    // 0x188bdc: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x188bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188be0:
    // 0x188be0: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x188be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
label_188be4:
    // 0x188be4: 0xc6a20068  lwc1        $f2, 0x68($s5)
    ctx->pc = 0x188be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_188be8:
    // 0x188be8: 0xc6a10044  lwc1        $f1, 0x44($s5)
    ctx->pc = 0x188be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188bec:
    // 0x188bec: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x188becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188bf0:
    // 0x188bf0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x188bf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_188bf4:
    // 0x188bf4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x188bf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_188bf8:
    // 0x188bf8: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_188bfc:
    if (ctx->pc == 0x188BFCu) {
        ctx->pc = 0x188BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BF8u;
        // 0x188bfc: 0xe6a00014  swc1        $f0, 0x14($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C00u;
        goto label_188c00;
    }
    ctx->pc = 0x188BF8u;
    {
        const bool branch_taken_0x188bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BF8u;
        // 0x188bfc: 0xe6a00014  swc1        $f0, 0x14($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bf8) {
            ctx->pc = 0x188E94u;
            goto label_188e94;
        }
    }
    ctx->pc = 0x188C00u;
label_188c00:
    // 0x188c00: 0x8ea60060  lw          $a2, 0x60($s5)
    ctx->pc = 0x188c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_188c04:
    // 0x188c04: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x188c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_188c08:
    // 0x188c08: 0xc04b7dc  jal         func_12DF70
label_188c0c:
    if (ctx->pc == 0x188C0Cu) {
        ctx->pc = 0x188C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C08u;
        // 0x188c0c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C10u;
        goto label_188c10;
    }
    ctx->pc = 0x188C08u;
    SET_GPR_U32(ctx, 31, 0x188C10u);
    ctx->pc = 0x188C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188C08u;
    // 0x188c0c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x188C08u, 0x188C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188C10u;
label_188c10:
    // 0x188c10: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x188c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_188c14:
    // 0x188c14: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x188c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_188c18:
    // 0x188c18: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x188c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_188c1c:
    // 0x188c1c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x188c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_188c20:
    // 0x188c20: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x188c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188c24:
    // 0x188c24: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x188c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188c28:
    // 0x188c28: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x188c28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_188c2c:
    // 0x188c2c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x188c2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_188c30:
    // 0x188c30: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x188c30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_188c34:
    // 0x188c34: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x188c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_188c38:
    // 0x188c38: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x188c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_188c3c:
    // 0x188c3c: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x188c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_188c40:
    // 0x188c40: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x188c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188c44:
    // 0x188c44: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x188c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188c48:
    // 0x188c48: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x188c48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_188c4c:
    // 0x188c4c: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x188c4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_188c50:
    // 0x188c50: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x188c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_188c54:
    // 0x188c54: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x188c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_188c58:
    // 0x188c58: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x188c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188c5c:
    // 0x188c5c: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x188c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_188c60:
    // 0x188c60: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x188c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188c64:
    // 0x188c64: 0x4601a5c0  add.s       $f23, $f20, $f1
    ctx->pc = 0x188c64u;
    ctx->f[23] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_188c68:
    // 0x188c68: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_188c6c:
    if (ctx->pc == 0x188C6Cu) {
        ctx->pc = 0x188C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C68u;
        // 0x188c6c: 0x4600ae00  add.s       $f24, $f21, $f0 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C70u;
        goto label_188c70;
    }
    ctx->pc = 0x188C68u;
    {
        const bool branch_taken_0x188c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C68u;
        // 0x188c6c: 0x4600ae00  add.s       $f24, $f21, $f0 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c68) {
            ctx->pc = 0x188CB4u;
            goto label_188cb4;
        }
    }
    ctx->pc = 0x188C70u;
label_188c70:
    // 0x188c70: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x188c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
label_188c74:
    // 0x188c74: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x188c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
label_188c78:
    // 0x188c78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x188c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_188c7c:
    // 0x188c7c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x188c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_188c80:
    // 0x188c80: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x188c80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_188c84:
    // 0x188c84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_188c88:
    if (ctx->pc == 0x188C88u) {
        ctx->pc = 0x188C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C84u;
        // 0x188c88: 0x8ea30058  lw          $v1, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C8Cu;
        goto label_188c8c;
    }
    ctx->pc = 0x188C84u;
    {
        const bool branch_taken_0x188c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C84u;
        // 0x188c88: 0x8ea30058  lw          $v1, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c84) {
            ctx->pc = 0x188C98u;
            goto label_188c98;
        }
    }
    ctx->pc = 0x188C8Cu;
label_188c8c:
    // 0x188c8c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x188c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_188c90:
    // 0x188c90: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x188c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_188c94:
    // 0x188c94: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x188c94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_188c98:
    // 0x188c98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_188c9c:
    if (ctx->pc == 0x188C9Cu) {
        ctx->pc = 0x188CA0u;
        goto label_188ca0;
    }
    ctx->pc = 0x188C98u;
    {
        const bool branch_taken_0x188c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188c98) {
            ctx->pc = 0x188CACu;
            goto label_188cac;
        }
    }
    ctx->pc = 0x188CA0u;
label_188ca0:
    // 0x188ca0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x188ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_188ca4:
    // 0x188ca4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x188ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_188ca8:
    // 0x188ca8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x188ca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_188cac:
    // 0x188cac: 0x10000003  b           . + 4 + (0x3 << 2)
label_188cb0:
    if (ctx->pc == 0x188CB0u) {
        ctx->pc = 0x188CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CACu;
        // 0x188cb0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188CB4u;
        goto label_188cb4;
    }
    ctx->pc = 0x188CACu;
    {
        const bool branch_taken_0x188cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CACu;
        // 0x188cb0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188cac) {
            ctx->pc = 0x188CBCu;
            goto label_188cbc;
        }
    }
    ctx->pc = 0x188CB4u;
label_188cb4:
    // 0x188cb4: 0x0  nop
    ctx->pc = 0x188cb4u;
    // NOP
label_188cb8:
    // 0x188cb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x188cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188cbc:
    // 0x188cbc: 0x0  nop
    ctx->pc = 0x188cbcu;
    // NOP
label_188cc0:
    // 0x188cc0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_188cc4:
    if (ctx->pc == 0x188CC4u) {
        ctx->pc = 0x188CC8u;
        goto label_188cc8;
    }
    ctx->pc = 0x188CC0u;
    {
        const bool branch_taken_0x188cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188cc0) {
            ctx->pc = 0x188D98u;
            goto label_188d98;
        }
    }
    ctx->pc = 0x188CC8u;
label_188cc8:
    // 0x188cc8: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_188ccc:
    if (ctx->pc == 0x188CCCu) {
        ctx->pc = 0x188CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CC8u;
        // 0x188ccc: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188CD0u;
        goto label_188cd0;
    }
    ctx->pc = 0x188CC8u;
    {
        const bool branch_taken_0x188cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x188CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CC8u;
        // 0x188ccc: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188cc8) {
            ctx->pc = 0x188D18u;
            goto label_188d18;
        }
    }
    ctx->pc = 0x188CD0u;
label_188cd0:
    // 0x188cd0: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x188cd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
label_188cd4:
    // 0x188cd4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x188cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_188cd8:
    // 0x188cd8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x188cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_188cdc:
    // 0x188cdc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x188cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_188ce0:
    // 0x188ce0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_188ce4:
    if (ctx->pc == 0x188CE4u) {
        ctx->pc = 0x188CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CE0u;
        // 0x188ce4: 0x8ea30058  lw          $v1, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188CE8u;
        goto label_188ce8;
    }
    ctx->pc = 0x188CE0u;
    {
        const bool branch_taken_0x188ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CE0u;
        // 0x188ce4: 0x8ea30058  lw          $v1, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ce0) {
            ctx->pc = 0x188CF4u;
            goto label_188cf4;
        }
    }
    ctx->pc = 0x188CE8u;
label_188ce8:
    // 0x188ce8: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x188ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_188cec:
    // 0x188cec: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x188cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_188cf0:
    // 0x188cf0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x188cf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_188cf4:
    // 0x188cf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_188cf8:
    if (ctx->pc == 0x188CF8u) {
        ctx->pc = 0x188CFCu;
        goto label_188cfc;
    }
    ctx->pc = 0x188CF4u;
    {
        const bool branch_taken_0x188cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188cf4) {
            ctx->pc = 0x188D08u;
            goto label_188d08;
        }
    }
    ctx->pc = 0x188CFCu;
label_188cfc:
    // 0x188cfc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x188cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_188d00:
    // 0x188d00: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x188d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_188d04:
    // 0x188d04: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x188d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_188d08:
    // 0x188d08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_188d0c:
    if (ctx->pc == 0x188D0Cu) {
        ctx->pc = 0x188D10u;
        goto label_188d10;
    }
    ctx->pc = 0x188D08u;
    {
        const bool branch_taken_0x188d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d08) {
            ctx->pc = 0x188D18u;
            goto label_188d18;
        }
    }
    ctx->pc = 0x188D10u;
label_188d10:
    // 0x188d10: 0x10000002  b           . + 4 + (0x2 << 2)
label_188d14:
    if (ctx->pc == 0x188D14u) {
        ctx->pc = 0x188D18u;
        goto label_188d18;
    }
    ctx->pc = 0x188D10u;
    {
        const bool branch_taken_0x188d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d10) {
            ctx->pc = 0x188D1Cu;
            goto label_188d1c;
        }
    }
    ctx->pc = 0x188D18u;
label_188d18:
    // 0x188d18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x188d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188d1c:
    // 0x188d1c: 0x0  nop
    ctx->pc = 0x188d1cu;
    // NOP
label_188d20:
    // 0x188d20: 0x8fb200d8  lw          $s2, 0xD8($sp)
    ctx->pc = 0x188d20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_188d24:
    // 0x188d24: 0xc06d130  jal         func_1B44C0
label_188d28:
    if (ctx->pc == 0x188D28u) {
        ctx->pc = 0x188D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D24u;
        // 0x188d28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D2Cu;
        goto label_188d2c;
    }
    ctx->pc = 0x188D24u;
    SET_GPR_U32(ctx, 31, 0x188D2Cu);
    ctx->pc = 0x188D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188D24u;
    // 0x188d28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x188D24u, 0x188D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188D2Cu;
label_188d2c:
    // 0x188d2c: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x188d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_188d30:
    // 0x188d30: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_188d34:
    if (ctx->pc == 0x188D34u) {
        ctx->pc = 0x188D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D30u;
        // 0x188d34: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D38u;
        goto label_188d38;
    }
    ctx->pc = 0x188D30u;
    {
        const bool branch_taken_0x188d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D30u;
        // 0x188d34: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d30) {
            ctx->pc = 0x188D80u;
            goto label_188d80;
        }
    }
    ctx->pc = 0x188D38u;
label_188d38:
    // 0x188d38: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x188d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
label_188d3c:
    // 0x188d3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x188d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_188d40:
    // 0x188d40: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x188d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_188d44:
    // 0x188d44: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x188d44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_188d48:
    // 0x188d48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_188d4c:
    if (ctx->pc == 0x188D4Cu) {
        ctx->pc = 0x188D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D48u;
        // 0x188d4c: 0x8ea30058  lw          $v1, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D50u;
        goto label_188d50;
    }
    ctx->pc = 0x188D48u;
    {
        const bool branch_taken_0x188d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D48u;
        // 0x188d4c: 0x8ea30058  lw          $v1, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d48) {
            ctx->pc = 0x188D5Cu;
            goto label_188d5c;
        }
    }
    ctx->pc = 0x188D50u;
label_188d50:
    // 0x188d50: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x188d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_188d54:
    // 0x188d54: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x188d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_188d58:
    // 0x188d58: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x188d58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_188d5c:
    // 0x188d5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_188d60:
    if (ctx->pc == 0x188D60u) {
        ctx->pc = 0x188D64u;
        goto label_188d64;
    }
    ctx->pc = 0x188D5Cu;
    {
        const bool branch_taken_0x188d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d5c) {
            ctx->pc = 0x188D70u;
            goto label_188d70;
        }
    }
    ctx->pc = 0x188D64u;
label_188d64:
    // 0x188d64: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x188d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_188d68:
    // 0x188d68: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x188d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_188d6c:
    // 0x188d6c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x188d6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_188d70:
    // 0x188d70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_188d74:
    if (ctx->pc == 0x188D74u) {
        ctx->pc = 0x188D78u;
        goto label_188d78;
    }
    ctx->pc = 0x188D70u;
    {
        const bool branch_taken_0x188d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d70) {
            ctx->pc = 0x188D80u;
            goto label_188d80;
        }
    }
    ctx->pc = 0x188D78u;
label_188d78:
    // 0x188d78: 0x10000002  b           . + 4 + (0x2 << 2)
label_188d7c:
    if (ctx->pc == 0x188D7Cu) {
        ctx->pc = 0x188D80u;
        goto label_188d80;
    }
    ctx->pc = 0x188D78u;
    {
        const bool branch_taken_0x188d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d78) {
            ctx->pc = 0x188D84u;
            goto label_188d84;
        }
    }
    ctx->pc = 0x188D80u;
label_188d80:
    // 0x188d80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x188d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188d84:
    // 0x188d84: 0x0  nop
    ctx->pc = 0x188d84u;
    // NOP
label_188d88:
    // 0x188d88: 0xc06d14c  jal         func_1B4530
label_188d8c:
    if (ctx->pc == 0x188D8Cu) {
        ctx->pc = 0x188D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D88u;
        // 0x188d8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D90u;
        goto label_188d90;
    }
    ctx->pc = 0x188D88u;
    SET_GPR_U32(ctx, 31, 0x188D90u);
    ctx->pc = 0x188D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188D88u;
    // 0x188d8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x188D88u, 0x188D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188D90u;
label_188d90:
    // 0x188d90: 0x1000000c  b           . + 4 + (0xC << 2)
label_188d94:
    if (ctx->pc == 0x188D94u) {
        ctx->pc = 0x188D98u;
        goto label_188d98;
    }
    ctx->pc = 0x188D90u;
    {
        const bool branch_taken_0x188d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d90) {
            ctx->pc = 0x188DC4u;
            goto label_188dc4;
        }
    }
    ctx->pc = 0x188D98u;
label_188d98:
    // 0x188d98: 0x8eb20050  lw          $s2, 0x50($s5)
    ctx->pc = 0x188d98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_188d9c:
    // 0x188d9c: 0x8fb300d8  lw          $s3, 0xD8($sp)
    ctx->pc = 0x188d9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_188da0:
    // 0x188da0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x188da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_188da4:
    // 0x188da4: 0xc0485c0  jal         func_121700
label_188da8:
    if (ctx->pc == 0x188DA8u) {
        ctx->pc = 0x188DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DA4u;
        // 0x188da8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188DACu;
        goto label_188dac;
    }
    ctx->pc = 0x188DA4u;
    SET_GPR_U32(ctx, 31, 0x188DACu);
    ctx->pc = 0x188DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188DA4u;
    // 0x188da8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121700u, 0x188DA4u, 0x188DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188DACu;
label_188dac:
    // 0x188dac: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x188dacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_188db0:
    // 0x188db0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x188db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_188db4:
    // 0x188db4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x188db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_188db8:
    // 0x188db8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x188db8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_188dbc:
    // 0x188dbc: 0x320f809  jalr        $t9
label_188dc0:
    if (ctx->pc == 0x188DC0u) {
        ctx->pc = 0x188DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DBCu;
        // 0x188dc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188DC4u;
        goto label_188dc4;
    }
    ctx->pc = 0x188DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x188DC4u);
        ctx->pc = 0x188DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DBCu;
        // 0x188dc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188DBCu, 0x188DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188DC4u;
label_188dc4:
    // 0x188dc4: 0x0  nop
    ctx->pc = 0x188dc4u;
    // NOP
label_188dc8:
    // 0x188dc8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x188dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_188dcc:
    // 0x188dcc: 0x4616b881  sub.s       $f2, $f23, $f22
    ctx->pc = 0x188dccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
label_188dd0:
    // 0x188dd0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x188dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_188dd4:
    // 0x188dd4: 0x8fb200e4  lw          $s2, 0xE4($sp)
    ctx->pc = 0x188dd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_188dd8:
    // 0x188dd8: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x188dd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_188ddc:
    // 0x188ddc: 0xc6a40068  lwc1        $f4, 0x68($s5)
    ctx->pc = 0x188ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_188de0:
    // 0x188de0: 0x460228c2  mul.s       $f3, $f5, $f2
    ctx->pc = 0x188de0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_188de4:
    // 0x188de4: 0x45100  sll         $t2, $a0, 4
    ctx->pc = 0x188de4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_188de8:
    // 0x188de8: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x188de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_188dec:
    // 0x188dec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x188decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_188df0:
    // 0x188df0: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x188df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_188df4:
    // 0x188df4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x188df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_188df8:
    // 0x188df8: 0x46182882  mul.s       $f2, $f5, $f24
    ctx->pc = 0x188df8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[24]);
label_188dfc:
    // 0x188dfc: 0xc6a00044  lwc1        $f0, 0x44($s5)
    ctx->pc = 0x188dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188e00:
    // 0x188e00: 0xc6a10040  lwc1        $f1, 0x40($s5)
    ctx->pc = 0x188e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188e04:
    // 0x188e04: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x188e04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_188e08:
    // 0x188e08: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x188e08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_188e0c:
    // 0x188e0c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x188e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_188e10:
    // 0x188e10: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188e10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_188e14:
    // 0x188e14: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x188e14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_188e18:
    // 0x188e18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188e18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_188e1c:
    // 0x188e1c: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x188e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
label_188e20:
    // 0x188e20: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x188e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_188e24:
    // 0x188e24: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188e24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_188e28:
    // 0x188e28: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x188e28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_188e2c:
    // 0x188e2c: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x188e2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_188e30:
    // 0x188e30: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x188e30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_188e34:
    // 0x188e34: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x188e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
label_188e38:
    // 0x188e38: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188e38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_188e3c:
    // 0x188e3c: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x188e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_188e40:
    // 0x188e40: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x188e40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_188e44:
    // 0x188e44: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x188e44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_188e48:
    // 0x188e48: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x188e48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_188e4c:
    // 0x188e4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188e4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_188e50:
    // 0x188e50: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x188e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_188e54:
    // 0x188e54: 0xffb40010  sd          $s4, 0x10($sp)
    ctx->pc = 0x188e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 20));
label_188e58:
    // 0x188e58: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x188e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_188e5c:
    // 0x188e5c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x188e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_188e60:
    // 0x188e60: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x188e60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_188e64:
    // 0x188e64: 0xc062128  jal         func_1884A0
label_188e68:
    if (ctx->pc == 0x188E68u) {
        ctx->pc = 0x188E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E64u;
        // 0x188e68: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188E6Cu;
        goto label_188e6c;
    }
    ctx->pc = 0x188E64u;
    SET_GPR_U32(ctx, 31, 0x188E6Cu);
    ctx->pc = 0x188E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188E64u;
    // 0x188e68: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1884A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1884A0u, 0x188E64u, 0x188E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E6Cu;
label_188e6c:
    // 0x188e6c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x188e6cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188e70:
    // 0x188e70: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x188e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_188e74:
    // 0x188e74: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x188e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_188e78:
    // 0x188e78: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x188e78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_188e7c:
    // 0x188e7c: 0xc6a10040  lwc1        $f1, 0x40($s5)
    ctx->pc = 0x188e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188e80:
    // 0x188e80: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x188e80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_188e84:
    // 0x188e84: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x188e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188e88:
    // 0x188e88: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x188e88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_188e8c:
    // 0x188e8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x188e8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_188e90:
    // 0x188e90: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x188e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
label_188e94:
    // 0x188e94: 0x0  nop
    ctx->pc = 0x188e94u;
    // NOP
label_188e98:
    // 0x188e98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x188e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_188e9c:
    // 0x188e9c: 0x0  nop
    ctx->pc = 0x188e9cu;
    // NOP
label_188ea0:
    // 0x188ea0: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x188ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_188ea4:
    // 0x188ea4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x188ea4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_188ea8:
    // 0x188ea8: 0x1460feb2  bnez        $v1, . + 4 + (-0x14E << 2)
label_188eac:
    if (ctx->pc == 0x188EACu) {
        ctx->pc = 0x188EB0u;
        goto label_188eb0;
    }
    ctx->pc = 0x188EA8u;
    {
        const bool branch_taken_0x188ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188ea8) {
            ctx->pc = 0x188974u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188974;
        }
    }
    ctx->pc = 0x188EB0u;
label_188eb0:
    // 0x188eb0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x188eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_188eb4:
    // 0x188eb4: 0xc7b80030  lwc1        $f24, 0x30($sp)
    ctx->pc = 0x188eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_188eb8:
    // 0x188eb8: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x188eb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_188ebc:
    // 0x188ebc: 0xc7b7002c  lwc1        $f23, 0x2C($sp)
    ctx->pc = 0x188ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_188ec0:
    // 0x188ec0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x188ec0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_188ec4:
    // 0x188ec4: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x188ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_188ec8:
    // 0x188ec8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x188ec8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_188ecc:
    // 0x188ecc: 0xc7b50024  lwc1        $f21, 0x24($sp)
    ctx->pc = 0x188eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_188ed0:
    // 0x188ed0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x188ed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_188ed4:
    // 0x188ed4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x188ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_188ed8:
    // 0x188ed8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x188ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_188edc:
    // 0x188edc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x188edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_188ee0:
    // 0x188ee0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x188ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_188ee4:
    // 0x188ee4: 0x3e00008  jr          $ra
label_188ee8:
    if (ctx->pc == 0x188EE8u) {
        ctx->pc = 0x188EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EE4u;
        // 0x188ee8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188EECu;
        goto label_fallthrough_0x188ee4;
    }
    ctx->pc = 0x188EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EE4u;
        // 0x188ee8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x188ee4:
    ctx->pc = 0x188EECu;
}
